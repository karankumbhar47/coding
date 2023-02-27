function dropDownBtn() {
    const property =  document.getElementById("dynamicView").style.visibility;
    if (property == "hidden") {
        document.getElementById("dynamicView").style.visibility="visible";
    }
    else{
        document.getElementById("dynamicView").style.visibility="hidden";
    }
}