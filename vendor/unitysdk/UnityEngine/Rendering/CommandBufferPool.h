#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x9FA6FE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x9FA70A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FA7150)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FA71F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferPool_TypeDefinitionIndex = 33884;

	class CommandBufferPool : public Il2CppObject
	{
	public:
		Il2CppObject* s_BufferPool; // 0x0

		::UnityEngine::Rendering::CommandBuffer* Get()
		{
			return (return (::UnityEngine::Rendering::CommandBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::CommandBuffer* Get(::System::String* str)
		{
			return (return (::UnityEngine::Rendering::CommandBuffer*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET))(str, nullptr);
		}

		::System::Void Release(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

