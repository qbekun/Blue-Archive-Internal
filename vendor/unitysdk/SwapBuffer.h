#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }

	inline static constexpr unsigned int SwapBuffer_TypeDefinitionIndex = 32890;

	class SwapBuffer : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderTargetHandle* rt; // 0x10
		::System::Int32 name; // 0x40
		::System::Int32 msaa; // 0x44

	};

