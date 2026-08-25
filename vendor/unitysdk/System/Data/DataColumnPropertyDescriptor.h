#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9735620)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9735670)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x9735830)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9735840)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x97358A0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x97358C0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x97358E0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9735940)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9735970)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9735B40)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9735BC0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9735D70)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9735E50)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISBROWSABLE_OFFSET UNITYSDK_OFFSET(0x9735E60)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnPropertyDescriptor_TypeDefinitionIndex = 32204;

	class DataColumnPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Data::DataColumn* _Column_k__BackingField; // 0x88

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Data::DataColumn* get_Column()
		{
			return (return (::System::Data::DataColumn*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COLUMN_OFFSET))(nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBrowsable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISBROWSABLE_OFFSET))(nullptr);
		}

	};
}

