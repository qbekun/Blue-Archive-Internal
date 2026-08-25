#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DepthBits; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthBits_TypeDefinitionIndex = 34020;

	class DepthBits : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DepthBits* None; // 0x0
		::UnityEngine::Rendering::DepthBits* Depth8; // 0x0
		::UnityEngine::Rendering::DepthBits* Depth16; // 0x0
		::UnityEngine::Rendering::DepthBits* Depth24; // 0x0
		::UnityEngine::Rendering::DepthBits* Depth32; // 0x0

	};
}

