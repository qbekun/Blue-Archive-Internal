#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetFlags_TypeDefinitionIndex = 31510;

	class RenderTargetFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RenderTargetFlags* None; // 0x0
		::UnityEngine::Rendering::RenderTargetFlags* ReadOnlyDepth; // 0x0
		::UnityEngine::Rendering::RenderTargetFlags* ReadOnlyStencil; // 0x0
		::UnityEngine::Rendering::RenderTargetFlags* ReadOnlyDepthStencil; // 0x0

	};
}

