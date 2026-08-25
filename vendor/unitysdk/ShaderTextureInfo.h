#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Material; }

#define SHADERTEXTUREINFO_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x20DCE30)
#define SHADERTEXTUREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCA80)

	inline static constexpr unsigned int ShaderTextureInfo_TypeDefinitionIndex = 3754;

	class ShaderTextureInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* Value; // 0x28
		::System::Boolean useST; // 0x30
		::UnityEngine::Vector2* ScaleValue; // 0x34
		::UnityEngine::Vector2* OffsetValue; // 0x3C

		::System::Void ApplyValue(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTUREINFO_APPLYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTUREINFO_.CTOR_OFFSET))(nullptr);
		}

	};

