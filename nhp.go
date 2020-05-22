package main

import (
	"fyne.io/fyne"
 	"fyne.io/fyne/app"
        "fyne.io/fyne/widget"
)

func main() {
    nhp := app.New()
    mainwin := nhp.NewWindow("nhp v0")
	mainwin.Resize(fyne.NewSize(600,600))
	
	win_res := widget.NewButton("reset", func() {})
	win_upd := widget.NewButton("update", func() {nhp.Quit()})
	
	buttons := fyne.NewContainerWithLayout(layout.NewHBoxLayout(),layout.NewSpacer(),win_res,layout.NewSpacer(),win_upd,layout.NewSpacer())
	
    mainwin.SetContent(container)
    mainwin.ShowAndRun()
}

		
	
