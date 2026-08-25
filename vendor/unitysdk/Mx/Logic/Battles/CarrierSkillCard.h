#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_SET_ISPAUSEDCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1370140)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_USELIMITGAUGECOST_OFFSET UNITYSDK_OFFSET(0x1370150)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_SET_ISRECHARGING_OFFSET UNITYSDK_OFFSET(0x1370160)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1370170)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x13702F0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_CHARGECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1370320)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_STARTRECHARGING_OFFSET UNITYSDK_OFFSET(0x1370260)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_SORTRULE_OFFSET UNITYSDK_OFFSET(0x1370360)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_CANUSESKILL_OFFSET UNITYSDK_OFFSET(0x1370410)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_ISPAUSEDCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1370550)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_CANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1370560)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1370610)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1370670)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1370680)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x13706B0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_ISRECHARGING_OFFSET UNITYSDK_OFFSET(0x1370760)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_FORCESTARTRECHARGING_OFFSET UNITYSDK_OFFSET(0x1370770)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13707F0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_USECARD_OFFSET UNITYSDK_OFFSET(0x1370800)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_CANUSEAUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x13709F0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_ISLIMITGAUGECOSTENOUGH_OFFSET UNITYSDK_OFFSET(0x13704C0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_FORCECOOLTIMESET_OFFSET UNITYSDK_OFFSET(0x1370A10)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_USESKILL_OFFSET UNITYSDK_OFFSET(0x1370980)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_INITFORHAND_OFFSET UNITYSDK_OFFSET(0x1370AA0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_HASUNLIMITEDUSES_OFFSET UNITYSDK_OFFSET(0x1370350)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CarrierSkillCard_TypeDefinitionIndex = 14368;

	class CarrierSkillCard : public Il2CppObject
	{
	public:
		::System::Int64 LimitGaugeCost; // 0xC0
		::System::Boolean _isRecharging_k__BackingField; // 0xC8
		::System::Boolean _isPausedCoolTime_k__BackingField; // 0xC9
		::MX::Logic::BattleEntities::SupportActor* ownerCharacter; // 0xD0

		::System::Void set_isPausedCoolTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_SET_ISPAUSEDCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseLimitGaugeCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_USELIMITGAUGECOST_OFFSET))(nullptr);
		}

		::System::Void set_isRecharging(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_SET_ISRECHARGING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::MX::Data::CharacterSkillListKey* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_OwnerCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void ChargeComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_CHARGECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void StartRecharging()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_STARTRECHARGING_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_SortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_SORTRULE_OFFSET))(nullptr);
		}

		::System::Boolean CanUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_CANUSESKILL_OFFSET))(nullptr);
		}

		::System::Boolean get_isPausedCoolTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_ISPAUSEDCOOLTIME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_CandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_CANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_UPDATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OwnerEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERENTITY_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_OwnerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_OWNERENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_isRecharging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_ISRECHARGING_OFFSET))(nullptr);
		}

		::System::Void ForceStartRecharging()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_FORCESTARTRECHARGING_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UseCard(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_USECARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseAutoTargeting(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_CANUSEAUTOTARGETING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLimitGaugeCostEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_ISLIMITGAUGECOSTENOUGH_OFFSET))(nullptr);
		}

		::System::Void ForceCoolTimeSet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_FORCECOOLTIMESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean UseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_USESKILL_OFFSET))(nullptr);
		}

		::System::Void InitForHand(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_INITFORHAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasUnlimitedUses()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARD_GET_HASUNLIMITEDUSES_OFFSET))(nullptr);
		}

	};
}

