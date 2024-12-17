#Git and GH

Putting this here since it took me a while to figure out.

###Install GH
```sh
sudo apt install gh
```

###Configure Git
```sh
git config --global user.name "MITechMerc"
git cofig --global user.email "MITechMerc@gmail.com"
```

###Authenticate with GH
```sh
gh auth login
```
If you authenticate via browser option - the 6 digit code will appear in your console window (scroll up past error messages if needed)

###Clone your repo  
(address listed under the Code-Green button)  
```sh
git clone https://github.com/MITechMerc/random.git
```

###Push Changes back to Github
```sh
git push -u origin main
```

Continue using git per normal. 
