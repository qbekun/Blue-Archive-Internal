#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream&; }
namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations { class PropertyStreamHandle&; }

#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D29F0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0xA1D2A30)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET UNITYSDK_OFFSET(0xA1D2A70)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D2A40)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASVALUEARRAYINDEX_OFFSET UNITYSDK_OFFSET(0xA1D2A80)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASBINDTYPE_OFFSET UNITYSDK_OFFSET(0xA1D2A50)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0xA1D2A60)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2A90)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET UNITYSDK_OFFSET(0xA1D2AE0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1D2C40)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINT_OFFSET UNITYSDK_OFFSET(0xA1D2D20)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOL_OFFSET UNITYSDK_OFFSET(0xA1D2E00)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2C00)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2CE0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2DC0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOLINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D2EA0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2EE0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2F20)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2F60)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOLINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D2FA0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int PropertyStreamHandle_TypeDefinitionIndex = 36507;

	class PropertyStreamHandle : public Il2CppObject
	{
	public:
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::Int32 handleIndex; // 0x14
		::System::Int32 valueArrayIndex; // 0x18
		::System::Int32 bindType; // 0x1C

		::System::Boolean IsValidInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISVALIDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_createdByNative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsSameVersionAsStream(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasHandleIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_hasValueArrayIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASVALUEARRAYINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_hasBindType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASBINDTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_animatorBindingsVersion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET))(nullptr);
		}

		::System::Boolean IsResolvedInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckIsValidAndResolve(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInt(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBool(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOL_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloatInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIntInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBoolInternal(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOLINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::PropertyStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetFloatInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Animations::PropertyStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetIntInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::PropertyStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETINTINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetBoolInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle&* arg, ::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::PropertyStreamHandle&*, ::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETBOOLINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

