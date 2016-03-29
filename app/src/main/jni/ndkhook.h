//
// Created by Lee Sang Hyeon on 16. 3. 29..
//

#include <jni.h>
#include <android/log.h>

#include <stdio.h>
#include <stdlib.h>

#define LOGV(...)   __android_log_print(ANDROID_LOG_VERBOSE, "maguro", __VA_ARGS__)
#define LOGD(...)   __android_log_print(ANDROID_LOG_DEBUG, "maguro", __VA_ARGS__)
#define LOGI(...)   __android_log_print(ANDROID_LOG_INFO, "maguro", __VA_ARGS__)
#define LOGW(...)   __android_log_print(ANDROID_LOG_WARN, "maguro", __VA_ARGS__)
#define LOGE(...)   __android_log_print(ANDROID_LOG_ERROR, "maguro", __VA_ARGS__)

#ifndef NDKHOOK_NDKHOOK_H
#define NDKHOOK_NDKHOOK_H


#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_forwiz_ndkhook_NdkHookStub
 * Method:    getTimeMillisecond
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_forwiz_ndkhook_NdkHookStub_getTimeMillisecond
(JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif

#endif //NDKHOOK_NDKHOOK_H
