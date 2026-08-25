#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextureColorSpace; }

namespace UnityEngine
{
	inline static constexpr unsigned int TextureColorSpace_TypeDefinitionIndex = 31047;

	class TextureColorSpace : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextureColorSpace* Linear; // 0x0
		::UnityEngine::TextureColorSpace* sRGB; // 0x0

	};
}

