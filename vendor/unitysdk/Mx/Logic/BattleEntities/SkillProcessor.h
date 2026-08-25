#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::Skills { class AutoUseCheck; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::Skills { class SkillDataPack; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills::LogicEffects { class ModifySkillEffect; }

#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_GET_SKILLTABLE_OFFSET UNITYSDK_OFFSET(0x114AD80)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x114AD90)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REGISTERACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x114AF00)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_CHEATONCEIGNORECONDITION_OFFSET UNITYSDK_OFFSET(0x114B5B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDAUTOUSECHECK_OFFSET UNITYSDK_OFFSET(0x114B5C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDAUTOUSECHECK_OFFSET UNITYSDK_OFFSET(0x114B670)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET UNITYSDK_OFFSET(0x114B720)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET UNITYSDK_OFFSET(0x114B7D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET UNITYSDK_OFFSET(0x114B880)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x114B930)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLACTION_OFFSET UNITYSDK_OFFSET(0x114BA40)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLACTION_OFFSET UNITYSDK_OFFSET(0x114BAF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x114BBA0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x114BC60)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x114BDF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_CLEAREXPIRABLE_OFFSET UNITYSDK_OFFSET(0x114C080)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_ROLLBACKEFFECT_OFFSET UNITYSDK_OFFSET(0x114C070)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_TRYGETSELECTABLEEXSKILLSLOTS_OFFSET UNITYSDK_OFFSET(0x114C0D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REGISTERSELECTEXSKILL_OFFSET UNITYSDK_OFFSET(0x114C180)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillProcessor_TypeDefinitionIndex = 13129;

	class SkillProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* skillTable; // 0x10
		Il2CppObject* expirableEffects; // 0x18
		Il2CppObject* AutoUseCheckTable; // 0x20
		Il2CppObject* AutoUseDisabledSkillList; // 0x28
		Il2CppObject* selectExSkillTable; // 0x30

		Il2CppObject* get_SkillTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_GET_SKILLTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterActiveSkill(::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2, ::MX::Logic::Skills::AutoUseCheck* arg3, ::System::Boolean arg4, ::MX::Logic::Actions::IActiveSkill* arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::MX::Logic::Skills::AutoUseCheck*, ::System::Boolean, ::MX::Logic::Actions::IActiveSkill*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REGISTERACTIVESKILL_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void CheatOnceIgnoreCondition(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_CHEATONCEIGNORECONDITION_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindAutoUseCheck(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDAUTOUSECHECK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::AutoUseCheck* FindAutoUseCheck(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::MX::Logic::Skills::AutoUseCheck*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDAUTOUSECHECK_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindSkillPack(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillDataPack* FindSkillPack(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::MX::Logic::Skills::SkillDataPack*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::SkillDataPack* FindSkillPack(::System::String* str, ::MX::Data::CharacterSkillListKey* arg)
		{
			return ((::MX::Logic::Skills::SkillDataPack*(*)(::System::String*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLPACK_OFFSET))(str, arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* FindSlot(::System::String* str, ::MX::Data::CharacterSkillListKey* arg)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::System::String*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSLOT_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* FindSkillAction(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLACTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::IActiveSkill* FindSkillAction(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::MX::Logic::Actions::IActiveSkill*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDSKILLACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* FindBehavior(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDBEHAVIOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* FindBehavior(::System::String* str, ::MX::Data::CharacterSkillListKey* arg)
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::System::String*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_FINDBEHAVIOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REMOVEEXPIRED_OFFSET))(nullptr);
		}

		::System::Void ClearExpirable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_CLEAREXPIRABLE_OFFSET))(nullptr);
		}

		::System::Void RollbackEffect(::MX::Logic::Skills::LogicEffects::ModifySkillEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ModifySkillEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_ROLLBACKEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSelectableExSkillSlots(::MX::Data::CharacterSkillListKey* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::CharacterSkillListKey*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_TRYGETSELECTABLEEXSKILLSLOTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterSelectExSkill(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLPROCESSOR_REGISTERSELECTEXSKILL_OFFSET))(arg, arg2, nullptr);
		}

	};
}

