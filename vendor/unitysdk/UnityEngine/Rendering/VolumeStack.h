#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMESTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5E80)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET UNITYSDK_OFFSET(0x9FE5F00)
#define UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9FE63A0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE6400)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_TypeDefinitionIndex = 34135;

	class VolumeStack : public Il2CppObject
	{
	public:
		Il2CppObject* components; // 0x10
		::Il2CppArray<::System::Object*>* defaultParameters; // 0x18
		::System::Boolean requiresReset; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::VolumeComponent* GetComponent(::System::Type* arg)
		{
			return (return (::UnityEngine::Rendering::VolumeComponent*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET))(nullptr);
		}

	};
}

