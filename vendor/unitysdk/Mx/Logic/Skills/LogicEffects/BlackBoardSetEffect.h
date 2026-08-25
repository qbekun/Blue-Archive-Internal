#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Data { class BlackBoardSetEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETMIN_OFFSET UNITYSDK_OFFSET(0x140A080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_BLACKBOARDKEY_OFFSET UNITYSDK_OFFSET(0x140A090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140A0A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETMAX_OFFSET UNITYSDK_OFFSET(0x140A350)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETVALUE_OFFSET UNITYSDK_OFFSET(0x140A360)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_BLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x140A370)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardSetEffect_TypeDefinitionIndex = 14699;

	class BlackBoardSetEffect : public Il2CppObject
	{
	public:
		::System::String* _BlackBoardKey_k__BackingField; // 0xD0
		::MX::Logic::Data::BlackboardKeyType* _BlackBoardKeyType_k__BackingField; // 0xD8
		::System::Int64 _SetValue_k__BackingField; // 0xE0
		::System::Int64 _SetMin_k__BackingField; // 0xE8
		::System::Int64 _SetMax_k__BackingField; // 0xF0

		::System::Int64 get_SetMin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETMIN_OFFSET))(nullptr);
		}

		::System::String* get_BlackBoardKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_BLACKBOARDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BlackBoardSetEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BlackBoardSetEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_SetMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_SetValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_SETVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BlackBoardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSETEFFECT_GET_BLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

	};
}

