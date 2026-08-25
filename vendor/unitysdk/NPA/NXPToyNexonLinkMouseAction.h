#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyNexonLinkMouseAction; }

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkMouseAction_TypeDefinitionIndex = 25634;

	class NXPToyNexonLinkMouseAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPToyNexonLinkMouseAction* kDown; // 0x0
		::NPA::NXPToyNexonLinkMouseAction* kMove; // 0x0
		::NPA::NXPToyNexonLinkMouseAction* kUp; // 0x0
		::NPA::NXPToyNexonLinkMouseAction* kWheel; // 0x0

	};
}

