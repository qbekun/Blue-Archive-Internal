#pragma once
#include "unitysdk.h"

class UISpriteData;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }
class Type;
class Flip;
namespace UnityEngine { class Vector4; }

#define SPRITE_GETDRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x243C630)

	inline static constexpr unsigned int Sprite_TypeDefinitionIndex = 254;

	class Sprite : public Il2CppObject
	{
	public:
		UISpriteData* sprite; // 0x10
		::UnityEngine::Vector2* pos; // 0x18
		::System::Single rot; // 0x20
		::System::Single width; // 0x24
		::System::Single height; // 0x28
		::UnityEngine::Color32* color; // 0x2C
		::UnityEngine::Vector2* pivot; // 0x30
		Type* type; // 0x38
		Flip* flip; // 0x3C
		::System::Boolean enabled; // 0x40

		::UnityEngine::Vector4* GetDrawingDimensions(::System::Single arg)
		{
			return ((::UnityEngine::Vector4*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPRITE_GETDRAWINGDIMENSIONS_OFFSET))(arg, nullptr);
		}

	};

