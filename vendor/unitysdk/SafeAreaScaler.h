#pragma once
#include "unitysdk.h"

#define SAFEAREASCALER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1A5E0)
#define SAFEAREASCALER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1A920)
#define SAFEAREASCALER_REFRESH_OFFSET UNITYSDK_OFFSET(0xC1A6A0)
#define SAFEAREASCALER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1AAD0)
#define SAFEAREASCALER_DISCARD_OFFSET UNITYSDK_OFFSET(0xC1AA50)

	inline static constexpr unsigned int SafeAreaScaler_TypeDefinitionIndex = 8854;

	class SafeAreaScaler : public Il2CppObject
	{
	public:
		::System::Single factor; // 0x18

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEAREASCALER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEAREASCALER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEAREASCALER_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEAREASCALER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Discard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEAREASCALER_DISCARD_OFFSET))(nullptr);
		}

	};

