#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class PermanentRaidEndBattleResponse; }
namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE__ENTER_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D78F60)
#define MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B80)
#define MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D79100)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int PermanentRaidEndingSubScene_TypeDefinitionIndex = 20316;

	class PermanentRaidEndingSubScene : public Il2CppObject
	{
	public:
		::System::Void _Enter_b__1_0(::MX::NetworkProtocol::PermanentRaidEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::PermanentRaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE__ENTER_B__1_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PERMANENTRAIDENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

	};
}

