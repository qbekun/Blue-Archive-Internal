#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal { class RenderQueueType; }

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderQueueType_TypeDefinitionIndex = 32424;

	class RenderQueueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* Opaque; // 0x0
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* Transparent; // 0x0

	};
}

