#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Data { class WriteEntityToBlackboardEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423BC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_BLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1423C20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_TARGETSIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1423C30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_BLACKBOARDKEYTOWRITE_OFFSET UNITYSDK_OFFSET(0x1423C40)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int WriteEntityToBlackboardEffect_TypeDefinitionIndex = 14816;

	class WriteEntityToBlackboardEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* _TargetSideFilter_k__BackingField; // 0xD0
		::MX::Logic::Data::BlackboardKeyType* _BlackboardKeyType_k__BackingField; // 0xD4
		::System::String* _BlackboardKeyToWrite_k__BackingField; // 0xD8

		::System::Void .ctor(::MX::Logic::Data::WriteEntityToBlackboardEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::WriteEntityToBlackboardEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_BLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_TargetSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_TARGETSIDEFILTER_OFFSET))(nullptr);
		}

		::System::String* get_BlackboardKeyToWrite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_WRITEENTITYTOBLACKBOARDEFFECT_GET_BLACKBOARDKEYTOWRITE_OFFSET))(nullptr);
		}

	};
}

