#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class DepthAccess; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int DepthAccess_TypeDefinitionIndex = 33829;

	class DepthAccess : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess* Read; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess* Write; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess* ReadWrite; // 0x0

	};
}

