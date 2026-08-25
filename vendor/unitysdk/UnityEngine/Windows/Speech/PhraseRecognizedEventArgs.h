#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class ConfidenceLevel; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246800)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizedEventArgs_TypeDefinitionIndex = 31262;

	class PhraseRecognizedEventArgs : public Il2CppObject
	{
	public:
		::UnityEngine::Windows::Speech::ConfidenceLevel* confidence; // 0x10
		::Il2CppArray<::System::Object*>* semanticMeanings; // 0x18
		::System::String* text; // 0x20
		::System::DateTime* phraseStartTime; // 0x28
		::System::TimeSpan* phraseDuration; // 0x30

		::System::Void .ctor(::System::String* str, ::UnityEngine::Windows::Speech::ConfidenceLevel* arg, ::Il2CppArray<::System::Object*>* arg, ::System::DateTime* arg, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel*, ::Il2CppArray<::System::Object*>*, ::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZEDEVENTARGS_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

	};
}

