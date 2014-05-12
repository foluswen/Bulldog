/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "../BBBIOlib/BBBiolib_PWMSS.h"

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativePwm
 * Method:    setup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativePwm_setup
  (JNIEnv * env, jclass clazz) {
	return BBBIO_PWM_Init();
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativePwm
 * Method:    teardown
 * Signature: ()I
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativePwm_teardown
  (JNIEnv * env, jclass clazz) {
	BBBIO_PWM_Release();
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativePwm
 * Method:    setPwm
 * Signature: (IFFF)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativePwm_setPwm
  (JNIEnv * env, jclass clazz, jint pwmId, jfloat frequency, jfloat dutyA, jfloat dutyB) {
	return BBBIO_PWMSS_Setting(pwmId , frequency , dutyA ,dutyB);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativePwm
 * Method:    enable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativePwm_enable
  (JNIEnv * env, jclass clazz, jint pwmId) {
	BBBIO_ehrPWM_Enable(pwmId);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativePwm
 * Method:    disable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativePwm_disable
  (JNIEnv * env, jclass clazz, jint pwmId) {
	BBBIO_ehrPWM_Disable(pwmId);
}
