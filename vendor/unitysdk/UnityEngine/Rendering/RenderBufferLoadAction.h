#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderBufferLoadAction; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderBufferLoadAction_TypeDefinitionIndex = 31486;

	class RenderBufferLoadAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RenderBufferLoadAction* Load; // 0x0
		::UnityEngine::Rendering::RenderBufferLoadAction* Clear; // 0x0
		::UnityEngine::Rendering::RenderBufferLoadAction* DontCare; // 0x0

	};
}

