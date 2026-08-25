#pragma once
#include "unitysdk.h"

#define CLUESEARCHUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C4030)
#define CLUESEARCHUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C4060)
#define CLUESEARCHUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C4070)

	inline static constexpr unsigned int ClueSearchUIOpener_TypeDefinitionIndex = 6965;

	class ClueSearchUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUESEARCHUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUESEARCHUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLUESEARCHUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

