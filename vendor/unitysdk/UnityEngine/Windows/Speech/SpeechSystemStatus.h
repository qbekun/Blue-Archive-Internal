#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class SpeechSystemStatus; }

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SpeechSystemStatus_TypeDefinitionIndex = 31258;

	class SpeechSystemStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Windows::Speech::SpeechSystemStatus* Stopped; // 0x0
		::UnityEngine::Windows::Speech::SpeechSystemStatus* Running; // 0x0
		::UnityEngine::Windows::Speech::SpeechSystemStatus* Failed; // 0x0

	};
}

