package main

import (
	"image/color"
	"fyne.io/fyne"
        "fyne.io/fyne/app"
        "fyne.io/fyne/widget"
	"fyne.io/fyne/canvas"
	"fyne.io/fyne/layout"
	)

func main() {
    nhp := app.New()
    mainwin := nhp.NewWindow("nhp v0")
	mainwin.Resize(fyne.NewSize(600,360))
	
	win_res := widget.NewButton("reset", func() {})
	win_upd := widget.NewButton("update", func() {nhp.Quit()})
	
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
	textb := canvas.NewText(" ", color.RGBA{0x4e,0x2a,0x04,0xff})
	
	
	
	
	
	buttons := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),layout.NewSpacer(),win_res,layout.NewSpacer(),win_upd,layout.NewSpacer())
	//colors
	names := fyne.NewContainerWithLayout(layout.NewVBoxLayout(),textb,text1,text2,text3,text4,text5,textb,text6,text7,text8,text9,text0,textb)
	//picks
	
	
	
    mainwin.SetContent(fyne.NewContainerWithLayout(layout.NewVBoxLayout(), buttons, names))
    mainwin.ShowAndRun()
}
