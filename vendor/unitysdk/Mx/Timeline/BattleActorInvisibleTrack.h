#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_BATTLEACTORINVISIBLETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21AD0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int BattleActorInvisibleTrack_TypeDefinitionIndex = 10365;

	class BattleActorInvisibleTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLETRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

