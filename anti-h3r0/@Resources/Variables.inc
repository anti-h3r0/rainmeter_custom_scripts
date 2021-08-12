[Variables]
MyFont=Arial
MyFontSize=12
DateFontSize=9
TimeFontSize=17
WeatherFontSize=7

MyFontColor=255,255,255,155
MyEffect=Shadow
MyEffectColor=0,0,0,255

LowerBarHeight=53
TimeHeight=(#LowerBarHeight# - 3)
WeatherHeight=(#LowerBarHeight# + 10)
DateHeight=(#LowerBarHeight# + 7)

LowerBarHeight2=0
TimeHeight2=(#LowerBarHeight2# - 3)
WeatherHeight2=(#LowerBarHeight2# + 10)
DateHeight2=(#LowerBarHeight2# + 7)

DayX=36
DateX=(#DayX# - 2)
TimeX=(#DateX# + 17)
TempX=(#TimeX# + 65)




;Change player type and path, see below for player types

;AIMP
;MediaPlayer=AIMP
;Fully supported. Tested with AIMP 2.61.
;MediaPath="C:\Program Files (x86)\AIMP\AIMP.exe"

;foobar2000
;MediaPlayer=CAD
;Fully supported. The foo_cad plugin (download) needs to be installed.
;MediaPath=

;iTunes
MediaPlayer=iTunes
;Fully supported. Tested with iTunes 10.2.
MediaPath="C:\Program Files\iTunes\iTunes.exe"

;J. River Media Center and Media Jukebox
;MediaPlayer=CAD
;Fully supported through the CAD interface with Media Center 19 and later. More information here.
;MediaPath=

;MediaMonkey
;MediaPlayer=MediaMonkey
;Fully supported. Tested with MediaMonkey 3.2.5.
;MediaPath=

;MusicBee
;MediaPlayer=CAD
;Fully supported. MusicBee 1.2 (or higher) is required.
;MediaPath=

;Winamp
;MediaPlayer=Winamp
;Fully supported.
;MediaPath="C:\Program Files (x86)\Winamp\winamp.exe"

;WMP
;MediaPlayer=WMP
;Fully supported, except for the Repeat / Shuffle types.
;MediaPath="C:\ProgramFiles(x86)\Windows Media Player\wmplayer.exe"