#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }
namespace TMPro { class TMP_Vertex; }

#define TMPRO_TMP_VERTEX_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA120130)
#define TMPRO_TMP_VERTEX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1201A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Vertex_TypeDefinitionIndex = 33631;

	class TMP_Vertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Vector2* uv; // 0x1C
		::UnityEngine::Vector2* uv2; // 0x24
		::UnityEngine::Vector2* uv4; // 0x2C
		::UnityEngine::Color32* color; // 0x34
		::TMPro::TMP_Vertex* k_Zero; // 0x0

		::TMPro::TMP_Vertex* get_zero()
		{
			return (return (::TMPro::TMP_Vertex*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

