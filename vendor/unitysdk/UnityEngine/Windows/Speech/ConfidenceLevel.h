#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech { class ConfidenceLevel; }

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int ConfidenceLevel_TypeDefinitionIndex = 31257;

	class ConfidenceLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Windows::Speech::ConfidenceLevel* High; // 0x0
		::UnityEngine::Windows::Speech::ConfidenceLevel* Medium; // 0x0
		::UnityEngine::Windows::Speech::ConfidenceLevel* Low; // 0x0
		::UnityEngine::Windows::Speech::ConfidenceLevel* Rejected; // 0x0

	};
}

