#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int TextureCreationFlags_TypeDefinitionIndex = 31651;

	class TextureCreationFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::TextureCreationFlags* None; // 0x0
		::UnityEngine::Experimental::Rendering::TextureCreationFlags* MipChain; // 0x0
		::UnityEngine::Experimental::Rendering::TextureCreationFlags* Crunch; // 0x0

	};
}

