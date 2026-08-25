#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class SpeechError; }
namespace UnityEngine::Windows::Speech { class SpeechSystemStatus; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0xA246430)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0xA246490)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognitionSystem_TypeDefinitionIndex = 31249;

	class PhraseRecognitionSystem : public Il2CppObject
	{
	public:
		ErrorDelegate* OnError; // 0x0
		StatusDelegate* OnStatusChanged; // 0x8

		::System::Void PhraseRecognitionSystem_InvokeErrorEvent(::UnityEngine::Windows::Speech::SpeechError* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechError*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void PhraseRecognitionSystem_InvokeStatusChangedEvent(::UnityEngine::Windows::Speech::SpeechSystemStatus* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechSystemStatus*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET))(arg, nullptr);
		}

	};
}

