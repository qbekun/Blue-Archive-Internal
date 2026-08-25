#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }

#define TMPRO_VERTEXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11F410)
#define TMPRO_VERTEXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11F430)

namespace TMPro
{
	inline static constexpr unsigned int VertexGradient_TypeDefinitionIndex = 33619;

	class VertexGradient : public Il2CppObject
	{
	public:
		::UnityEngine::Color* topLeft; // 0x10
		::UnityEngine::Color* topRight; // 0x20
		::UnityEngine::Color* bottomLeft; // 0x30
		::UnityEngine::Color* bottomRight; // 0x40

		::System::Void .ctor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

