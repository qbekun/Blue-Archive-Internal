#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x97470E0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x97470F0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9747140)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x97471A0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x97471B0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9747210)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9747270)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x97472A0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x97472B0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x97473C0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x97473D0)
#define SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x97473E0)

namespace System::Data
{
	inline static constexpr unsigned int DataTablePropertyDescriptor_TypeDefinitionIndex = 32232;

	class DataTablePropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _Table_k__BackingField; // 0x88

		::System::Data::DataTable* get_Table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

