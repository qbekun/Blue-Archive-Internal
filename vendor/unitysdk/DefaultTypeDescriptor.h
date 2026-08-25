#pragma once
#include "unitysdk.h"

#define DEFAULTTYPEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B77340)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B79290)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9B79540)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B79780)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x9B79990)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9B79C40)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B79E50)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9B7A060)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B7A310)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B7A5C0)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B7A880)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B7AB30)
#define DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x9B7ADF0)

	inline static constexpr unsigned int DefaultTypeDescriptor_TypeDefinitionIndex = 29523;

	class DefaultTypeDescriptor : public Il2CppObject
	{
	public:
		TypeDescriptionNode* _node; // 0x10
		::System::Type* _objectType; // 0x18
		::System::Object* _instance; // 0x20

		::System::Void .ctor(TypeDescriptionNode* arg, ::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(TypeDescriptionNode*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* System.ComponentModel.ICustomTypeDescriptor.GetConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTTYPEDESCRIPTOR_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET))(arg, nullptr);
		}

	};

