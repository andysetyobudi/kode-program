ECHO OFF
TITLE Mi4i ToolKit By magdag
:STARTS

CLS
ECHO.     Mi4i Twrp - Rooting - Efs backup / restore Toolkit By magdag
ECHO.
ECHO. =============================================================================
ECHO. DO READ AND FOLLOW THESE INSTRUCTIONS BELOW :
ECHO.1.Disable Antivirus or  Mi phone suite before starting this app
ECHO.
ECHO.2.Make sure that Adb debugging is enabled - to enable tab miui version 7 times
ECHO.in about phone, then go to additional settings in menu then developer option 
ECHO.Then Enable Usb Debugging.
ECHO.
ECHO.                          ROOTING CREDITS TO  " 超哥少爷 "
ECHO. =============================================================================
ECHO.
ECHO.      Options
ECHO.
ECHO.           1.Root Your Mi4i       
ECHO.
ECHO.           2.Flash Twrp 2.8.6.0 On Mi4i                             
ECHO.                                         
ECHO.           3.Backup Mi4i EFS (IMEI)       
ECHO.  
ECHO.           4.Restore Mi4i EFS (IMEI) 
ECHO. 
ECHO.           5.Flash STOCK recovery 
ECHO. 
ECHO.           6.EXIT
ECHO. =============================================================================
:CHO
set choice=
set /p choice= Enter your Choice then press Enter key:

if /i "%choice%"=="1" goto ROOT
if /i "%choice%"=="2" goto RECOVERY
if /i "%choice%"=="3" goto BACKUP
if /i "%choice%"=="4" goto RESTORE
if /i "%choice%"=="5" goto STOCK
if /i "%choice%"=="6" goto QUIT

echo Selection is invalid, please re-enter
echo.

:ROOT
CLS
CLS
Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul
adb kill-server >NUL 2>NUL
ECHO. --- Waiting for device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO.
adb wait-for-device >NUL 2>NUL
ECHO. --- Waiting for device
ECHO.     Later on the phone will enter fastboot mode
ECHO.
adb reboot bootloader
ECHO. --- Wait for the device
ECHO.
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO.
fastboot boot boot.img
ECHO.
ECHO.******************************************************
ECHO.* Phone will automatically restart many times        *
ECHO.******************************************************
ECHO.
ECHO.  Press any key to exit ...
pause  >NUL
GOTO QUIT

:RECOVERY
CLS
Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul
adb kill-server >NUL 2>NUL
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
adb wait-for-device >NUL 2>NUL
ECHO. --- Wait for the device
ECHO.     Booting into fastboot mode
adb reboot bootloader
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO. Flashing Twrp Recovery ...
fastboot1 flash recovery twrp.img
adb kill-server >NUL 2>NUL
pause
fastboot1 reboot
ECHO.  Press any key to exit ...
pause  >NUL
GOTO QUIT



:BACKUP
CLS
Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul
adb kill-server >NUL 2>NUL
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
adb wait-for-device >NUL 2>NUL
ECHO. --- Wait for the device
ECHO.    adb device
adb devices
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO. adb shell.
ECHO. Backing up EFS ...
adb shell "su -c 'mkdir "/sdcard/efs-backup/";dd if=/dev/block/mmcblk0p20 of=/sdcard/efs-backup/mmcblk0p20;dd if=/dev/block/mmcblk0p21 of=/sdcard/efs-backup/mmcblk0p21'"




ECHO. 

ECHO. 

ECHO. 


ECHO ********************************************************************************
ECHO * EFS BACKUP COMPLETED , FIND IT AT PHONE STORAGE FOLDER NAME - EFS-BACKUP     *
ECHO *                                                                              *
ECHO *            SAVE IT SOME WHERE SAFE                                           *
ECHO *                                                                              *
ECHO ********************************************************************************



ECHO.  Press any key to exit ...
pause  >NUL
GOTO QUIT



:RESTORE
CLS
Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul
adb kill-server >NUL 2>NUL
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
adb wait-for-device >NUL 2>NUL
ECHO. --- Wait for the device
ECHO.    adb device
adb devices
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO. adb shell.
ECHO. Erasing corrupted EFS...
adb shell "su -c 'dd if=/dev/zero of=/dev/block/mmcblk0p20;dd if=/dev/zero of=/dev/block/mmcblk0p21;reboot'"


ECHO. 
ECHO. Phone Rebooting ....


Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul

adb wait-for-device >NUL 2>NUL
ECHO. --- Wait for the device
ECHO.    adb device
adb devices

ECHO. Restoring Efs Backup ....
adb shell "su -c 'dd if=/sdcard/efs-backup/mmcblk0p20 of=/dev/block/mmcblk0p20;dd if=/sdcard/efs-backup/mmcblk0p21 of=/dev/block/mmcblk0p21;reboot'"


ECHO. Efs restored - phone rebooting 


ECHO. 

ECHO. 

ECHO. 
CLS

ECHO ********************************************************************************
ECHO *                 EFS RESTORE COMPLETED                                        *
ECHO *                             	                                         	    *
ECHO *                                                       				        *
ECHO *    																			*
ECHO ********************************************************************************



ECHO.  Press any key to exit ...
pause  >NUL
GOTO QUIT

:STOCK
CLS
Taskkill /F /IM adb.exe >nul 2>nul
Taskkill /F /IM tadb.exe >nul 2>nul
Taskkill /F /IM kwAdb.exe >nul 2>nul
adb kill-server >NUL 2>NUL
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
adb wait-for-device >NUL 2>NUL
ECHO. --- Wait for the device
ECHO.     Booting into fastboot mode
adb reboot bootloader
ECHO. --- Wait for the device
ECHO ********************************************************************************
ECHO * If you have been stuck in the "waiting for device"                           *
ECHO * Open task manager and kill adb.exe ,                                		    *
ECHO * also exit antivirus and mi phone suite                                       *
ECHO * also reconnect phone -Will be prompted to download and install the driver    *
ECHO ********************************************************************************
ECHO. Flashing stock Recovery ...
fastboot1 flash recovery stock.img
adb kill-server >NUL 2>NUL
pause
fastboot1 reboot
ECHO.  Press any key to exit ...
pause  >NUL
GOTO QUIT

:QUIT 
EXIT