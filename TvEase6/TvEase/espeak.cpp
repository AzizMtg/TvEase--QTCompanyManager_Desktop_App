#include "ESpeak.h"
#include <sapi.h>


ESpeak::ESpeak() : m_pVoice(nullptr) {
    CoInitialize(NULL); // Initialize COM
    CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&m_pVoice); // Create a voice object
}

ESpeak::~ESpeak() {
    if (m_pVoice) {
        m_pVoice->Release(); // Release the voice object
    }
    CoUninitialize(); // Uninitialize COM
}

void ESpeak::speak(const wchar_t *text) {
    if (m_pVoice) {
        m_pVoice->Speak(text, 0, NULL); // Speak the provided text
    }
}
