#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class UIVertex; }

#define UNITYENGINE_UIVERTEX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E8320)

namespace UnityEngine
{
	inline static constexpr unsigned int UIVertex_TypeDefinitionIndex = 37672;

	class UIVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Vector3* normal; // 0x1C
		::UnityEngine::Vector4* tangent; // 0x28
		::UnityEngine::Color32* color; // 0x38
		::UnityEngine::Vector4* uv0; // 0x3C
		::UnityEngine::Vector4* uv1; // 0x4C
		::UnityEngine::Vector4* uv2; // 0x5C
		::UnityEngine::Vector4* uv3; // 0x6C
		::UnityEngine::Color32* s_DefaultColor; // 0x0
		::UnityEngine::Vector4* s_DefaultTangent; // 0x4
		::UnityEngine::UIVertex* simpleVert; // 0x14

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIVERTEX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

