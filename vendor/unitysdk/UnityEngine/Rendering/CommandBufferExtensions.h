#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier&; }
namespace UnityEngine::Rendering { class FastMemoryFlags; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_INTERNAL_SWITCHINTOFASTMEMORY_OFFSET UNITYSDK_OFFSET(0xA255E00)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_INTERNAL_SWITCHOUTOFFASTMEMORY_OFFSET UNITYSDK_OFFSET(0xA255E60)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_SWITCHINTOFASTMEMORY_OFFSET UNITYSDK_OFFSET(0xA255EB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_SWITCHOUTOFFASTMEMORY_OFFSET UNITYSDK_OFFSET(0xA255F10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExtensions_TypeDefinitionIndex = 31530;

	class CommandBufferExtensions : public Il2CppObject
	{
	public:
		::System::Void Internal_SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::FastMemoryFlags* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::FastMemoryFlags*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_INTERNAL_SWITCHINTOFASTMEMORY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_INTERNAL_SWITCHOUTOFFASTMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::FastMemoryFlags* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::FastMemoryFlags*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_SWITCHINTOFASTMEMORY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXTENSIONS_SWITCHOUTOFFASTMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

