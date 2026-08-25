#pragma once
#include "unitysdk.h"

#define SECRETSTONEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C0440)
#define SECRETSTONEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0450)
#define SECRETSTONEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C05D0)

	inline static constexpr unsigned int SecretStoneUIOpener_TypeDefinitionIndex = 6942;

	class SecretStoneUIOpener : public Il2CppObject
	{
	public:
		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SECRETSTONEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECRETSTONEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECRETSTONEUIOPENER_.CTOR_OFFSET))(nullptr);
		}

	};

