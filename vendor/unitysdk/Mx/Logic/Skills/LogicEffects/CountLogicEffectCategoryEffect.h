#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class CountLogicEffectCategoryEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140CD50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140CD60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_COUNTCATEGORY_OFFSET UNITYSDK_OFFSET(0x140CDF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140CE00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x140CE10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_COLORINDEXLIST_OFFSET UNITYSDK_OFFSET(0x140CE20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140CE30)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CountLogicEffectCategoryEffect_TypeDefinitionIndex = 14723;

	class CountLogicEffectCategoryEffect : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* _CountCategory_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* _ColorIndexList_k__BackingField; // 0xD8
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xE0
		::System::String* _EndConditionArgument_k__BackingField; // 0xE8
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0xF0
		::System::Boolean _Dispellable_k__BackingField; // 0xF8

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::CountLogicEffectCategoryEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::CountLogicEffectCategoryEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::LogicEffectCategory* get_CountCategory()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_COUNTCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ColorIndexList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_COLORINDEXLIST_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COUNTLOGICEFFECTCATEGORYEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

