#pragma once
#include "unitysdk.h"

#define EVENTFORTUNEGACHASHOPUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C3870)
#define EVENTFORTUNEGACHASHOPUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C38A0)
#define EVENTFORTUNEGACHASHOPUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C38B0)

	inline static constexpr unsigned int EventFortuneGachaShopUIOpener_TypeDefinitionIndex = 6958;

	class EventFortuneGachaShopUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTFORTUNEGACHASHOPUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTFORTUNEGACHASHOPUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTFORTUNEGACHASHOPUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

