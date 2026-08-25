#pragma once
#include "unitysdk.h"

#define OPTIONPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7EC90)
#define OPTIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B7EDD0)
#define OPTIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B7EE00)
#define OPTIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9B7EE10)
#define OPTIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7EE40)
#define OPTIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7EE50)
#define OPTIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7EE60)
#define OPTIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9B7EE70)
#define OPTIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B7EE80)

	inline static constexpr unsigned int OptionPropertyDescriptor_TypeDefinitionIndex = 29550;

	class OptionPropertyDescriptor : public Il2CppObject
	{
	public:
		DesignerOptionCollection* _option; // 0x88

		::System::Void .ctor(DesignerOptionCollection* arg)
		{
			((::System::Void(*)(DesignerOptionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};

