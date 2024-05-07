#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
LiquidCrystal_I2C lcd(0x27, 16, 2); // Initialize LCD display with I2C address 0x27, 16 columns, and 2 rows.
int buzzerPin = 2; // Define the buzzer pin.
Servo myservo;  // create servo object to control a servo
char data; // variable contenant le caractère lu

void setup() 
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the backlight
  lcd.print("RFID Access"); // Display initial message
  lcd.setCursor(0, 1); // Move cursor to the second line
  lcd.print("Please scan card"); // Prompt the user
  //Serial.println("Approximate your card to the reader...");
  //Serial.println();
  myservo.attach(3);  // attaches the servo on pin D3 to the servo object
}

void loop() 
{
  // Look for new cards
  if (!mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag:");
  String content = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  //Serial.println();
  //Serial.print("Message:");
  content.toUpperCase();
  if (Serial.available()){     
  //Si un message a été reçu  faire ceci
  data=Serial.read();  
    if (data=='1') 
    {
      
      //Serial.println("Authorized access");
      lcd.clear(); // Clear the LCD display
      lcd.setCursor(0, 0);
      lcd.print(content.substring(1));
      lcd.setCursor(0, 1);
      lcd.print("Access Granted!"); // Display access granted message
      // Add LED or other actions for access granted

      digitalWrite(6, 1);
      delay(200);
      digitalWrite(6, 0);
      delay(200);
      digitalWrite(6, 1);
      delay(200);
      digitalWrite(6, 0);
      delay(200);
      digitalWrite(6, 1);
      delay(200);
      digitalWrite(6, 0);
      delay(1000);
    
        myservo.write(-180); // Set the servo position to 90 degrees   
        delay(1000);
          myservo.write(90); // Set the servo position to 90 degrees
    }
    else if (data=='0')
    {
      //Serial.println("Access denied");
      lcd.clear(); // Clear the LCD display7
      lcd.setCursor(0, 0);
      lcd.print(content.substring(1));
      lcd.setCursor(0, 1);
      lcd.print("Access Denied!"); // Display access denied message
      // Add LED or other actions for access denied
      digitalWrite(7, 1);
      digitalWrite(buzzerPin, HIGH); // Activate the buzzer
      delay(200);
      digitalWrite(7, 0);
      digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
      delay(200);
      digitalWrite(7, 1);
      digitalWrite(buzzerPin, HIGH); // Activate the buzzer
      delay(200);
      digitalWrite(7, 0);
      digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
      delay(200);
      digitalWrite(7, 1);
      digitalWrite(buzzerPin, HIGH); // Activate the buzzer
      delay(200);
      digitalWrite(7, 0);
      digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
      delay(1000);
    }
  }
  delay(1000);
}