#pragma once
#include "unitysdk.h"

#define WRAPPEDPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7E2B0)
#define WRAPPEDPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B7E3E0)
#define WRAPPEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B7E410)
#define WRAPPEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B7E440)
#define WRAPPEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9B7E470)
#define WRAPPEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7E4A0)
#define WRAPPEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7E4E0)
#define WRAPPEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7E520)
#define WRAPPEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7E560)
#define WRAPPEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B7E5A0)

	inline static constexpr unsigned int WrappedPropertyDescriptor_TypeDefinitionIndex = 29548;

	class WrappedPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Object* target; // 0x88
		::System::ComponentModel::PropertyDescriptor* property; // 0x90

		::System::Void .ctor(::System::ComponentModel::PropertyDescriptor* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRAPPEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};

