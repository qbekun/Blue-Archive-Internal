#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector2; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VectorImageVertex_TypeDefinitionIndex = 30241;

	class VectorImageVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Color32* tint; // 0x1C
		::UnityEngine::Vector2* uv; // 0x20
		::System::UInt32 settingIndex; // 0x28

	};
}

