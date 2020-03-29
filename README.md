# Embedded-C
Lab assignments from Udemy course Embedded-C

#### *Setup installation - Linux Mint 19.3*

* ##### GCC Toolchain installation
  * `$ gcc -v     // check C compiler is installed or not` 
   &nbsp;
  * Open terminal and type following command to install GCC\
  `$ sudo apt-get install gcc`
* ##### STM32Cube IDE installation
  * [Download installation for Linux](https://www.st.com/en/development-tools/stm32cubeide.html) (Debian Linux Installer)
  * Navigate to downloads folder and run following command in terminal\
  `sudo chmod +x script-name-here.sh` This command will set execute permission on installation script.
  * To run installation script run one of the following commands:
    * `sudo ./script-name-here.sh`
    or
    * `sudo sh script-name-here.sh`
    or
    * `sudo bash script-name-here.sh`

* ##### *FPU* warning fix
    Right click on the project -> properties -> expand C/C++ build -> Settings -> Tool settings -> MCU settings
  * `Floating-point unit: None`
  * `Floating-point ABI: Software implementation ( -mfloat-abi=soft )`

* ##### Installing GIT
  * Install Git using apt-get:\
   `$ sudo apt-get update`\
   `$ sudo apt-get install git`
   &nbsp;
   
  * Verify the installation was successful by typing:\
  `$ git --version`
  
* ##### Installing GIT-GUI client` GitFiend`
  * Download [`GitFiend`](https://gitfiend.com/overview) *.deb* file
  * Navigate to *Downloads* folder and type `sudo apt-get install ./package-name.deb`
  * Setup `GitFiend` and connect it with your repository
