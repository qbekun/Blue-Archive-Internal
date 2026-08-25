#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define SHADERFLOATINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCA50)
#define SHADERFLOATINFO_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x20DCC60)

	inline static constexpr unsigned int ShaderFloatInfo_TypeDefinitionIndex = 3751;

	class ShaderFloatInfo : public Il2CppObject
	{
	public:
		::System::Single Value; // 0x28
		::System::Boolean IsRange; // 0x2C
		::System::Single RangeMin; // 0x30
		::System::Single RangeMax; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERFLOATINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyValue(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFLOATINFO_APPLYVALUE_OFFSET))(arg, nullptr);
		}

	};

