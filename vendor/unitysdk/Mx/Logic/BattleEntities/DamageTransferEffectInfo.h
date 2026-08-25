#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class DamageTransferEffect; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x115DBE0)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_STOP_OFFSET UNITYSDK_OFFSET(0x115DC00)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x115DD60)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x115DD70)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_DAMAGETRANSFEREFFECT_OFFSET UNITYSDK_OFFSET(0x115DFE0)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x115DFF0)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x115E330)
#define MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x115DF70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DamageTransferEffectInfo_TypeDefinitionIndex = 13146;

	class DamageTransferEffectInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _DotAbility_k__BackingField; // 0x10
		::MX::Logic::Skills::LogicEffects::DamageTransferEffect* _DamageTransferEffect_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _owner_k__BackingField; // 0x20
		::MX::Logic::Battles::Battle* battle; // 0x28
		::System::Collections::IEnumerator* conditionChecker; // 0x30
		::System::String* TransferredDamageEffectGroupId; // 0x38
		::System::Int32 TransferredDamageEffectLevel; // 0x40

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_STOP_OFFSET))(nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, Il2CppObject* arg3, ::MX::Logic::Skills::LogicEffects::DamageTransferEffect* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::DamageTransferEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::DamageTransferEffect* get_DamageTransferEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::DamageTransferEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_DAMAGETRANSFEREFFECT_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DAMAGETRANSFEREFFECTINFO_CODURATIONCHECK_OFFSET))(nullptr);
		}

	};
}

