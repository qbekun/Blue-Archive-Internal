#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class IRenderGraphResourcePool; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_RELEASEGRAPHICSRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_ISCREATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResource`2_TypeDefinitionIndex = 33874;

	class RenderGraphResource`2 : public Il2CppObject
	{
	public:
		Il2CppObject* desc; // 0x0
		Il2CppObject* graphicsResource; // 0x0

		::System::Void ReleaseGraphicsResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_RELEASEGRAPHICSRESOURCE_OFFSET))(nullptr);
		}

		::System::Boolean IsCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

