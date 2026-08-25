#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace UnityEngine { class Vector3; }

#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_HASSPEEDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_SYNCHRONIZECHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_SPEEDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERTRANSITION`1_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ManualMixerTransition`1_TypeDefinitionIndex = 35242;

	class ManualMixerTransition`1 : public ::FlatData::ConstContentsExcel
	{
	public:
		::System::Single _Speed; // 0x0
		::Il2CppArray<::System::Object*>* _Animations; // 0x0
		::System::String* AnimationsField; // 0x0
		::Il2CppArray<::System::Object*>* _Speeds; // 0x0
		::System::String* SpeedsField; // 0x0
		::Il2CppArray<::System::Object*>* _SynchronizeChildren; // 0x0
		::System::String* SynchronizeChildrenField; // 0x0

		::System::Boolean get_HasSpeeds()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_HASSPEEDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Object[]&* get_Animations()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_ANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Void Animancer.IAnimationClipCollection.GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Single get_AverageAngularSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_AVERAGEANGULARSPEED_OFFSET))(nullptr);
		}

		::System::Object[]&* get_SynchronizeChildren()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_SYNCHRONIZECHILDREN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_INITIALIZESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_Speeds()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_SPEEDS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION`1_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

	};
}

