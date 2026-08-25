#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StartStatusLevelIndicatorEffect; }
namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class GaugeEffectProcessor; }
namespace MX::Logic::Battles { class DotEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1161DC0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ONSTATUSLEVELVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1161DD0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1161DF0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1161E70)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x1161E80)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1161E90)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVELTEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x1161EA0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SETSTATUSLEVELVALUE_OFFSET UNITYSDK_OFFSET(0x1161EB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ADD_STATUSLEVELVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1161F60)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1162000)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_STATUSLEVELVALUE_OFFSET UNITYSDK_OFFSET(0x1162010)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1162020)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_REMOVE_STATUSLEVELVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1162170)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1162210)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1162300)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1162310)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_UISTATUSLEVELINDICATOREFFECT_OFFSET UNITYSDK_OFFSET(0x11624B0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_GAUGEPERCENT_OFFSET UNITYSDK_OFFSET(0x11624C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_STATUSLEVELVALUE_OFFSET UNITYSDK_OFFSET(0x11624F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1162500)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusLevelEffectInfo_TypeDefinitionIndex = 13163;

	class StatusLevelEffectInfo : public Il2CppObject
	{
	public:
		Il2CppObject* StatusLevelValueChanged; // 0x10
		::System::Int32 _Channel_k__BackingField; // 0x18
		::System::String* _GroupId_k__BackingField; // 0x20
		Il2CppObject* _DotAbility_k__BackingField; // 0x28
		::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* _UIStatusLevelIndicatorEffect_k__BackingField; // 0x30
		::MX::Core::Services::Hash64* _LogicEffectTemplateForApplyStatusLevelTemplateIdHash_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x40
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x48
		::MX::Logic::BattleEntities::BattleEntity* invoker; // 0x50
		::MX::Logic::BattleEntities::GaugeEffectProcessor* gaugeEffectProcessor; // 0x58
		::System::Int32 StartedFrame; // 0x60
		::System::Int32 _statusLevelValue_k__BackingField; // 0x64

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void OnStatusLevelValueChanged(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ONSTATUSLEVELVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ONREMOVE_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_LogicEffectTemplateForApplyStatusLevelTemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVELTEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Void SetStatusLevelValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SETSTATUSLEVELVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void add_StatusLevelValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_ADD_STATUSLEVELVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Owner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Void set_statusLevelValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_SET_STATUSLEVELVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void remove_StatusLevelValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_REMOVE_STATUSLEVELVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_UPDATE_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::GaugeEffectProcessor* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5, ::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GaugeEffectProcessor*, ::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* get_UIStatusLevelIndicatorEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_UISTATUSLEVELINDICATOREFFECT_OFFSET))(nullptr);
		}

		::System::Single get_GaugePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_GAUGEPERCENT_OFFSET))(nullptr);
		}

		::System::Int32 get_statusLevelValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_STATUSLEVELVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSLEVELEFFECTINFO_GET_OWNER_OFFSET))(nullptr);
		}

	};
}

