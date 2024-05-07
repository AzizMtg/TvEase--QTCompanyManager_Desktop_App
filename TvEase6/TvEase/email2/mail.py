import sys
from email.message import EmailMessage
import smtplib

def send_email(recipient, subject, message):
    try:
        sender = "naanaachaima02@gmail.com"
        password = "flidabqnjsnxykak"
        
        email = EmailMessage()
        email["From"] = sender
        email["To"] = recipient
        email["Subject"] = subject
        email.set_content(message)

        smtp = smtplib.SMTP_SSL("smtp.gmail.com")
        smtp.login(sender, password)
        smtp.sendmail(sender, recipient, email.as_string())
        smtp.quit()
        print("Email sent successfully!")
    except Exception as e:
        print("An error occurred:", e)

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: mail.py recipient subject message")
        sys.exit(1)

    recipient = sys.argv[1]
    subject = sys.argv[2]
    message = sys.argv[3]

    send_email(recipient, subject, message)
