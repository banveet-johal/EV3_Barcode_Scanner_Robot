#pragma config(Sensor, S1,     lightSensor,    sensorEV3_Color)
#pragma config(Sensor, S2,     touchSensor,    sensorEV3_Touch)
#pragma config(Motor,  motorA,          motorA,         tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          motorB,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  // create flag to run code once
	int flag = 0;
	datalogFlush();
  datalogClear();
  datalogClose();
  // while code has not run yet
  while(flag==0)
  {
    // increment flag to only run this for loop once
    flag++;

    // if datalog cant be open, alert user
     if(!datalogOpen(1021, 1, false))
      {
      	displayCenteredTextLine(4, "UNABLE TO OPEN DATALOG");
      }


    // move robot


      setMotorSpeed(motorA, 4);
      setMotorSpeed(motorB, 4);


    // for loop has 300 values because it is calibrated with motorspeed to stop scanning after covering barcode

     // add value, pause 10ms, repeat 300x
    for(int i = 0; i < 200; i++)
    {

      datalogAddValue(0, getColorReflected(S1));
      sleep(10);

    }
    // play sound to alert user than scanning has finished
      playSound(soundBeepBeep);
    // stop robot
      setMotorSpeed(motorA,0);
      setMotorSpeed(motorB, 0);
    // close datalog
      datalogClose();





  }//while

} //main
