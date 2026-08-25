#pragma once
#include "unitysdk.h"

#define VALUESBACKGROUND_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A1E0)
#define VALUESBACKGROUND_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A2D0)
#define VALUESBACKGROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37A390)

	inline static constexpr unsigned int ValuesBackground_TypeDefinitionIndex = 30199;

	class ValuesBackground : public <ProcessWrite>d__34
	{
	public:
		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESBACKGROUND_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESBACKGROUND_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESBACKGROUND_.CTOR_OFFSET))(nullptr);
		}

	};

