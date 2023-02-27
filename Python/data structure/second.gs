//Funtion run when form submitted
//This funtion storing all imformaion in variable "allResoponses"
function onSubmit(event) {
  var allResponses ={};
  var formResponse=event.response;
  var itemsResponses = formResponse.getItemResponses();
  for(var i=0; i<itemsResponses.length; i++){
    var itemsResponse = itemsResponses[i];
    var title = itemsResponse.getItem().getTitle();
    var answer = itemsResponse.getResponse();
    allResponses[title]=answer;
  }
  allResponses['Student\'s mail']=formResponse.getRespondentEmail();
  allResponses["Time stamp"] = new Date();
  addRecord(allResponses);
  SpreadsheetApp.flush();
}

//======================================================================================================================================================================//

//Funtion taking all responses from input object and adding it to spreadSheet
function addRecord(allResponses){
  var url = 'https://docs.google.com/spreadsheets/d/14wMpg1AyVstvmg13lL4kkXIq6Teoyk_xK1FTtJ44M8s/edit#gid=0';
  var ss = SpreadsheetApp.openByUrl(url);

  var dataSheet = ss.getSheetByName('Mess Data');
  var totalInMess = dataSheet.getRange("F2").getValue();
  var totalInWaiting = dataSheet.getRange("G2").getValue();

  if (totalInMess<=4){
    var array = [allResponses["Name of the Student"],allResponses["Id. Number"],allResponses["Student's mail"],allResponses["Time stamp"]];
    totalInMess+=1;
    // SpreadsheetApp.flush()
    dataSheet.appendRow(array);
    dataSheet.getRange("F2").setValue(totalInMess);
    // SpreadsheetApp.flush()
    var id = dataSheet.getLastRow();
    if(id<=2){
      setValuesInSheet();
    }

    dataSheet.getRange("E"+id).setValue("Currently In mess");
    dataSheet.getRange("E"+id).setBackgroundRGB(52, 235, 219);
    // SpreadsheetApp.flush();

    sendMailInMess(allResponses);

  }
  else {
    totalInWaiting+=1;
    var array = [allResponses["Name of the Student"],allResponses["Id. Number"],allResponses["Student's mail"]];
    dataSheet.appendRow(array);
    sendMailWaitingMess(allResponses);

    id = dataSheet.getLastRow();
    dataSheet.getRange("G2").setValue(totalInWaiting);
    dataSheet.getRange("E"+id).setValue("Waiting ...");
    dataSheet.getRange("E"+id).setBackgroundRGB(252, 121, 101);

    var waiting = dataSheet.getRange("Z1").getValue();
    if(waiting==0){
      var lastRow = dataSheet.getLastRow()
      dataSheet.getRange("Z1").setValue(lastRow);
  }
  // SpreadsheetApp.flush();
    }
  }

//========================================================================================================================================================================//

function removefromMessList(){
  var url = 'https://docs.google.com/spreadsheets/d/14wMpg1AyVstvmg13lL4kkXIq6Teoyk_xK1FTtJ44M8s/edit#gid=0';
  var ss = SpreadsheetApp.openByUrl(url);
  var dataSheet = ss.getSheetByName('Mess Data');
  var out = dataSheet.getRange("Y1").getValue();

  var array = {
    "Name of the Student":dataSheet.getRange("A"+out).getValue(),
    "Id. Number":dataSheet.getRange("B"+out).getValue(),
    "Student's mail":dataSheet.getRange("C"+out).getValue(),
    "Time Stamp":dataSheet.getRange("D"+out).getValue()
  }

  var time1 = dataSheet.getRange("D"+out).getValue();
  var time2 = new Date();
 if ((time2.getTime())- (time1.getTime()) >= 60000){
    var rangeRemove= "E"+out;
    dataSheet.getRange(rangeRemove).setValue("Completed");
    dataSheet.getRange(rangeRemove).setBackgroundRGB(114, 237, 128);

    var totalInMess = dataSheet.getRange("F2").getValue();
    totalInMess-=1;
    dataSheet.getRange("F2").setValue(totalInMess);
    
    addNewOne(array);
    out+=1;
    dataSheet.getRange("Y1").setValue(out)
  
    sendMailOutingMess(array);
    // SpreadsheetApp.flush();
  
  }
}

function addNewOne(array){
  var url = 'https://docs.google.com/spreadsheets/d/14wMpg1AyVstvmg13lL4kkXIq6Teoyk_xK1FTtJ44M8s/edit#gid=0';
  var ss = SpreadsheetApp.openByUrl(url);
  var dataSheet = ss.getSheetByName('Mess Data');
  var inList = dataSheet.getRange("Z1").getValue();
  var lastRow = dataSheet.getLastRow()
  var time = new Date();
  var totalInMess = dataSheet.getRange("F2").getValue()
  var totalInWaiting = dataSheet.getRange("G2").getValue();
  if (totalInMess<5 && lastRow>=inList && totalInWaiting>0 ){
    var rangeRemove = "E"+inList;
    dataSheet.getRange("D"+inList).setValue(time);
    dataSheet.getRange(rangeRemove).setValue("Currently in mess");
    dataSheet.getRange(rangeRemove).setBackgroundRGB(52, 235, 219);
    inList+=1;
    totalInMess+=1;
    totalInWaiting-=1;
    dataSheet.getRange("Z1").setValue(inList)
    dataSheet.getRange("F2").setValue(totalInMess);
    dataSheet.getRange("G2").setValue(totalInWaiting);
    sendMailInMess(array);
  }
  // SpreadsheetApp.flush();
}

