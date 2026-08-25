#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_ISKEYVALID_OFFSET UNITYSDK_OFFSET(0x9B32D20)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETKEY_OFFSET UNITYSDK_OFFSET(0x9B32D60)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETLICENSE_OFFSET UNITYSDK_OFFSET(0x9B32E10)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B332E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicFileLicenseProvider_TypeDefinitionIndex = 29418;

	class LicFileLicenseProvider : public Il2CppObject
	{
	public:
		::System::Boolean IsKeyValid(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_ISKEYVALID_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetKey(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext* arg, ::System::Type* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::ComponentModel::License*(*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETLICENSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

