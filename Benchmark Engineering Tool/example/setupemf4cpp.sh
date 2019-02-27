sudo apt-get install build-essential

sudo apt-get install qtcreator

sudo apt-get install qt5-default

### TODO create a repo and include generator jar file!!!
git clone https://github.com/catedrasaes-umu/emf4cpp.git #to be changed with our github location

cd emf4cpp

cd builds

./generator-release.sh

./bootstrap.sh

cd release

cmake .

make

sudo make install
