#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderBufferStoreAction; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderBufferStoreAction_TypeDefinitionIndex = 31487;

	class RenderBufferStoreAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RenderBufferStoreAction* Store; // 0x0
		::UnityEngine::Rendering::RenderBufferStoreAction* Resolve; // 0x0
		::UnityEngine::Rendering::RenderBufferStoreAction* StoreAndResolve; // 0x0
		::UnityEngine::Rendering::RenderBufferStoreAction* DontCare; // 0x0

	};
}

