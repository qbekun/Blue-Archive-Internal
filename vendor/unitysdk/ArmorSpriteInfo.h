#pragma once
#include "unitysdk.h"

namespace FlatData { class ArmorType; }
class UISprite;

	inline static constexpr unsigned int ArmorSpriteInfo_TypeDefinitionIndex = 6346;

	class ArmorSpriteInfo : public Il2CppObject
	{
	public:
		::FlatData::ArmorType* Type; // 0x10
		UISprite* Sprite; // 0x18

	};

