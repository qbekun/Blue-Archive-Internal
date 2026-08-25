#pragma once
#include "unitysdk.h"

#define VALUESFONT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A5B0)
#define VALUESFONT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A680)
#define VALUESFONT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37A720)

	inline static constexpr unsigned int ValuesFont_TypeDefinitionIndex = 30201;

	class ValuesFont : public <Initialize>d__36
	{
	public:
		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFONT_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESFONT_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFONT_.CTOR_OFFSET))(nullptr);
		}

	};

