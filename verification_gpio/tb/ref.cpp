#include <cstdint>
#include <cstdint>
#include <iostream>
//
// GPIO REGISTER MAP
//
static constexpr uint32_t GPIO_OUT_REG       = 0x0;
static constexpr uint32_t GPIO_IN_REG        = 0x4;
static constexpr uint32_t GPIO_IN_DBNC_REG   = 0x8;

//
// GPIO CONFIGURATION
//
static constexpr uint32_t GPI_WIDTH = 8;
static constexpr uint32_t GPO_WIDTH = 16;

//
// GPIO MASKS
//
static constexpr uint32_t GPI_MASK =
    (1u << GPI_WIDTH) - 1;

static constexpr uint32_t GPO_MASK =
    (1u << GPO_WIDTH) - 1;

//
// REFERENCE REGISTERS
//
static uint32_t ref_gpio = 0;

//
// 3-stage synchronized GPIO input
//
static uint32_t ref_gp_i_q[3] = {0, 0, 0};

//
// Debounced GPIO input
//
static uint32_t ref_gp_i_dbnc = 0;

//
// RESET MODEL
//
void ref_reset()
{
    ref_gpio = 0;

    ref_gp_i_q[0] = 0;
    ref_gp_i_q[1] = 0;
    ref_gp_i_q[2] = 0;

    ref_gp_i_dbnc = 0;
}

//
// UPDATE GPIO INPUT PIPELINE
// Call once per clock cycle
//
//
//
static uint32_t ref_dbnc_cnt  = 0;
static uint32_t ref_dbnc_prev = 0;

void ref_update_inputs(uint32_t gp_i)
{
    gp_i &= GPI_MASK;

    //
    // 3-stage synchronizer
    //
    ref_gp_i_q[2] = ref_gp_i_q[1];
    ref_gp_i_q[1] = ref_gp_i_q[0];
    ref_gp_i_q[0] = gp_i;

    //
    // Current synchronized input
    //
    uint32_t sync_in = ref_gp_i_q[2];

    //
    // Debounce logic
    //
    if (sync_in != ref_dbnc_prev)
    {
        ref_dbnc_cnt++;

        if (ref_dbnc_cnt >= 500)
        {
            ref_gp_i_dbnc = sync_in;
            ref_dbnc_prev = sync_in;
            ref_dbnc_cnt  = 0;
        }
/*std::cout
    << "ref_gp_i_dbnc = 0x"
    << std::dec
    << ref_gp_i_dbnc
    << " ref_dbnc_cnt = 0x"
    << ref_dbnc_cnt
    << std::endl;*/
    }	
    else
    {
        ref_dbnc_cnt = 0;
    }
}
/*
 * void ref_update_inputs(uint32_t gp_i)
{
    gp_i &= GPI_MASK;

    //
    // 3-stage synchronizer
    //
    ref_gp_i_q[2] = ref_gp_i_q[1];
    ref_gp_i_q[1] = ref_gp_i_q[0];
    ref_gp_i_q[0] = gp_i;

    //
    // Simplified debounce model
    //
    ref_gp_i_dbnc = ref_gp_i_q[2];
}
*/
//
// WRITE MODEL
//
void ref_write(
    uint32_t addr,
    uint32_t data,
    uint8_t be)
{
    //
    // GPIO OUTPUT REGISTER
    //
    if (addr != GPIO_OUT_REG)
        return;

    //
    // Byte-enable handling
    //
    for (int i = 0; i < 4; i++)
    {
        if (be & (1 << i))
        {
            uint32_t mask =
                0xFFu << (8 * i);

            ref_gpio =
                (ref_gpio & ~mask) |
                (data & mask);
        }
    }

    //
    // Apply GPIO width masking
    //
    ref_gpio &= GPO_MASK;
}

//
// READ MODEL
//
uint32_t ref_read(uint32_t addr)
{
    switch (addr)
    {
        //
        // GPIO OUTPUT REGISTER
        //
        case GPIO_OUT_REG:
            return ref_gpio;

        //
        // GPIO INPUT REGISTER
        //
        case GPIO_IN_REG:
            return ref_gp_i_q[2];

        //
        // DEBOUNCED GPIO INPUT REGISTER
        //
        case GPIO_IN_DBNC_REG:
            return ref_gp_i_dbnc;

        default:
            return  0;
    }
}

//
// GET GPIO OUTPUT
//
uint32_t ref_get_gpio()
{
    return ref_gpio;
}

//
// GET SYNCHRONIZED GPIO INPUT
//
uint32_t ref_get_gp_i()
{
    return ref_gp_i_q[2];
}

//
// GET DEBOUNCED GPIO INPUT
//
uint32_t ref_get_gp_i_dbnc()
{
    return ref_gp_i_dbnc;
}






/*
 
#include <cstdint>

//
// GPIO WIDTH CONFIGURATION
//
static constexpr uint32_t GPIO_WIDTH = 16;

//
// GPIO MASK
//
static constexpr uint32_t GPIO_MASK =
    (GPIO_WIDTH >= 32)
        ? 0xFFFFFFFFu
        : ((1u << GPIO_WIDTH) - 1);

//
// REFERENCE GPIO STORAGE
//
static uint32_t ref_gpio_out = 0;

//
// RESET MODEL
//
void ref_reset()
{
    ref_gpio_out = 0;
}

//
// WRITE MODEL
//
void ref_write(
    uint32_t addr,
    uint32_t data,
    uint8_t be)
{
    //
    // GPIO output register @ 0x0
    //
    if (addr != 0x0)
        return;

    //
    // Byte-enable handling
    //
    for (int i = 0; i < 4; i++)
    {
        if (be & (1 << i))
        {
            uint32_t mask =
                0xFFu << (8 * i);

            ref_gpio_out =
                (ref_gpio_out & ~mask) |
                (data & mask);
        }
    }

    //
    // Apply GPIO width truncation
    //
    ref_gpio_out &= GPIO_MASK;
}

//
// GET GPIO VALUE
//
uint32_t ref_get_gpio()
/
    return ref_gpio_out;
}*/
