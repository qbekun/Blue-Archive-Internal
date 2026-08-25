#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDE70)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDE80)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDF20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadAttribute_TypeDefinitionIndex = 34075;

	class ReloadAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Package* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Package*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Package* arg)
		{
			((::System::Void(*)(::System::String*, Package*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, Package* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, Package*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

