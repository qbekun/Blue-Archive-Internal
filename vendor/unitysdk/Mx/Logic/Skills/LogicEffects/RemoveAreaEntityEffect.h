#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Data { class RemoveAreaEntityEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_GET_TARGETAREAENTITYNAME_OFFSET UNITYSDK_OFFSET(0x141FA60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141FA70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_GET_REMOVEAREATYPE_OFFSET UNITYSDK_OFFSET(0x141FAD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_REMOVEAREAENTITY_OFFSET UNITYSDK_OFFSET(0x141FAE0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int RemoveAreaEntityEffect_TypeDefinitionIndex = 14788;

	class RemoveAreaEntityEffect : public Il2CppObject
	{
	public:
		::System::String* _targetAreaEntityName_k__BackingField; // 0xD0
		::MX::Logic::Skills::TargetingType* _removeAreaType_k__BackingField; // 0xD8

		::System::String* get_targetAreaEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_GET_TARGETAREAENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::RemoveAreaEntityEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::RemoveAreaEntityEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_removeAreaType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_GET_REMOVEAREATYPE_OFFSET))(nullptr);
		}

		::System::Void RemoveAreaEntity(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEAREAENTITYEFFECT_REMOVEAREAENTITY_OFFSET))(arg, nullptr);
		}

	};
}

