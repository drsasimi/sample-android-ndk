package com.forwiz.ndkhook;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // 액티비티는 장식입니다.
        // 단지 코드를 실행할 뿐
        NdkHookStub stub = new NdkHookStub();
        stub.getTimeMillisecond();
    }

}
