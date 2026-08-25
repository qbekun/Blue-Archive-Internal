#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class SpeechError; }

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SpeechError_TypeDefinitionIndex = 31259;

	class SpeechError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Windows::Speech::SpeechError* NoError; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* TopicLanguageNotSupported; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* GrammarLanguageMismatch; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* GrammarCompilationFailure; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* AudioQualityFailure; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* PauseLimitExceeded; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* TimeoutExceeded; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* NetworkFailure; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* MicrophoneUnavailable; // 0x0
		::UnityEngine::Windows::Speech::SpeechError* UnknownError; // 0x0

	};
}

