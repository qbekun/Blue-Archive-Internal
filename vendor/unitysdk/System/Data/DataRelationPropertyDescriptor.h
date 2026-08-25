#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x973EA90)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_RELATION_OFFSET UNITYSDK_OFFSET(0x973EAF0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x973EB00)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x973EB60)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x973EB70)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x973EBD0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x973EC30)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x973EC60)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x973EC70)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x973ED00)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x973ED10)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x973ED20)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationPropertyDescriptor_TypeDefinitionIndex = 32212;

	class DataRelationPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Data::DataRelation* _Relation_k__BackingField; // 0x88

		::System::Void .ctor(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRelation* get_Relation()
		{
			return (return (::System::Data::DataRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_RELATION_OFFSET))(nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

