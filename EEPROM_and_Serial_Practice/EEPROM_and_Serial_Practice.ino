String incomingStr; 
#include <EEPROM.h>
void setup() {
  Serial.begin(9600); 
}
void loop() {
  if (Serial.available() > 0) {
    
    incomingStr = Serial.readString();
    String Read_check = incomingStr;
    Read_check.remove(4);
    String write_check  = incomingStr;
    write_check.remove(5);
    
    if (Read_check == "read"){
      String Read_address = incomingStr.substring(5);
      int Int_address = Read_address.toInt();
      int data_read = EEPROM.read(Int_address);
      Serial.println("The value in the given address is:");
      Serial.println(data_read, DEC);
    }
    else if (write_check == "write"){
      String write_addr_and_Data = incomingStr.substring(6);
      String write_addr = write_addr_and_Data;
      int Pos_space = write_addr.indexOf(' ');
      write_addr.remove(Pos_space);
      String write_data = write_addr_and_Data.substring(Pos_space + 1);
      int Int_address = write_addr.toInt();
      int Int_data = write_data.toInt();
      EEPROM.write(Int_address, Int_data);
      Serial.println("The value is written to the given adress");
    }
  }
}
