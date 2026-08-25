#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeEffect; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class GaugeEffectProcessor; }
namespace MX::Logic::Battles { class DotEventArgs; }
namespace MX::Logic::Skills::LogicEffects { class GaugeStat; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1161220)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_APPENDGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x11613C0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x11614B0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x11614C0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1161610)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_GAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1161880)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SETGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x11612E0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_BIND_OFFSET UNITYSDK_OFFSET(0x1161890)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1161970)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1161C20)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x1161C30)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEPERCENT_OFFSET UNITYSDK_OFFSET(0x1161D20)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1161D50)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1161D60)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1161D70)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x1161D80)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1161D90)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1161DA0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1161DB0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int GaugeEffectInfo_TypeDefinitionIndex = 13162;

	class GaugeEffectInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Channel_k__BackingField; // 0x10
		::System::String* _GroupId_k__BackingField; // 0x18
		Il2CppObject* _DotAbility_k__BackingField; // 0x20
		Il2CppObject* bindingStatChangeEffects; // 0x28
		::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect* _GaugeEffect_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x38
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x40
		::MX::Logic::BattleEntities::BattleEntity* invoker; // 0x48
		::MX::Logic::BattleEntities::GaugeEffectProcessor* gaugeEffectProcessor; // 0x50
		::System::Int32 StartedFrame; // 0x58
		::System::Int64 _gaugeValue_k__BackingField; // 0x60

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void AppendGaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_APPENDGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Owner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::GaugeEffectProcessor* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GaugeEffectProcessor*, ::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void set_gaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_GAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetGaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SETGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Bind(::MX::Logic::Skills::LogicEffects::GaugeStat* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::GaugeStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_BIND_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_ONREMOVE_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_GaugePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEPERCENT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect* get_GaugeEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEEFFECT_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int64 get_gaugeValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_GAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

	};
}

