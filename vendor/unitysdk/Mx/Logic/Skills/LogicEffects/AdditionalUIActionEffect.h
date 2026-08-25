#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AdditionalUIActionEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1406C50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1406C60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406CF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1406D00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406D10)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AdditionalUIActionEffect_TypeDefinitionIndex = 14680;

	class AdditionalUIActionEffect : public Il2CppObject
	{
	public:
		::System::String* _UIPath_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* ActionParameters; // 0xD8
		::Il2CppArray<::System::Object*>* DecoParameters; // 0xE0

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AdditionalUIActionEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AdditionalUIActionEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIActionParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUIACTIONEFFECT_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET))(nullptr);
		}

	};
}

