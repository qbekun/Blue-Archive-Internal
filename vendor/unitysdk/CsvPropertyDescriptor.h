#pragma once
#include "unitysdk.h"

#define CSVPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1037C50)
#define CSVPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1037C60)
#define CSVPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1037CC0)
#define CSVPROPERTYDESCRIPTOR_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1037D50)
#define CSVPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1037D60)
#define CSVPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1037D70)
#define CSVPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1037D80)
#define CSVPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1037D90)
#define CSVPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1037DF0)
#define CSVPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1037350)

	inline static constexpr unsigned int CsvPropertyDescriptor_TypeDefinitionIndex = 12835;

	class CsvPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x88

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return ((::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVPROPERTYDESCRIPTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

