#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int SpriteColorPair_TypeDefinitionIndex = 7648;

	class SpriteColorPair : public Il2CppObject
	{
	public:
		::UnityEngine::Color* OriginalColor; // 0x10
		::UnityEngine::Color* ReplaceColor; // 0x20

	};

