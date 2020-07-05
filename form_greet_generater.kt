/**
To run this programm locally, follow the steps below.
$ brew install kotlin
$ kotlinc form_greet_generater.kt -include-runtime -d form_greet_generater.jar
$ kotlin form_greet_generater.jar mayuko dog male koma
*/

fun main(args: Array<String>) {
    val userName = args[0] //"mayuko"
    val petType = args[1] //"dog"
    val petGender = args[2] //"male"
    val petName = args[3] //"Koma"
    val temp: String = """Hello, ${userName}! You have a ${petType}, and ${if (petGender=="male") "his" else "her"} name is ${petName}."""
    print(temp)
}