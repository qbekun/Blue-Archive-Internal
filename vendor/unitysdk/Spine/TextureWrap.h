#pragma once
#include "../unitysdk.h"

namespace Spine { class TextureWrap; }

namespace Spine
{
	inline static constexpr unsigned int TextureWrap_TypeDefinitionIndex = 35010;

	class TextureWrap : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::TextureWrap* MirroredRepeat; // 0x0
		::Spine::TextureWrap* ClampToEdge; // 0x0
		::Spine::TextureWrap* Repeat; // 0x0

	};
}

