#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define SHADERKEYWORDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCA40)
#define SHADERKEYWORDINFO_APPLY_OFFSET UNITYSDK_OFFSET(0x20DC130)
#define SHADERKEYWORDINFO_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x20DCB80)

	inline static constexpr unsigned int ShaderKeywordInfo_TypeDefinitionIndex = 3749;

	class ShaderKeywordInfo : public Il2CppObject
	{
	public:
		::System::String* KeywordName; // 0x10
		::System::Boolean KeywordEnable; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERKEYWORDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERKEYWORDINFO_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::Material* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHADERKEYWORDINFO_SETKEYWORD_OFFSET))(arg, arg2, nullptr);
		}

	};

