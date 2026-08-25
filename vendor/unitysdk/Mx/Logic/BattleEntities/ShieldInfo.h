#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class ShieldEffect; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x11435A0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x11435C0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x11435D0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x11435E0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11435F0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x1143640)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SHIELDEFFECT_OFFSET UNITYSDK_OFFSET(0x1143650)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x1143660)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1143680)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1143690)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x11436B0)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_STOP_OFFSET UNITYSDK_OFFSET(0x1143A20)
#define MX_LOGIC_BATTLEENTITIES_SHIELDINFO_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x11439B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ShieldInfo_TypeDefinitionIndex = 13115;

	class ShieldInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentHP_k__BackingField; // 0x10
		::System::Int64 _MaxHP_k__BackingField; // 0x18
		Il2CppObject* _DotAbility_k__BackingField; // 0x20
		::MX::Logic::Skills::LogicEffects::ShieldEffect* _ShieldEffect_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _owner_k__BackingField; // 0x30
		::System::Collections::IEnumerator* conditionChecker; // 0x38

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_CURRENTHP_OFFSET))(nullptr);
		}

		::System::Void set_CurrentHP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_SET_CURRENTHP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_MAXHP_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ShieldEffect* get_ShieldEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::ShieldEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SHIELDEFFECT_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_SHIELDID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_owner()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, Il2CppObject* arg2, ::MX::Logic::Skills::LogicEffects::ShieldEffect* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_STOP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SHIELDINFO_CODURATIONCHECK_OFFSET))(nullptr);
		}

	};
}

