#pragma once
#include "unitysdk.h"

#define VALUESFONTDEFINITION_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A3D0)
#define VALUESFONTDEFINITION_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A4C0)
#define VALUESFONTDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37A570)

	inline static constexpr unsigned int ValuesFontDefinition_TypeDefinitionIndex = 30200;

	class ValuesFontDefinition : public <SetHeadersAsync>d__37
	{
	public:
		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFONTDEFINITION_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESFONTDEFINITION_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFONTDEFINITION_.CTOR_OFFSET))(nullptr);
		}

	};

