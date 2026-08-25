#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_SINGLERAIDINBATTLESUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FDC0)
#define MX_VISUAL_BATTLES_SINGLERAIDINBATTLESUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D7FDD0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int SingleRaidInBattleSubScene_TypeDefinitionIndex = 20335;

	class SingleRaidInBattleSubScene : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDINBATTLESUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDINBATTLESUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

	};
}

