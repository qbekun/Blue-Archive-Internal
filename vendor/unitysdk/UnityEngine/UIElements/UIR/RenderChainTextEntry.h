#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainTextEntry_TypeDefinitionIndex = 30736;

	class RenderChainTextEntry : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::RenderChainCommand* command; // 0x10
		::System::Int32 firstVertex; // 0x18
		::System::Int32 vertexCount; // 0x1C

	};
}

