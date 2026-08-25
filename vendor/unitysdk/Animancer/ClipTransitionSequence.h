#pragma once
#include "../unitysdk.h"

namespace Animancer { class ClipTransition; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine { class Vector3; }
namespace Animancer { class ClipTransitionSequence; }
namespace Animancer { class AnimancerEvent; }

#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_OTHERS_OFFSET UNITYSDK_OFFSET(0x4BEEC0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_LASTTRANSITION_OFFSET UNITYSDK_OFFSET(0x4BEED0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x4BEF10)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x4BEF20)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_APPLY_OFFSET UNITYSDK_OFFSET(0x4BF0A0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4BF290)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x4BF360)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4BF430)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x4BF4B0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x4BF580)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4BF700)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4BF910)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4BF980)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x4BFA70)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_SET_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x4BFAF0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x4BFB80)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_TRYADDEVENT_OFFSET UNITYSDK_OFFSET(0x4BFC60)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x4BFC90)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BFDE0)
#define ANIMANCER_CLIPTRANSITIONSEQUENCE__APPLY_B__8_0_OFFSET UNITYSDK_OFFSET(0x4BFED0)

namespace Animancer
{
	inline static constexpr unsigned int ClipTransitionSequence_TypeDefinitionIndex = 35222;

	class ClipTransitionSequence : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Others; // 0x48
		::System::Action* _OnEnd; // 0x50

		::System::Object[]&* get_Others()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_OTHERS_OFFSET))(nullptr);
		}

		::Animancer::ClipTransition* get_LastTransition()
		{
			return (return (::Animancer::ClipTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_LASTTRANSITION_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Single get_AverageAngularSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_AVERAGEANGULARSPEED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Animancer::ClipTransitionSequence* arg)
		{
			((::System::Void(*)(::Animancer::ClipTransitionSequence*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_COPYFROM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerEvent* get_EndEvent()
		{
			return (return (::Animancer::AnimancerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_GET_ENDEVENT_OFFSET))(nullptr);
		}

		::System::Void set_EndEvent(::Animancer::AnimancerEvent* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_SET_ENDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddEvent(::System::Single arg, ::System::Boolean arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_ADDEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddEvent(::Animancer::ClipTransition* arg, ::System::Single arg, float&* arg, ::System::Action* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::ClipTransition*, ::System::Single, float&*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_TRYADDEVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddEvent(::Animancer::ClipTransition* arg, ::System::Single arg, ::System::Action* arg)
		{
			((::System::Void(*)(::Animancer::ClipTransition*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_ADDEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Apply_b__8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONSEQUENCE__APPLY_B__8_0_OFFSET))(nullptr);
		}

	};
}

