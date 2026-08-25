#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations { class AnimationStream&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine::Animations { class TransformSceneHandle&; }

#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA1D2FE0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0xA1D3040)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_HASTRANSFORMSCENEHANDLEDEFINITIONINDEX_OFFSET UNITYSDK_OFFSET(0xA1D3050)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0xA1D30A0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1D3180)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA1D3270)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRS_OFFSET UNITYSDK_OFFSET(0xA1D3340)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D3060)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D3200)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D32E0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D33A0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D33F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D3430)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D3480)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D3520)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D34D0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D3570)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int TransformSceneHandle_TypeDefinitionIndex = 36508;

	class TransformSceneHandle : public Il2CppObject
	{
	public:
		::System::UInt32 valid; // 0x10
		::System::Int32 transformSceneHandleDefinitionIndex; // 0x14

		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_createdByNative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasTransformSceneHandleDefinitionIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_HASTRANSFORMSCENEHANDLEDEFINITIONINDEX_OFFSET))(nullptr);
		}

		::System::Void CheckIsValid(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_CHECKISVALID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetRotation(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void GetLocalTRS(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasValidTransform(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPositionInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetRotationInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetLocalTRSInternal(::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRSINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasValidTransform_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPositionInternal_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetRotationInternal_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLocalRotationInternal_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLocalTRSInternal_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetGlobalTRInternal_Injected(::UnityEngine::Animations::TransformSceneHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

