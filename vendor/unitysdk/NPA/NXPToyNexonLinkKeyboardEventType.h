#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyNexonLinkKeyboardEventType; }

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkKeyboardEventType_TypeDefinitionIndex = 25633;

	class NXPToyNexonLinkKeyboardEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPToyNexonLinkKeyboardEventType* kStroke; // 0x0
		::NPA::NXPToyNexonLinkKeyboardEventType* kChat; // 0x0

	};
}

