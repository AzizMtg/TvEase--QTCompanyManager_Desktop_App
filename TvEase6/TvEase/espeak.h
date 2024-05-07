#ifndef ESPEAK_H
#define ESPEAK_H

#include <windows.h> // Include Windows headers for SAPI functions
#include <sapi.h>

class ESpeak
{
public:
    ESpeak();
    ~ESpeak();

    // Function to synthesize speech using eSpeak SAPI
    void speak(const wchar_t *text);

private:
    ISpVoice *m_pVoice; // SAPI voice object
};

#endif // ESPEAK_H
