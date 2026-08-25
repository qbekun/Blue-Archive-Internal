#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushPolicy; }

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushPolicy_TypeDefinitionIndex = 27340;

	class NXPToyPushPolicy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Push::NXPToyPushPolicy* NONE; // 0x0
		::NPA::Push::NXPToyPushPolicy* AD_PUSH_POLICY; // 0x0
		::NPA::Push::NXPToyPushPolicy* NIGHT_PUSH_POLICY; // 0x0

	};
}

