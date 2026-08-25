#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_BATTLES_RAIDBATTLESCENEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C470)
#define MX_VISUAL_BATTLES_RAIDBATTLESCENEHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1D7C480)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int RaidBattleSceneHandler_TypeDefinitionIndex = 20321;

	class RaidBattleSceneHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_RAIDBATTLESCENEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_RAIDBATTLESCENEHANDLER_START_OFFSET))(nullptr);
		}

	};
}

