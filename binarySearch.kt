fun main(args: Array<String>) {
    val arr = intArrayOf(1,3,5,7,7,8,8,8,9)
    val T = 8
    val P = 100
    val index = binarySearch(arr, T)
    arr.set(index, P)
    println(arr.joinToString())
}

fun binarySearch(arr: IntArray, T: Int): Int {
    // (0, n-1)にあるべき
    var l = 0
    var u = arr.size - 1
    var m = 0
    // (l, u)にあるべき
    // l<=u && l<n && u>-1
    while (l<=u && l<arr.size && u>-1) { 
        // (l, u)にあるべき
        // l <= m <= u
        m = (l+u) / 2
        if (arr.get(m) == T) {
            if (m == 0) {
                return m
            } else {
                val previous = arr.get(m-1)
                if (previous == T) {
                    // (l, u)にあるべき && (m, n-1)にない
                    // (l, m-1)にあるべき
                    u = m - 1
                } else {
                    return m
                }
            }
        } else if (arr.get(m) < T) {
            // (l, u)にあるべき && (0, m)にない
            // (m+1, u)にあるべき
            l = m + 1
        } else if (arr.get(m) > T) {
            // (l, u)にあるべき && (m, n-1)にない
            // (l, m-1)にあるべき
            u = m - 1
        }
    }
    // (l, u)にない
    return -1
}
