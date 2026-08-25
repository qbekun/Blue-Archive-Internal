#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector2; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextVertex_TypeDefinitionIndex = 37366;

	class TextVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Color32* color; // 0x1C
		::UnityEngine::Vector2* uv0; // 0x20

	};
}

