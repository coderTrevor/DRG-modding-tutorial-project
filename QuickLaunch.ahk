; The next four lines are providing by AHK when creating a new script
#NoEnv ; Recommended for performance and compatibility with future AutoHotkey releases.
#Warn ; Enable warnings to assist with detecting common errors.
SendMode Input ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%\DRGModdingAutomationScripts ; Ensures a consistent starting directory.

; This allows the script to be edited more easily while it's running. Ctrl-s will save it and reload it.
~^s::
	reload
return

; If the active window belongs to the Unreal Editor
#IfWinActive ahk_class UnrealWindow
; Respond to ctrl-p
^p::
	; Assume of the folder this script is in describes the project and present a traytip to the user saying this project is being packed.
	SplitPath, A_ScriptDir, dir,
	TrayTip, Packing, %dir%
	; Use DRGModdingAutomationScripts to pack and run the script
	Run, QuickTestMod.bat
	WinWaitActive ahk_class ConsoleWindowClass
	Send f
	
	; When the console window closes, hide the tray tip
	WinWaitNotActive ahk_class ConsoleWindowClass
	TrayTip
return