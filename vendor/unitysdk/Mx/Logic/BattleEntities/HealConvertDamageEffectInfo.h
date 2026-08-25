#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class HealConvertDamageEffect; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_STOP_OFFSET UNITYSDK_OFFSET(0x1162CB0)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_HEALCONVERTDAMAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1162E10)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_LOGICEFFECTPROCESSOR_LIFEGAINED_OFFSET UNITYSDK_OFFSET(0x1162E20)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x11632E0)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x11632F0)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1163380)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1163390)
#define MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1163580)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int HealConvertDamageEffectInfo_TypeDefinitionIndex = 13169;

	class HealConvertDamageEffectInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _DotAbility_k__BackingField; // 0x10
		::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect* _HealConvertDamageEffect_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _owner_k__BackingField; // 0x20
		::MX::Logic::Battles::Battle* battle; // 0x28
		::System::Collections::IEnumerator* conditionChecker; // 0x30
		::System::String* TransferredHealDamageGroupID; // 0x38

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_STOP_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect* get_HealConvertDamageEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_HEALCONVERTDAMAGEEFFECT_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LifeGained(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_LOGICEFFECTPROCESSOR_LIFEGAINED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_CODURATIONCHECK_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, Il2CppObject* arg3, ::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HEALCONVERTDAMAGEEFFECTINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

	};
}

