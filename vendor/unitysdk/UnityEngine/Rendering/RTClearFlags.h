#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTClearFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTClearFlags_TypeDefinitionIndex = 31520;

	class RTClearFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RTClearFlags* None; // 0x0
		::UnityEngine::Rendering::RTClearFlags* Color; // 0x0
		::UnityEngine::Rendering::RTClearFlags* Depth; // 0x0
		::UnityEngine::Rendering::RTClearFlags* Stencil; // 0x0
		::UnityEngine::Rendering::RTClearFlags* All; // 0x0
		::UnityEngine::Rendering::RTClearFlags* DepthStencil; // 0x0
		::UnityEngine::Rendering::RTClearFlags* ColorDepth; // 0x0
		::UnityEngine::Rendering::RTClearFlags* ColorStencil; // 0x0

	};
}

