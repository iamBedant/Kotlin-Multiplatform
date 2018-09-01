// greeting/ios/src/main/kotlin/ios.kt
package org.greeting

actual class Platform actual constructor() {
    actual val platform: String = "iOS"
    actual fun getTimestamp(): String = "From iOS"
}