#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextVertex_TypeDefinitionIndex = 35587;

	class TextVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Vector2* uv; // 0x1C
		::UnityEngine::Vector2* uv2; // 0x24
		::UnityEngine::Vector2* uv4; // 0x2C
		::UnityEngine::Color32* color; // 0x34

	};
}

