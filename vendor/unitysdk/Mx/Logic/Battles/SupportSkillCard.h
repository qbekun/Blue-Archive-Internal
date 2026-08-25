#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }

#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x1388A70)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1388B20)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_CANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1388B30)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1388BE0)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_CANUSEAUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x1388C10)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1388C40)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_SUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x1388C70)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_SORTRULE_OFFSET UNITYSDK_OFFSET(0x1388C80)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1388D30)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_USECARD_OFFSET UNITYSDK_OFFSET(0x1388D40)
#define MX_LOGIC_BATTLES_SUPPORTSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1388FB0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SupportSkillCard_TypeDefinitionIndex = 14407;

	class SupportSkillCard : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* _SupportActor_k__BackingField; // 0xC0

		::MX::Logic::BattleEntities::EntityId* get_OwnerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERENTITYID_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_DISPOSE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_CandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_CANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean CanUseAutoTargeting(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_CANUSEAUTOTARGETING_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OwnerCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERCOSTUMEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* get_SupportActor()
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_SUPPORTACTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_SortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_SORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OwnerEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_GET_OWNERENTITY_OFFSET))(nullptr);
		}

		::System::Boolean UseCard(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_USECARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::MX::Data::CharacterSkillListKey* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUPPORTSKILLCARD_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

