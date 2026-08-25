#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Material; }

namespace UnityEngine
{
	inline static constexpr unsigned int Internal_DrawTextureArguments_TypeDefinitionIndex = 31004;

	class Internal_DrawTextureArguments : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* screenRect; // 0x10
		::UnityEngine::Rect* sourceRect; // 0x20
		::System::Int32 leftBorder; // 0x30
		::System::Int32 rightBorder; // 0x34
		::System::Int32 topBorder; // 0x38
		::System::Int32 bottomBorder; // 0x3C
		::UnityEngine::Color* leftBorderColor; // 0x40
		::UnityEngine::Color* rightBorderColor; // 0x50
		::UnityEngine::Color* topBorderColor; // 0x60
		::UnityEngine::Color* bottomBorderColor; // 0x70
		::UnityEngine::Color* color; // 0x80
		::UnityEngine::Vector4* borderWidths; // 0x90
		::UnityEngine::Vector4* cornerRadiuses; // 0xA0
		::System::Boolean smoothCorners; // 0xB0
		::System::Int32 pass; // 0xB4
		::UnityEngine::Texture* texture; // 0xB8
		::UnityEngine::Material* mat; // 0xC0

	};
}

