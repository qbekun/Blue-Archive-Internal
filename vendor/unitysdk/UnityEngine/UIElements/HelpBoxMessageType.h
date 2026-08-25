#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class HelpBoxMessageType; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int HelpBoxMessageType_TypeDefinitionIndex = 30331;

	class HelpBoxMessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::HelpBoxMessageType* None; // 0x0
		::UnityEngine::UIElements::HelpBoxMessageType* Info; // 0x0
		::UnityEngine::UIElements::HelpBoxMessageType* Warning; // 0x0
		::UnityEngine::UIElements::HelpBoxMessageType* Error; // 0x0

	};
}

