#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSE_GET_LICENSEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_LICENSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_LICENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B33300)

namespace System::ComponentModel
{
	inline static constexpr unsigned int License_TypeDefinitionIndex = 29419;

	class License : public Il2CppObject
	{
	public:
		::System::String* get_LicenseKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSE_GET_LICENSEKEY_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

