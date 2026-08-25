#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B42E20)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B42E80)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9B42ED0)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_RECEIVERTYPENAME_OFFSET UNITYSDK_OFFSET(0x9B42EE0)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B42EF0)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B42F80)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B42FD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ProvidePropertyAttribute_TypeDefinitionIndex = 29447;

	class ProvidePropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10
		::System::String* _ReceiverTypeName_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

		::System::String* get_ReceiverTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_RECEIVERTYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

	};
}

