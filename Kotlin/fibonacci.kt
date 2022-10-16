fun main(){

    var x = 1
    var y = 1

    print("Enter range: ")
    val range = readLine()!!.toInt()

    for (i in 1..range){
        print("$x + ")
        val xTem = x+y
        x = y
        y = xTem
    }
}
