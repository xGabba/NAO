mkdir ~/share
sudo su
# cp /media/sf_share/sdk.tar.gz /home/user/share
# exit
cd share && tar xf sdk.tar.gz && cd
qitoolchain create "test-001" ~/share/sdk/toolchain.xml
