#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define GLYPHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F39F00)

	inline static constexpr unsigned int GlyphInfo_TypeDefinitionIndex = 112;

	class GlyphInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* v0; // 0x10
		::UnityEngine::Vector2* v1; // 0x18
		::UnityEngine::Vector2* u0; // 0x20
		::UnityEngine::Vector2* u1; // 0x28
		::UnityEngine::Vector2* u2; // 0x30
		::UnityEngine::Vector2* u3; // 0x38
		::System::Single advance; // 0x40
		::System::Int32 channel; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLYPHINFO_.CTOR_OFFSET))(nullptr);
		}

	};

