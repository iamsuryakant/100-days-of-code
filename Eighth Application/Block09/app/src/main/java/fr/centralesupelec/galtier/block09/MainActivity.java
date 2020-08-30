package fr.centralesupelec.galtier.block09;

import android.content.Intent;
import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // display the GUI defined in the activity_main.xml file
        setContentView(R.layout.activity_main);
    }

    /**
     * called when the Send button from activity_main.xml is clicked
     * request the service from a messaging app to send the message composed by the user to 5556
     * @param v the View which triggered the method call: should refer to button_send
     */
    public void sendMessage(View v) {
        // retrieve the text typed in by the user in the EditText
        String message = ((EditText)(findViewById(R.id.editText_message))).getText().toString();
        // create an implicit intent to any app with SENDTO capability
        // set the destination (5556 is the phone number of the second emulator instance)
        Uri destination = Uri.parse("smsto:5556");
        Intent smsIntent = new Intent(Intent.ACTION_SENDTO, destination);
        // pass the composed message to the messaging activity
        smsIntent.putExtra("sms_body", message);
        // launch the intent
        startActivity(smsIntent);
    }
}