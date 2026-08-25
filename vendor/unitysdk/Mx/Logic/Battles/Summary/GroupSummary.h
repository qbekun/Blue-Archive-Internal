#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles::Summary { class SkillCostSummary; }
namespace MX::Logic::BattleEntities { class BattleEntityType; }
namespace MX::Logic::Battles::Summary { class GroupSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x13B19A0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x13B19B0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_LEADERENTITYID_OFFSET UNITYSDK_OFFSET(0x13B19C0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_LEADERENTITYID_OFFSET UNITYSDK_OFFSET(0x13B19D0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_LEADERCHARACTERID_OFFSET UNITYSDK_OFFSET(0x13B19E0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_HEROES_OFFSET UNITYSDK_OFFSET(0x13B1A90)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_HEROES_OFFSET UNITYSDK_OFFSET(0x13B1AA0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZEHEROES_OFFSET UNITYSDK_OFFSET(0x13B1AB0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1AF0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_SUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1B00)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZESUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1B10)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_CARRIERSKILLSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1B50)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_CARRIERSKILLSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1B60)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZECARRIERSKILLSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x13B1B70)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_ALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x13B1BB0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_USEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x13B1CE0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_USEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x13B1CF0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x13B1D00)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x13B1D10)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x13B1D20)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x13B1D30)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_ASSISTRELATIONS_OFFSET UNITYSDK_OFFSET(0x13B1D40)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_ASSISTRELATIONS_OFFSET UNITYSDK_OFFSET(0x13B1D50)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_STRIKERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x13B1D60)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x13B1EB0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_STRIKERMINLEVEL_OFFSET UNITYSDK_OFFSET(0x13B2000)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERMINLEVEL_OFFSET UNITYSDK_OFFSET(0x13B2150)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_MAXCHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x13B22A0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_MINCHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x13B2330)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TOTALDAMAGEGIVENAPPLIED_OFFSET UNITYSDK_OFFSET(0x13B23C0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SKILLCOSTSUMMARY_OFFSET UNITYSDK_OFFSET(0x13B2710)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_SKILLCOSTSUMMARY_OFFSET UNITYSDK_OFFSET(0x13B2720)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B2730)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A69D0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETALLCHARACTERSUMMARY_OFFSET UNITYSDK_OFFSET(0x13B2740)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETHIGHESTDAMAGEGIVEN_OFFSET UNITYSDK_OFFSET(0x13B2810)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B2E40)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13B2EC0)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13A9F90)
#define MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETFULLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13AA140)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int GroupSummary_TypeDefinitionIndex = 14488;

	class GroupSummary : public Il2CppObject
	{
	public:
		::System::Int64 _TeamId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _LeaderEntityId_k__BackingField; // 0x18
		Il2CppObject* _Heroes_k__BackingField; // 0x20
		Il2CppObject* _Supporters_k__BackingField; // 0x28
		Il2CppObject* _CarrierSkillSupporters_k__BackingField; // 0x30
		::System::Boolean _UseAutoSkill_k__BackingField; // 0x38
		::System::Int64 _TSSInteractionServerId_k__BackingField; // 0x40
		::System::Int64 _TSSInteractionUniqueId_k__BackingField; // 0x48
		Il2CppObject* _AssistRelations_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::SkillCostSummary* _SkillCostSummary_k__BackingField; // 0x58

		::System::Int64 get_TeamId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TEAMID_OFFSET))(nullptr);
		}

		::System::Void set_TeamId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TEAMID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_LeaderEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_LEADERENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_LeaderEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_LEADERENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_LEADERCHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Heroes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_HEROES_OFFSET))(nullptr);
		}

		::System::Void set_Heroes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_HEROES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeHeroes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZEHEROES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Supporters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERS_OFFSET))(nullptr);
		}

		::System::Void set_Supporters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_SUPPORTERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeSupporters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZESUPPORTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CarrierSkillSupporters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_CARRIERSKILLSUPPORTERS_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillSupporters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_CARRIERSKILLSUPPORTERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeCarrierSkillSupporters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SHOULDSERIALIZECARRIERSKILLSUPPORTERS_OFFSET))(nullptr);
		}

		::System::Int32 get_AliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_ALIVECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_USEAUTOSKILL_OFFSET))(nullptr);
		}

		::System::Void set_UseAutoSkill(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_USEAUTOSKILL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TSSINTERACTIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_TSSINTERACTIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AssistRelations()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_ASSISTRELATIONS_OFFSET))(nullptr);
		}

		::System::Void set_AssistRelations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_ASSISTRELATIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StrikerMaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_STRIKERMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_SupporterMaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerMinLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_STRIKERMINLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_SupporterMinLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SUPPORTERMINLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharacterLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_MAXCHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_MinCharacterLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_MINCHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalDamageGivenApplied()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_TOTALDAMAGEGIVENAPPLIED_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::SkillCostSummary* get_SkillCostSummary()
		{
			return ((::MX::Logic::Battles::Summary::SkillCostSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GET_SKILLCOSTSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_SkillCostSummary(::MX::Logic::Battles::Summary::SkillCostSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::SkillCostSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_SET_SKILLCOSTSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllCharacterSummary()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETALLCHARACTERSUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 GetHighestDamageGiven(::MX::Logic::BattleEntities::BattleEntityType* arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::MX::Logic::BattleEntities::BattleEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETHIGHESTDAMAGEGIVEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::GroupSummary* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFullSnapshot()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_GROUPSUMMARY_GETFULLSNAPSHOT_OFFSET))(nullptr);
		}

	};
}

