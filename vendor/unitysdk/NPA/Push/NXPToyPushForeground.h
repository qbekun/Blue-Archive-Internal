#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushForeground; }

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushForeground_TypeDefinitionIndex = 27339;

	class NXPToyPushForeground : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Push::NXPToyPushForeground* DEFAULT; // 0x0
		::NPA::Push::NXPToyPushForeground* ENABLED; // 0x0
		::NPA::Push::NXPToyPushForeground* DISABLED; // 0x0

	};
}

