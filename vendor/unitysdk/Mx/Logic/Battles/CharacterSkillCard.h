#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }

#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CANUSEAUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x1371760)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_SORTRULE_OFFSET UNITYSDK_OFFSET(0x13717A0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_DYINGSTARTED_OFFSET UNITYSDK_OFFSET(0x1371850)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13718F0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x13719C0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_SKILLUSE_OFFSET UNITYSDK_OFFSET(0x13719F0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x1371A00)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1371AB0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_RECEIVEINPUT_OFFSET UNITYSDK_OFFSET(0x1371AE0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1371C10)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1371C20)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1371CD0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_USECARD_OFFSET UNITYSDK_OFFSET(0x1371E70)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13726A0)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1372810)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_DIED_OFFSET UNITYSDK_OFFSET(0x1372820)
#define MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1372830)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterSkillCard_TypeDefinitionIndex = 14372;

	class CharacterSkillCard : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0xC0

		::System::Boolean CanUseAutoTargeting(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CANUSEAUTOTARGETING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_SortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_SORTRULE_OFFSET))(nullptr);
		}

		::System::Void Character_DyingStarted(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_DYINGSTARTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_FINALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_OwnerCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void SkillUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_SKILLUSE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_OwnerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void ReceiveInput(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_RECEIVEINPUT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OwnerEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_OWNERENTITY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_CandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::MX::Data::CharacterSkillListKey* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean UseCard(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_USECARD_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_DISPOSE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void Character_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_DIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSKILLCARD_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

