#pragma once
#include "unitysdk.h"

#define MERGEDTYPEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B6FDC0)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B75D90)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9B75EB0)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B75FD0)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x9B760F0)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9B76210)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B76330)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9B76450)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B76600)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B76720)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B76840)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B76960)
#define MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x9B76A80)

	inline static constexpr unsigned int MergedTypeDescriptor_TypeDefinitionIndex = 29521;

	class MergedTypeDescriptor : public Il2CppObject
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _primary; // 0x10
		::System::ComponentModel::ICustomTypeDescriptor* _secondary; // 0x18

		::System::Void .ctor(::System::ComponentModel::ICustomTypeDescriptor* arg, ::System::ComponentModel::ICustomTypeDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* System.ComponentModel.ICustomTypeDescriptor.GetConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET))(arg, nullptr);
		}

	};

