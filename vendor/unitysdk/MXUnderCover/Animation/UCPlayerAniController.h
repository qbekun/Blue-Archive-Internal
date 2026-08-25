#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover { class UCEntityMovement; }
class EntityCompositionData;
namespace Animancer { class ClipTransition; }
namespace MXUnderCover::Animation { class UCPlayerAnimations; }
class CoroutineAsyncOperation;

#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_GET_ISPOLYMORPHON_OFFSET UNITYSDK_OFFSET(0xDD37C0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xDD37D0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_PLAYTRANSITIONANI_OFFSET UNITYSDK_OFFSET(0xDD37E0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_SET_ISPOLYMORPHON_OFFSET UNITYSDK_OFFSET(0xDD38A0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_USESKILL_POLYMORPH_OFFSET UNITYSDK_OFFSET(0xDD38B0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_ADDSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDD3930)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3980)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_REBIND_OFFSET UNITYSDK_OFFSET(0xDD39C0)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xDD3A70)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerAniController_TypeDefinitionIndex = 10107;

	class UCPlayerAniController : public FingerAndTouchState
	{
	public:
		::MXUnderCover::UCEntityMovement* movement; // 0x80
		::System::Boolean _IsPolymorphOn_k__BackingField; // 0x88

		::System::Boolean get_IsPolymorphOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_GET_ISPOLYMORPHON_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::Animancer::ClipTransition* PlayTransitionAni(::MXUnderCover::Animation::UCPlayerAnimations* arg)
		{
			return ((::Animancer::ClipTransition*(*)(::MXUnderCover::Animation::UCPlayerAnimations*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_PLAYTRANSITIONANI_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPolymorphOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_SET_ISPOLYMORPHON_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* UseSkill_Polymorph()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_USESKILL_POLYMORPH_OFFSET))(nullptr);
		}

		Il2CppObject* AddStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_ADDSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_REBIND_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANICONTROLLER_UNINITIALIZE_OFFSET))(nullptr);
		}

	};
}

