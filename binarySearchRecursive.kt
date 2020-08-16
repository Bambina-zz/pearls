fun main(args: Array<String>) {
    val arr = intArrayOf(1,3,5,7,7,8,9)
    val T = 11
    val l = 0
    val u = arr.size
    val index = binarySearch(arr, l, u, T)
    println(index)
}

fun binarySearch(arr: IntArray, l: Int, u : Int, T: Int): Int {
    if (l>u || l>arr.size-1 || u<0) {
        return -1
    }
    val m = (l+u) / 2
    val M = arr.get(m)
    if (M == T) {
        return m
    }
    var newL = l
    var newU = u
    if (M > T) {
        newU = m-1
    } else if (M < T) {
        newL = m+1
    }
    return binarySearch(arr, newL, newU, T)
}