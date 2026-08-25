#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB57E0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5880)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5930)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FB59E0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FB5A50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ProfilingSample_TypeDefinitionIndex = 33984;

	class ProfilingSample : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::CommandBuffer* m_Cmd; // 0x10
		::System::String* m_Name; // 0x18
		::System::Boolean m_Disposed; // 0x20
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0x28

		::System::Void .ctor(::UnityEngine::Rendering::CommandBuffer* arg, ::System::String* str, ::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::CommandBuffer* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::CommandBuffer* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLE_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

