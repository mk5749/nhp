package main

import (
	"fyne.io/fyne"
 	"fyne.io/fyne/app"
        "fyne.io/fyne/widget"
)

func main() {
    a := app.New()
    win := a.NewWindow("nhp v0")
	win.Resize(fyne.NewSize(800,600))
   	win.SetContent(widget.NewVBox(
      	 widget.NewLabel("Update hero names and picks be here!"),
       	 widget.NewButton("Update!", func() {
            a.Quit()
         }),
    ))
    win.ShowAndRun()
}

		
	
