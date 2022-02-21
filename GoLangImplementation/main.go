// You can edit this code!
// Click here and start typing.
package main

import (
	"fmt"
	"os"
    "os/exec"
    "runtime"
    "time"
	"strings"
	//"math/cmplx"
)


var clear map[string]func() //create a map for storing clear funcs

var (
	developerName string = "YuzuMin"
	versionName string = "2022.2 REV-2"
	releaseType string = "Development"
	versionCode uint64 = 1	
)

//Vtuber object
type Vtuber struct{
	firstName string
	lastName string
	audioStart uint16 
	audioEnd uint16
	imageStart uint16 
	imageEnd uint16
}

//Vtuber related functions
func (v *Vtuber) setFirstName(){
	fmt.Print("Enter Vtuber First Name (Amelia): ")
	fmt.Scanln(&v.firstName)
}

func (v *Vtuber) setLastName(){
	fmt.Print("Enter Vtuber Last Name (Watson): ")
	fmt.Scanln(&v.lastName)
}

func (v *Vtuber) getFirstNameLowercase(){
	fmt.Println(strings.ToLower(v.firstName))
}



//MAIN FUNCTION
func main() {

	splashScreen()		//SHOW PROGRAM DETAILS IN SPLASHSCREEN

	var vtuber *Vtuber
	vtuber = new(Vtuber)
	

	vtuber.setFirstName()
	vtuber.getFirstNameLowercase()

	fmt.Println(vtuber.firstName)


	/*
	inoval := complex(1,6)

	for i := 0; i < 10; i++ {
		fmt.Println(inoval)
		inoval = inoval / cmplx.Sqrt(-5+12i)

		fmt.Println("Hello, 世界")

	}
	fmt.Println("Hello, 世界")

	fmt.Print("Enter Name: ")
	var first string 
	fmt.Scanln(&first)
	*/
}




//STARTUP 
func init() {
    clear = make(map[string]func()) //Initialize it
    clear["linux"] = func() { 
        cmd := exec.Command("clear") //Linux example, its tested
        cmd.Stdout = os.Stdout
        cmd.Run()
    }
    clear["windows"] = func() {
        cmd := exec.Command("cmd", "/c", "cls") //Windows example, its tested 
        cmd.Stdout = os.Stdout
        cmd.Run()
    }
}

//CLEAR CONSOLE SCREEN
func clearConsole() {
    value, ok := clear[runtime.GOOS] //runtime.GOOS -> linux, windows, darwin etc.
    if ok { //if we defined a clear func for that platform:
        value()  //we execute it
    } else { //unsupported platform
        panic("Your platform is unsupported! I can't clear terminal screen :(")
    }
}

func splashScreen(){
	//DISPLAYS PROGRAM VERSION
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("Vtuber Noises Automation Program (GO)")
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("Version:", versionCode)
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("")
	
	time.Sleep(1 * time.Second)	//SLEEP FOR 1 SECOND
	clearConsole()				//CLEAR CONSOLE SCREEN

	//DISPLAYS PROGRAM AUTHOR
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("Vtuber Noises Automation Program (GO)")
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("By:", developerName)
	fmt.Println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	fmt.Println("")

	time.Sleep(1 * time.Second)	//SLEEP FOR 1 SECOND
	clearConsole()				//CLEAR CONSOLE SCREEN
	return						//RETURN TO MAIN PROGRAM
}


