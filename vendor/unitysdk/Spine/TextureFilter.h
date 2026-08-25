#pragma once
#include "../unitysdk.h"

namespace Spine { class TextureFilter; }

namespace Spine
{
	inline static constexpr unsigned int TextureFilter_TypeDefinitionIndex = 35009;

	class TextureFilter : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::TextureFilter* Nearest; // 0x0
		::Spine::TextureFilter* Linear; // 0x0
		::Spine::TextureFilter* MipMap; // 0x0
		::Spine::TextureFilter* MipMapNearestNearest; // 0x0
		::Spine::TextureFilter* MipMapLinearNearest; // 0x0
		::Spine::TextureFilter* MipMapNearestLinear; // 0x0
		::Spine::TextureFilter* MipMapLinearLinear; // 0x0

	};
}

