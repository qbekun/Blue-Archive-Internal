#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector4; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Vertex_TypeDefinitionIndex = 30575;

	class Vertex : public Il2CppObject
	{
	public:
		::System::Single nearZ; // 0x0
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Color32* tint; // 0x1C
		::UnityEngine::Vector2* uv; // 0x20
		::UnityEngine::Color32* xformClipPages; // 0x28
		::UnityEngine::Color32* ids; // 0x2C
		::UnityEngine::Color32* flags; // 0x30
		::UnityEngine::Color32* opacityColorPages; // 0x34
		::UnityEngine::Vector4* circle; // 0x38
		::System::Single textureId; // 0x48

	};
}

