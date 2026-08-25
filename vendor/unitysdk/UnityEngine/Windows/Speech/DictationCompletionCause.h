#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class DictationCompletionCause; }

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationCompletionCause_TypeDefinitionIndex = 31260;

	class DictationCompletionCause : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Windows::Speech::DictationCompletionCause* Complete; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* AudioQualityFailure; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* Canceled; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* TimeoutExceeded; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* PauseLimitExceeded; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* NetworkFailure; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* MicrophoneUnavailable; // 0x0
		::UnityEngine::Windows::Speech::DictationCompletionCause* UnknownError; // 0x0

	};
}

