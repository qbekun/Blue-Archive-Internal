#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class CameraRenderType; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA076A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_GETNAME_OFFSET UNITYSDK_OFFSET(0xA076AF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraTypeUtility_TypeDefinitionIndex = 32774;

	class CameraTypeUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_CameraTypeNames; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetName(::UnityEngine::Rendering::Universal::CameraRenderType* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Rendering::Universal::CameraRenderType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_GETNAME_OFFSET))(arg, nullptr);
		}

	};
}

