#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ForceMoveType; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Logic::Data { class ForceMoveEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1418ED0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1418EE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1418EF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1418F00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1418F10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1418F20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1418FD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1418FE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1418FF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1419000)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ForceMoveEffect_TypeDefinitionIndex = 14749;

	class ForceMoveEffect : public Il2CppObject
	{
	public:
		::System::Int32 _DurationFrame_k__BackingField; // 0xD0
		::System::Single _Distance_k__BackingField; // 0xD4
		::MX::Logic::Data::ForceMoveType* _DirectionType_k__BackingField; // 0xD8
		::MX::Core::Math::TransitionType* _Transition_k__BackingField; // 0xDC

		::System::Void set_DirectionType(::MX::Logic::Data::ForceMoveType* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ForceMoveType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DIRECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Distance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void set_Transition(::MX::Core::Math::TransitionType* arg)
		{
			((::System::Void(*)(::MX::Core::Math::TransitionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_TRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ForceMoveEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ForceMoveEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DISTANCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::TransitionType* get_Transition()
		{
			return ((::MX::Core::Math::TransitionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_TRANSITION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ForceMoveType* get_DirectionType()
		{
			return ((::MX::Logic::Data::ForceMoveType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_GET_DIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DurationFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEMOVEEFFECT_SET_DURATIONFRAME_OFFSET))(arg, nullptr);
		}

	};
}

