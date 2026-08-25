#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDER_GETLICENSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B332F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseProvider_TypeDefinitionIndex = 29422;

	class LicenseProvider : public Il2CppObject
	{
	public:
		::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext* arg, ::System::Type* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::ComponentModel::License*(*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDER_GETLICENSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

