#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2B4E0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2B4F0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B2B520)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9B2B5F0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B2B690)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x9B2B730)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9B2B800)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B2B8A0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9B2B940)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B2B9F0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B2BAC0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B2BBA0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B2BC70)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x9B2BD50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CustomTypeDescriptor_TypeDefinitionIndex = 29368;

	class CustomTypeDescriptor : public Il2CppObject
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _parent; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::ICustomTypeDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ICustomTypeDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::String* GetComponentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* GetConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(nullptr);
		}

		::System::Object* GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Object* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET))(arg, nullptr);
		}

	};
}

