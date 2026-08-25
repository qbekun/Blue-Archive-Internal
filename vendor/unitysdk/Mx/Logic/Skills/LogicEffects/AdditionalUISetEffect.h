#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AdditionalUISetEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406DE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_ADDITIONALUIDATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406DF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1406E00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1406E10)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AdditionalUISetEffect_TypeDefinitionIndex = 14683;

	class AdditionalUISetEffect : public Il2CppObject
	{
	public:
		::System::String* _UIPath_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* DataParameters; // 0xD8
		::Il2CppArray<::System::Object*>* DecoParameters; // 0xE0

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIDataParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_ADDITIONALUIDATAPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AdditionalUISetEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AdditionalUISetEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDITIONALUISETEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

