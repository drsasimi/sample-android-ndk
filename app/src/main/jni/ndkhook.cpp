//
// Created by Lee Sang Hyeon on 16. 3. 29..
//

#include "ndkhook.h"

JNIEXPORT jboolean JNICALL Java_com_forwiz_ndkhook_NdkHookStub_getTimeMillisecond(JNIEnv * env, jobject jobj) {

    // 클래스를 패키지명을 포함해서 '/' 로 구분해서 인자로 넣어준다.
    jclass cls = env->FindClass("java/lang/System");

    // 타겟으로 삼을 메소드를 지정한다.
    // 인자는 (jclass object, 메소드명, 메소드의 Signature)
    // 아래는 Static 메소드에 대한 코드이며, 일반 메소드는 GetMethodId()를 사용
    jmethodID method = env->GetStaticMethodID(cls, "currentTimeMillis", "()J");

    // 실제 메소드를 호출한다. 반환값의 여부, Static인지에 따라 호출할 메소드가 다름
    jlong rt_val = env->CallStaticLongMethod(cls, method);

    LOGE("Now_Time: %f", (double)rt_val);

    return (jboolean)true;
}