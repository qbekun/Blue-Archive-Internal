#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_IVIRTUALTEXTURINGENABLEDRENDERPIPELINE_GET_VIRTUALTEXTURINGENABLED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IVirtualTexturingEnabledRenderPipeline_TypeDefinitionIndex = 33911;

	class IVirtualTexturingEnabledRenderPipeline : public Il2CppObject
	{
	public:
		::System::Boolean get_virtualTexturingEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IVIRTUALTEXTURINGENABLEDRENDERPIPELINE_GET_VIRTUALTEXTURINGENABLED_OFFSET))(nullptr);
		}

	};
}

