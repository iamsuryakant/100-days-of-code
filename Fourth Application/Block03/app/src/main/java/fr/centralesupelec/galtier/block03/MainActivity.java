package fr.centralesupelec.galtier.block03;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // These 2 lines add a background image to the button labeled "BIG".
        // This is not demonstrated in the step-by-step video,
        // but the summary slide at the end of the video mentions that possibility.
        Button button_big = (Button) findViewById(R.id.button_big);
        button_big.setBackgroundResource(R.drawable.compass);
    }
}
