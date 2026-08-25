#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IComNativeDescriptorHandler_TypeDefinitionIndex = 29399;

	class IComNativeDescriptorHandler : public Il2CppObject
	{
	public:
		::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* arg)
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::String* GetClassName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETCLASSNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Object* arg)
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETCONVERTER_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* arg)
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETDEFAULTEVENT_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETDEFAULTPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEditor(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEDITOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetPropertyValue(::System::Object* arg, ::System::String* str, bool&* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTYVALUE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Object* GetPropertyValue(::System::Object* arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMNATIVEDESCRIPTORHANDLER_GETPROPERTYVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

