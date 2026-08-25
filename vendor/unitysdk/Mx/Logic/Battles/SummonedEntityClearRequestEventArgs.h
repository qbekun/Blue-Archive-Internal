#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_IDTOCLEAR_OFFSET UNITYSDK_OFFSET(0x126E960)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_ISTSS_OFFSET UNITYSDK_OFFSET(0x126E970)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126E980)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SUMMONERGROUPTAG_OFFSET UNITYSDK_OFFSET(0x126EA20)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x126EA30)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126EA40)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_SET_ISTSS_OFFSET UNITYSDK_OFFSET(0x126EA50)
#define MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SUMMONERENTITYID_OFFSET UNITYSDK_OFFSET(0x126EA60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SummonedEntityClearRequestEventArgs_TypeDefinitionIndex = 14005;

	class SummonedEntityClearRequestEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _SummonerGroupTag_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _SummonerEntityId_k__BackingField; // 0x14
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20
		::System::Int64 _IdToClear_k__BackingField; // 0x28
		::System::Boolean _IsTSS_k__BackingField; // 0x30

		::System::Int64 get_IdToClear()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_IDTOCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTSS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_ISTSS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::System::Int64 arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_SummonerGroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SUMMONERGROUPTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_INDEX_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_IsTSS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_SET_ISTSS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_SummonerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMONEDENTITYCLEARREQUESTEVENTARGS_GET_SUMMONERENTITYID_OFFSET))(nullptr);
		}

	};
}

