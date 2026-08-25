#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

	inline static constexpr unsigned int Frame_TypeDefinitionIndex = 33765;

	class Frame : public Il2CppObject
	{
	public:
		::System::String* filename; // 0x10
		SpriteFrame* frame; // 0x18
		::System::Boolean rotated; // 0x28
		::System::Boolean trimmed; // 0x29
		SpriteFrame* spriteSourceSize; // 0x2C
		SpriteSize* sourceSize; // 0x3C
		::UnityEngine::Vector2* pivot; // 0x44

	};

