step 1.- clone the repo to your local

git clone https://github.com/ArfDesign-DB/modified-IPs.git

step 2.- git initialization

git init

step 3.- set your user name and email (linked to you github account)

git config --global user.name "Your Name"

git config --global user.email "you@example.com"

*(this will be used for your commits)*
*(if you want to limit the user name and email to this repo only you can remove --global)*

step 4.- copy your verification IP repo here(inside modified_IPs)

*(<your_ip_verification_folder> ----->>>>>> modified_IPs)*

cp -r </source> </destination>

step 5.- add (stagging) commit and push (one by one)

git add <your_ip_verification_folder_name>

git commit -m "added <YOUR IP NAME>"

git branch -M main

git remote add origin https://github.com/ArfDesign-DB/modified-IPs.git
*(if shows already exits go for the push)*

git push -u origin main



user name :- <your_git_username> 
password (Token):- will be shared through email
