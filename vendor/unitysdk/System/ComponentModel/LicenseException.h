#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B521E0)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52370)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52310)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52510)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52570)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GET_LICENSEDTYPE_OFFSET UNITYSDK_OFFSET(0x9B52710)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9B52720)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseException_TypeDefinitionIndex = 29501;

	class LicenseException : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x90
		::System::Object* instance; // 0x98

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Object* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_LicensedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GET_LICENSEDTYPE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

