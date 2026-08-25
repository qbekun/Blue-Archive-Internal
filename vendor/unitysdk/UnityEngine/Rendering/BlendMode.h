#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BlendMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendMode_TypeDefinitionIndex = 31489;

	class BlendMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::BlendMode* Zero; // 0x0
		::UnityEngine::Rendering::BlendMode* One; // 0x0
		::UnityEngine::Rendering::BlendMode* DstColor; // 0x0
		::UnityEngine::Rendering::BlendMode* SrcColor; // 0x0
		::UnityEngine::Rendering::BlendMode* OneMinusDstColor; // 0x0
		::UnityEngine::Rendering::BlendMode* SrcAlpha; // 0x0
		::UnityEngine::Rendering::BlendMode* OneMinusSrcColor; // 0x0
		::UnityEngine::Rendering::BlendMode* DstAlpha; // 0x0
		::UnityEngine::Rendering::BlendMode* OneMinusDstAlpha; // 0x0
		::UnityEngine::Rendering::BlendMode* SrcAlphaSaturate; // 0x0
		::UnityEngine::Rendering::BlendMode* OneMinusSrcAlpha; // 0x0

	};
}

