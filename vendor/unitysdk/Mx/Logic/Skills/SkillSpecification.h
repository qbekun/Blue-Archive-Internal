#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_DUMMY_OFFSET UNITYSDK_OFFSET(0x13ED020)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x13ED070)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x13ED080)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLDATAKEY_OFFSET UNITYSDK_OFFSET(0x13ED090)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_VISUALDATAKEY_OFFSET UNITYSDK_OFFSET(0x13ED0A0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x13ED0B0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x13ED0C0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x13ED0D0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLTYPEFORDAMAGECALCULATION_OFFSET UNITYSDK_OFFSET(0x13ED0E0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_SET_SKILLTYPEFORDAMAGECALCULATION_OFFSET UNITYSDK_OFFSET(0x13ED0F0)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLLEVELTABLE_OFFSET UNITYSDK_OFFSET(0x13ED100)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ED110)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ED310)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_CLONE_OFFSET UNITYSDK_OFFSET(0x13ED490)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x13ED510)
#define MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13ED530)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillSpecification_TypeDefinitionIndex = 14592;

	class SkillSpecification : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _Dummy_k__BackingField; // 0x0
		::System::String* _SkillGroupId_k__BackingField; // 0x10
		::System::Int32 _SkillLevel_k__BackingField; // 0x18
		::System::String* _SkillDataKey_k__BackingField; // 0x20
		::System::String* _VisualDataKey_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x30
		::MX::Logic::Skills::SkillType* _SkillType_k__BackingField; // 0x34
		::MX::Logic::Skills::SkillType* _SkillTypeForDamageCalculation_k__BackingField; // 0x38
		Il2CppObject* _SkillLevelTable_k__BackingField; // 0x40

		::MX::Logic::Skills::SkillSpecification* get_Dummy()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_DUMMY_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_SkillDataKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLDATAKEY_OFFSET))(nullptr);
		}

		::System::String* get_VisualDataKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_VISUALDATAKEY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_SkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SkillType(::MX::Logic::Skills::SkillType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_SET_SKILLTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_SkillTypeForDamageCalculation()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLTYPEFORDAMAGECALCULATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillTypeForDamageCalculation(::MX::Logic::Skills::SkillType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_SET_SKILLTYPEFORDAMAGECALCULATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillLevelTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_GET_SKILLLEVELTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Int32 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CTOR_OFFSET))(str, str2, str3, arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Int32 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CTOR_OFFSET))(str, str2, str3, arg, arg2, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* Clone()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_CLONE_OFFSET))(nullptr);
		}

		::System::Void OverrideSkillType(::MX::Logic::Skills::SkillType* arg, ::MX::Logic::Skills::SkillType* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillType*, ::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_OVERRIDESKILLTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLSPECIFICATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

