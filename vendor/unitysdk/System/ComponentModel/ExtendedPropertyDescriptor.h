#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B313C0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B316F0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B31820)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B31850)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B31880)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9B31970)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9B319A0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9B31B70)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B31BA0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9B31BE0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B31C20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExtendedPropertyDescriptor_TypeDefinitionIndex = 29391;

	class ExtendedPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::ComponentModel::ReflectPropertyDescriptor* _extenderInfo; // 0x88
		::System::ComponentModel::IExtenderProvider* _provider; // 0x90

		::System::Void .ctor(::System::ComponentModel::ReflectPropertyDescriptor* arg, ::System::Type* arg, ::System::ComponentModel::IExtenderProvider* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ReflectPropertyDescriptor*, ::System::Type*, ::System::ComponentModel::IExtenderProvider*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::PropertyDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

