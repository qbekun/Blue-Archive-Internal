#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class ConfidenceLevel; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET UNITYSDK_OFFSET(0xA2466B0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET UNITYSDK_OFFSET(0xA246850)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizer_TypeDefinitionIndex = 31251;

	class PhraseRecognizer : public Il2CppObject
	{
	public:
		::System::Int32 m_Recognizer; // 0x10
		PhraseRecognizedDelegate* OnPhraseRecognized; // 0x18

		::System::Void InvokePhraseRecognizedEvent(::System::String* str, ::UnityEngine::Windows::Speech::ConfidenceLevel* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel*, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MarshalSemanticMeaning(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

