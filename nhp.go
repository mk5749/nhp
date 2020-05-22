package main

import (
	"image/color"
	"log"
	"fyne.io/fyne"
    "fyne.io/fyne/app"
    "fyne.io/fyne/widget"
	"fyne.io/fyne/canvas"
	"fyne.io/fyne/layout"
	)

func main() {
    nhp := app.New()
	heroes := []string{"Axe","Legion Commander","Ursa"}
	
    mainwin := nhp.NewWindow("nhp v0")
	mainwin.Resize(fyne.NewSize(400,360))
	//mainwin.SetFixedSize(true)
	
	win_res := widget.NewButton("reset", func() {})
	win_upd := widget.NewButton("update", func() {nhp.Quit()})
	
	/*
	text1 := canvas.NewText("playername0", color.RGBA{0x00,0x42,0xff,0xff})
	text2 := canvas.NewText("playername1", color.RGBA{0x1c,0xe6,0xb9,0xff})
	text3 := canvas.NewText("playername2", color.RGBA{0x54,0x00,0x81,0xff})
	text4 := canvas.NewText("playername3", color.RGBA{0xff,0xfc,0x00,0xff})
	text5 := canvas.NewText("playername4", color.RGBA{0xfe,0x8a,0x0e,0xff})
	text6 := canvas.NewText("playername5", color.RGBA{0xe5,0x5b,0xb0,0xff})
	text7 := canvas.NewText("playername6", color.RGBA{0x95,0x96,0x97,0xff})
	text8 := canvas.NewText("playername7", color.RGBA{0x7e,0xbf,0xf1,0xff})
	text9 := canvas.NewText("playername8", color.RGBA{0x10,0x62,0x46,0xff})
	text0 := canvas.NewText("playername9", color.RGBA{0x4e,0x2a,0x04,0xff})
	*/
	textb := canvas.NewText(" ", color.RGBA{0x4e,0x2a,0x04,0xff})
	
	namein1 := widget.NewEntry()
	namein2 := widget.NewEntry()
	namein3 := widget.NewEntry()
	namein4 := widget.NewEntry()
	namein5 := widget.NewEntry()
	namein6 := widget.NewEntry()
	namein7 := widget.NewEntry()
	namein8 := widget.NewEntry()
	namein9 := widget.NewEntry()
	namein0 := widget.NewEntry()
	
	hero1 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero2 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero3 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero4 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero5 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero6 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero7 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero8 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero9 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	hero0 := widget.NewSelect(heroes, func(value string){log.Println(value)})
	
	pid1 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero1,namein1)
	pid2 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero2,namein2)
	pid3 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero3,namein3)
	pid4 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero4,namein4)
	pid5 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero5,namein5)
	pid6 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero6,namein6)
	pid7 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero7,namein7)
	pid8 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero8,namein8)
	pid9 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero9,namein9)
	pid0 := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),hero0,namein0)
		
	buttons := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),layout.NewSpacer(),win_res,layout.NewSpacer(),win_upd,layout.NewSpacer())
	//colors
	//names := fyne.NewContainerWithLayout(layout.NewVBoxLayout(),textb,text1,text2,text3,text4,text5,textb,text6,text7,text8,text9,text0,textb)
	//picks := fyne.NewContainerWithLayout(layout.NewVBoxLayout(),textb,hero1,hero2,hero3,hero4,hero5,textb,hero6,hero7,hero8,hero9,hero0,textb)
	//namesin := fyne.NewContainerWithLayout(layout.NewVBoxLayout(),textb,namein1,namein2,namein3,namein4,namein5,textb,namein6,namein7,namein8,namein9,namein0,textb)
	playerinfo := fyne.NewContainerWithLayout(layout.NewVBoxLayout(),textb,pid1,pid2,pid3,pid4,pid5,textb,pid6,pid7,pid8,pid9,pid0,textb)
	
	
    mainwin.SetContent(fyne.NewContainerWithLayout(layout.NewVBoxLayout(), buttons, playerinfo))
    mainwin.ShowAndRun()
}
