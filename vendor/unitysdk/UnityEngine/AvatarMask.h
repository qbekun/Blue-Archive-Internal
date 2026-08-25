#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class AvatarMaskBodyPart; }

#define UNITYENGINE_AVATARMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CD8E0)
#define UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CD950)
#define UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1CD990)
#define UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0xA1CD9D0)
#define UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0xA1CDA10)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0xA1CDA50)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0xA1CDA90)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0xA1CDAE0)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0xA1CDB20)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0xA1CDB70)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0xA1CDBC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMask_TypeDefinitionIndex = 36478;

	class AvatarMask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AvatarMaskBodyPart*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_transformCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_transformCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* GetTransformPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransformPath(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET))(arg, str, nullptr);
		}

		::System::Single GetTransformWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransformWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetTransformActive(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransformActive(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

