#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector3; }
namespace Animancer { class FadeMode; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class ClipTransition; }
namespace Animancer { class ClipState; }
namespace UnityEngine { class Object; }

#define ANIMANCER_CLIPTRANSITION_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4BE850)
#define ANIMANCER_CLIPTRANSITION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4BE8E0)
#define ANIMANCER_CLIPTRANSITION_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4BC530)
#define ANIMANCER_CLIPTRANSITION_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4BE960)
#define ANIMANCER_CLIPTRANSITION_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x4BEB30)
#define ANIMANCER_CLIPTRANSITION_APPLY_OFFSET UNITYSDK_OFFSET(0x4BEB90)
#define ANIMANCER_CLIPTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4BC5E0)
#define ANIMANCER_CLIPTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4BEC00)
#define ANIMANCER_CLIPTRANSITION_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4BECC0)
#define ANIMANCER_CLIPTRANSITION_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x4BECD0)
#define ANIMANCER_CLIPTRANSITION_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x4BECE0)
#define ANIMANCER_CLIPTRANSITION_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x4BED60)
#define ANIMANCER_CLIPTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BC6B0)
#define ANIMANCER_CLIPTRANSITION_SET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x4BEDE0)
#define ANIMANCER_CLIPTRANSITION_GET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x4BEDF0)
#define ANIMANCER_CLIPTRANSITION_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x4BEE00)
#define ANIMANCER_CLIPTRANSITION_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x4BEE10)
#define ANIMANCER_CLIPTRANSITION_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x4BEE90)
#define ANIMANCER_CLIPTRANSITION_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4BEEA0)
#define ANIMANCER_CLIPTRANSITION_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x4BEEB0)

namespace Animancer
{
	inline static constexpr unsigned int ClipTransition_TypeDefinitionIndex = 35220;

	class ClipTransition : public ::FlatData::ConstFieldExcelTable
	{
	public:
		::System::String* ClipFieldName; // 0x0
		::UnityEngine::AnimationClip* _Clip; // 0x38
		::System::Single _Speed; // 0x40
		::System::Single _NormalizedStartTime; // 0x44

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_LENGTH_OFFSET))(nullptr);
		}

		::Animancer::FadeMode* get_FadeMode()
		{
			return (return (::Animancer::FadeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_FADEMODE_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Animancer::ClipTransition* arg)
		{
			((::System::Void(*)(::Animancer::ClipTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::Animancer::ClipState* CreateState()
		{
			return (return (::Animancer::ClipState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Single get_AverageAngularSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_AVERAGEANGULARSPEED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_SET_NORMALIZEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_NormalizedStartTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_NORMALIZEDSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_Clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* get_Clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITION_SET_SPEED_OFFSET))(arg, nullptr);
		}

	};
}

