package com.example.convertmilestokm;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import java.text.DecimalFormat;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button buttonConvMilesToKm = (Button) findViewById(R.id.buttonConvMilesToKm);
        buttonConvMilesToKm.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                EditText textBoxMiles = (EditText) findViewById(R.id.editTextTextMiles);
                EditText textBoxKm = (EditText) findViewById(R.id.editTextTextKm);
                double vMiles = Double.valueOf(textBoxMiles.getText().toString());
                double vKm = vMiles / 0.62137;
                DecimalFormat formatVal = new DecimalFormat("##.##");
                textBoxKm.setText(formatVal.format(vKm));
            }
        });
        Button buttonConvKmToMiles = (Button) findViewById(R.id.buttonConvKmToMiles);
        buttonConvKmToMiles.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                EditText textBoxMiles = (EditText) findViewById(R.id.editTextTextMiles);
                EditText textBoxKm = (EditText) findViewById(R.id.editTextTextKm);
                double vKm = Double.valueOf(textBoxKm.getText().toString());
                double vMiles = vKm * 0.62137;
                DecimalFormat formatVal = new DecimalFormat("##.##");
                textBoxMiles.setText(formatVal.format(vMiles));
            }
        });
    }
}