#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TEXTCORE_TEXT_SPRITEGLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D96A0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteGlyph_TypeDefinitionIndex = 35581;

	class SpriteGlyph : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEGLYPH_.CTOR_OFFSET))(nullptr);
		}

	};
}

