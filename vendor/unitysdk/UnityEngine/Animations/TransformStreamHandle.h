#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations { class AnimationStream&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine::Animations { class TransformStreamHandle&; }

#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA1D1EB0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D1EE0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0xA1D1F10)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET UNITYSDK_OFFSET(0xA1D1F40)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D1F20)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASSKELETONINDEX_OFFSET UNITYSDK_OFFSET(0xA1D1F50)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0xA1D1F30)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D1F60)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET UNITYSDK_OFFSET(0xA1D1FA0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1D2100)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA1D21F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xA1D22C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xA1D2390)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRS_OFFSET UNITYSDK_OFFSET(0xA1D2440)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRS_OFFSET UNITYSDK_OFFSET(0xA1D24F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D20C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2180)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2260)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2330)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D23F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D24A0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D25A0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D25F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2630)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2810)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2680)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2860)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D28B0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2900)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D26D0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2720)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2770)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D27C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2950)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETGLOBALTRINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D29A0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int TransformStreamHandle_TypeDefinitionIndex = 36506;

	class TransformStreamHandle : public Il2CppObject
	{
	public:
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::Int32 handleIndex; // 0x14
		::System::Int32 skeletonIndex; // 0x18

		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALIDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_createdByNative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsSameVersionAsStream(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasHandleIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_hasSkeletonIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASSKELETONINDEX_OFFSET))(nullptr);
		}

		::System::UInt32 get_animatorBindingsVersion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET))(nullptr);
		}

		::System::Boolean IsResolvedInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckIsValidAndResolve(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetRotation(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetLocalRotation(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalRotation(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalTRS(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetLocalTRS(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResolveInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPositionInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetRotationInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetLocalRotationInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalRotationInternal(::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalTRSInternal(::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetLocalTRSInternal(::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResolveInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETPOSITIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLocalPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLocalPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLocalRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLocalRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLocalTRSInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetLocalTRSInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetGlobalTRInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalTRInternal_Injected(::UnityEngine::Animations::TransformStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETGLOBALTRINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

