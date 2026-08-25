#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1273B50)
#define MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1273B60)
#define MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273B70)
#define MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1273BF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ApplyTargetDamageCommand_TypeDefinitionIndex = 14055;

	class ApplyTargetDamageCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		::System::Int64 _Damage_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* _TargetEntity_k__BackingField; // 0x28

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_GET_DAMAGE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_GET_TARGETENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::System::Int64 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYTARGETDAMAGECOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

