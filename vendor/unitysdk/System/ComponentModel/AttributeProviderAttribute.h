#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B23680)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B23710)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B237E0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9B238C0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9B238D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeProviderAttribute_TypeDefinitionIndex = 29348;

	class AttributeProviderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _TypeName_k__BackingField; // 0x10
		::System::String* _PropertyName_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

	};
}

