#pragma once
#include "unitysdk.h"

class CameraShaker;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define CAMERASHAKEBEHAVIOR_SET_YAWPITCHROLL_OFFSET UNITYSDK_OFFSET(0x2049090)
#define CAMERASHAKEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x20490A0)
#define CAMERASHAKEBEHAVIOR_GET_YAWPITCHROLL_OFFSET UNITYSDK_OFFSET(0x2049200)
#define CAMERASHAKEBEHAVIOR_GET_SHAKER_OFFSET UNITYSDK_OFFSET(0x2049220)
#define CAMERASHAKEBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2049230)
#define CAMERASHAKEBEHAVIOR_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x2049240)
#define CAMERASHAKEBEHAVIOR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2049260)
#define CAMERASHAKEBEHAVIOR_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x2049270)
#define CAMERASHAKEBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x2049280)
#define CAMERASHAKEBEHAVIOR_SET_SHAKER_OFFSET UNITYSDK_OFFSET(0x2049350)
#define CAMERASHAKEBEHAVIOR_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x2049360)
#define CAMERASHAKEBEHAVIOR_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x2049370)
#define CAMERASHAKEBEHAVIOR_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x2049380)

	inline static constexpr unsigned int CameraShakeBehavior_TypeDefinitionIndex = 3273;

	class CameraShakeBehavior : public Il2CppObject
	{
	public:
		CameraShaker* _Shaker_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x18
		::UnityEngine::Vector3* _Intensity_k__BackingField; // 0x1C
		::UnityEngine::Vector3* _YawPitchRoll_k__BackingField; // 0x28
		::UnityEngine::AnimationCurve* _Curve_k__BackingField; // 0x38

		::System::Void set_YawPitchRoll(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_SET_YAWPITCHROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* get_YawPitchRoll()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_GET_YAWPITCHROLL_OFFSET))(nullptr);
		}

		CameraShaker* get_Shaker()
		{
			return ((CameraShaker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_GET_SHAKER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Intensity()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_GET_INTENSITY_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationCurve* get_Curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_GET_CURVE_OFFSET))(nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Shaker(CameraShaker* arg)
		{
			((::System::Void(*)(CameraShaker*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_SET_SHAKER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Curve(::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_SET_CURVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Intensity(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEBEHAVIOR_SET_INTENSITY_OFFSET))(arg, nullptr);
		}

	};

