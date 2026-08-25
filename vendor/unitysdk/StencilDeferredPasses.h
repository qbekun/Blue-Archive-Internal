#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int StencilDeferredPasses_TypeDefinitionIndex = 32850;

	class StencilDeferredPasses : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		StencilDeferredPasses* StencilVolume; // 0x0
		StencilDeferredPasses* PunctualLit; // 0x0
		StencilDeferredPasses* PunctualSimpleLit; // 0x0
		StencilDeferredPasses* DirectionalLit; // 0x0
		StencilDeferredPasses* DirectionalSimpleLit; // 0x0
		StencilDeferredPasses* ClearStencilPartial; // 0x0
		StencilDeferredPasses* Fog; // 0x0
		StencilDeferredPasses* SSAOOnly; // 0x0

	};

