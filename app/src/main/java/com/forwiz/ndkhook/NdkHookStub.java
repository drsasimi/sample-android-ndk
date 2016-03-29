package com.forwiz.ndkhook;

/**
 * NDK 상에서 {@link System#currentTimeMillis()}을 호출하여 나온 결과를
 * Android Log를 통해 출력하는 간단한 기능을 구현한 클래스이다.
 */
public class NdkHookStub {

    static {
        System.loadLibrary("ndkhook");
    }

    /**
     * {@link System#currentTimeMillis()}을 호출하여 현재 시간을
     * Milliseconds로 로그에 출력한다.
     * @return Always return <b>true</b>
     */
    native boolean getTimeMillisecond();
}
