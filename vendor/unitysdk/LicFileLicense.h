#pragma once
#include "unitysdk.h"

#define LICFILELICENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B33290)
#define LICFILELICENSE_GET_LICENSEKEY_OFFSET UNITYSDK_OFFSET(0x9B33310)
#define LICFILELICENSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B33320)

	inline static constexpr unsigned int LicFileLicense_TypeDefinitionIndex = 29417;

	class LicFileLicense : public Il2CppObject
	{
	public:
		::System::ComponentModel::LicFileLicenseProvider* _owner; // 0x10
		::System::String* _LicenseKey_k__BackingField; // 0x18

		::System::Void .ctor(::System::ComponentModel::LicFileLicenseProvider* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::LicFileLicenseProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LICFILELICENSE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_LicenseKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFILELICENSE_GET_LICENSEKEY_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFILELICENSE_DISPOSE_OFFSET))(nullptr);
		}

	};

