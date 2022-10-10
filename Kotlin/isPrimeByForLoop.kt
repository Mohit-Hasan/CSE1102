fun main(){

    var isPrime = true

    print("Enter number: ")
    val num = readLine()!!.toInt()

    for (a in num-1 downTo 2 ){

        if (num%a==0){
            isPrime = false
            break
        }
    }
    if (isPrime){
        println("$num is a prime number")
    } else {
        println("$num is not a prime number")
    } 
}
