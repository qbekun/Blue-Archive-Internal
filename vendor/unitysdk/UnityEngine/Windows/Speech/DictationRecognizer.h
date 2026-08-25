#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class ConfidenceLevel; }
namespace UnityEngine::Windows::Speech { class DictationCompletionCause; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0xA246BA0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0xA246BC0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0xA246BE0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0xA246C00)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_TypeDefinitionIndex = 31256;

	class DictationRecognizer : public Il2CppObject
	{
	public:
		::System::Int32 m_Recognizer; // 0x10
		DictationHypothesisDelegate* DictationHypothesis; // 0x18
		DictationResultDelegate* DictationResult; // 0x20
		DictationCompletedDelegate* DictationComplete; // 0x28
		DictationErrorHandler* DictationError; // 0x30

		::System::Void DictationRecognizer_InvokeHypothesisGeneratedEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET))(str, nullptr);
		}

		::System::Void DictationRecognizer_InvokeResultGeneratedEvent(::System::String* str, ::UnityEngine::Windows::Speech::ConfidenceLevel* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::DictationCompletionCause*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DictationRecognizer_InvokeErrorEvent(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET))(str, arg, nullptr);
		}

	};
}

