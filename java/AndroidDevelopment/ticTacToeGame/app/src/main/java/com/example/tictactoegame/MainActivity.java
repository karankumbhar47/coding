package com.example.tictactoegame;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.provider.ContactsContract;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    public static int playerTerm = 0;
    public static boolean firstTap = false;
    public static boolean secondTap = true;
    public  static int[] cellState = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    int [][] winingPositions = {
            {0,1,2}, {3,4,5}, {6,7,8},
            {1,3,6}, {1,4,7}, {2,5,8},
            {0,4,8}, {2,4,6}
    };

//    public static boolean resetGame = false;
    public void setResetGame(View view){
        playerTerm = 0;
        int[] imageViewIds = {
                R.id.imageView0,
                R.id.imageView1,
                R.id.imageView2,
                R.id.imageView3,
                R.id.imageView4,
                R.id.imageView5,
                R.id.imageView6,
                R.id.imageView7,
                R.id.imageView8
        };
        for (int i=0; i<cellState.length; i++){
            cellState[i] = 2;
            ((ImageView)findViewById(imageViewIds[i])).setImageResource(0);
        }
        TextView status = findViewById(R.id.gameStatus);
        status.setText("X's Turn Tap to Play");
//        resetGame = false;
        firstTap = false;
        secondTap = true;
    }

    public  void playerTap(View view){

        ImageView img = (ImageView)view;
        TextView status = findViewById(R.id.gameStatus);
        int tappedImage = Integer.parseInt(img.getTag().toString());
        if(cellState[tappedImage]==2 && secondTap){
//            status.setText(tappedImage);
//            System.out.println(tappedImage);
            cellState[tappedImage] = playerTerm;
            img.setTranslationY(-1000f);
            if(playerTerm==0){
                img.setImageResource(R.drawable.x);
                status.setText("O's term Tap to play");
                playerTerm = 1;
            }
            else{
                img.setImageResource(R.drawable.o);
                status.setText("X's term Tap to play");
                playerTerm = 0;
            }
            img.animate().translationYBy(1000f).setDuration(300);
        }

        if(firstTap){
            setResetGame(view);
        }
        else{
            int allEntries = 1;
            for(int val: cellState){
                if(val==2){
                    allEntries = 0;
                    break;
                }
            }
            if(allEntries==1) {
                firstTap = true;
            }
        }
        //winning or not
        for(int[] positions : winingPositions ){
             if(cellState[positions[0]]==cellState[positions[1]] &&
                     cellState[positions[1]]==cellState[positions[2]] &&
                     cellState[positions[0]]!=2){
                 //win
                 firstTap = true;
                 secondTap = false;
//                 setResetGame(view);
                 if(cellState[positions[0]]==1){
                     status.setText("O win the game");
                     break;
                 }
                 else{
                     status.setText("X win the game");
                     break;
                 }
             }
        }



    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}