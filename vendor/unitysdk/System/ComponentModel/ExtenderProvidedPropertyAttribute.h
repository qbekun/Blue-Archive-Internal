#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_CREATE_OFFSET UNITYSDK_OFFSET(0x9B31650)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B31C50)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_EXTENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B31C60)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_EXTENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B31C70)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9B31C80)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9B31C90)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_RECEIVERTYPE_OFFSET UNITYSDK_OFFSET(0x9B31CA0)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_RECEIVERTYPE_OFFSET UNITYSDK_OFFSET(0x9B31CB0)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B31CC0)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B31D90)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B31DA0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExtenderProvidedPropertyAttribute_TypeDefinitionIndex = 29392;

	class ExtenderProvidedPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::PropertyDescriptor* _ExtenderProperty_k__BackingField; // 0x10
		::System::ComponentModel::IExtenderProvider* _Provider_k__BackingField; // 0x18
		::System::Type* _ReceiverType_k__BackingField; // 0x20

		::System::ComponentModel::ExtenderProvidedPropertyAttribute* Create(::System::ComponentModel::PropertyDescriptor* arg, ::System::Type* arg, ::System::ComponentModel::IExtenderProvider* arg)
		{
			return (return (::System::ComponentModel::ExtenderProvidedPropertyAttribute*(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Type*, ::System::ComponentModel::IExtenderProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_ExtenderProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_EXTENDERPROPERTY_OFFSET))(nullptr);
		}

		::System::Void set_ExtenderProperty(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_EXTENDERPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IExtenderProvider* get_Provider()
		{
			return (return (::System::ComponentModel::IExtenderProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_Provider(::System::ComponentModel::IExtenderProvider* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IExtenderProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_PROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ReceiverType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_RECEIVERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiverType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_SET_RECEIVERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

	};
}

