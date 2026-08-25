#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Material; }

#define SHADERCOLORINFO_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x20DCD90)
#define SHADERCOLORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCA70)

	inline static constexpr unsigned int ShaderColorInfo_TypeDefinitionIndex = 3753;

	class ShaderColorInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Color* Value; // 0x28

		::System::Void ApplyValue(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORINFO_APPLYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORINFO_.CTOR_OFFSET))(nullptr);
		}

	};

