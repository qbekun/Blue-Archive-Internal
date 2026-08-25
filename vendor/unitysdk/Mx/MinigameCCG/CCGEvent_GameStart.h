#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_GAMESTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB20)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_GameStart_TypeDefinitionIndex = 20519;

	class CCGEvent_GameStart : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_GAMESTART_.CTOR_OFFSET))(nullptr);
		}

	};
}

