fun main(args: Array<String>) {
    val arry = intArrayOf(1,4,6,7,8,15,18,19,22,26)
    val targetY = 15
    val scope = findScope(arry, targetY)
    println("Between index:${scope.get(0)} and index:${scope.get(1)}")
}

fun findScope(arr: IntArray, T: Int): IntArray {
    var l = 0 // lower
    var u = arr.size-1 // upper
    var m = 0 // middle
    while (l<=u && l<arr.size && u>-1) {
        m = (l+u) / 2

        if (arr.get(m) == T) {
            return intArrayOf(m, m)
        } else if (arr.get(m) < T) {
            if (m >= arr.size-1) {
                return intArrayOf(arr.size-1, arr.size)
            }
            if (arr.get(m+1) > T) {
                return intArrayOf(m, m+1)
            } else {
                l = m + 1
            }
        } else if (arr.get(m) > T) {
            if (m <= 0) {
                return intArrayOf(-1, 0)
            }
            if (arr.get(m-1) < T) {
                return intArrayOf(m-1, m)
            } else {
                u = m - 1
            }
        }
    }
    return intArrayOf(-1, arr.size) // does not reach here
}