#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_GAMEPREPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB10)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_GamePrepare_TypeDefinitionIndex = 20518;

	class CCGEvent_GamePrepare : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_GAMEPREPARE_.CTOR_OFFSET))(nullptr);
		}

	};
}

