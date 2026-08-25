#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextureWrapMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int TextureWrapMode_TypeDefinitionIndex = 31044;

	class TextureWrapMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextureWrapMode* Repeat; // 0x0
		::UnityEngine::TextureWrapMode* Clamp; // 0x0
		::UnityEngine::TextureWrapMode* Mirror; // 0x0
		::UnityEngine::TextureWrapMode* MirrorOnce; // 0x0

	};
}