// function triggerHalfHour(){
//   ScriptApp.newTrigger("removefromMessList")
//   .timeBased()
//   .everyMinutes(1)
//   .create();
//   }




function sendMailInMess(array){
  var htmlMessIn = "<body>"+
    "Dear Student:<br /><br />" +
    "You can come to mess.<br /><br />"+
    "===========================================<br />" +
    "Student's Name: " + array["Name of the Student"] + "<br />" +
    "Student's Id. : "+array["Id. Number"]+"<br />"+
    "Time of Entering in Mess (dd/mm): " + array["Time stamp"] + "<br />" +
    "<br /> =============================================" +
    "<br/><br/>Please follow all mess instrution and also notice you need to finish your meal in next half hour ." +
    "<br /><br />Best regards," +
    "<br />Karan Kumbhar."
    "</body>";

    MailApp.sendEmail({to:array["Student's mail"], subject: "Mess Entry approved", htmlBody: htmlMessIn});
    SpreadsheetApp.flush();
}

function sendMailOutingMess(array){
    var htmlMessOut =
      "Dear Student:<br /><br />" +
      "You need to leave mess.<br /><br />"+
      "===========================================<br />" +
      "Student's Name: " + array["Name of the Student"] + "<br />" +
      "Student's Id. : "+array["Id. Number"]+"<br />"
      "You Entered in Mess at (dd/mm): " + array["Time stamp"] + "<br />" +
      "<br /> =============================================" +
      "<br/><br/>Your time is over so please leave the mess." +
      "<br /><br />Best regards," +
      "<br />Karan Kumbhar."
      "</body>";
    MailApp.sendEmail({to:array["Student's mail"], subject: "Plese leave mess", htmlBody: htmlMessOut});
    SpreadsheetApp.flush();
}


function sendMailWaitingMess(array){
  var htmlMessOut =
      "Dear Student:<br /><br />" +
      "You are in waiting list .<br /><br />"+
      "===========================================<br />" +
      "Student's Name: " + array["Name of the Student"] + "<br />" +
      "Student's Id. : "+array["Id. Number"]+"<br />" +
      "<br /> =============================================" +
      "<br/><br/>You are in waiting list. You will get mail when their is vacancy in mess." +
      "<br /><br />Best regards," +
      "<br />Karan Kumbhar."
      "</body>";
    MailApp.sendEmail({to:array["Student's mail"], subject: "waiting list...", htmlBody: htmlMessOut});
    // SpreadsheetApp.flush();
}

function setValuesInSheet(){
  var url = 'https://docs.google.com/spreadsheets/d/14wMpg1AyVstvmg13lL4kkXIq6Teoyk_xK1FTtJ44M8s/edit#gid=0';
  var ss = SpreadsheetApp.openByUrl(url);
  var dataSheet = ss.getSheetByName('Mess Data');
  var rangeTotal = dataSheet.getRange("F2:G2");
  var rangeColor = dataSheet.getRange("Y1:Z1");
  if(rangeTotal.isBlank()){
    dataSheet.getRange("F2").setValue(0);
    dataSheet.getRange("G2").setValue(0)
  } 
  else{
    dataSheet.getRange("G2").setValue(0);
  }
  if(rangeColor.isBlank()){
    dataSheet.getRange("Y1").setValue(dataSheet.getLastRow());
    dataSheet.getRange("Z1").setValue(0)

  }

}

// function checkvalues(){
//   var url = 'https://docs.google.com/spreadsheets/d/14wMpg1AyVstvmg13lL4kkXIq6Teoyk_xK1FTtJ44M8s/edit#gid=0';
//   var ss = SpreadsheetApp.openByUrl(url);
//   var dataSheet = ss.getSheetByName('Mess Data');

//   var totalInMess = dataSheet.getRange("F2").getValue();
//   var totalInWaiting = dataSheet.getRange("G2").getValue();
//   var messOut = dataSheet.getRange("Y1").getValue();
//   var waitingOut = dataSheet.getRange("Z1").getValue();
//   var count;
  // var temp;

  // while(dataSheet.getRange("E"+temp).getValue() != "Currently in mess"){
  //   count+=1;  
  //   temp+=1;
  // }
  // if (count != totalInMess){
  //   if (totalInMess<5 && count<5){
  //     dataSheet.getRange("F2").setValue(count)
  //   }
//     else if(totalInMess<5 && count >5){
//       temp =5;
//       var excess = count - totalInMess; 
//       waitingOut-=excess;
//       dataSheet.getRange("Z1").setValue(waitingOut);
//       while(dataSheet.getRange("E"+(messOut+temp)).getValue() != "Waiting ...");
//         dataSheet.getRange("E"+(messOut+temp)).setValue("Waiting ...");
//         dataSheet.getRange("E"+(messOut+temp)).setBackgroundRGB(252, 121, 101);
//         temp+=1 ;
//     }
//   }

// }












