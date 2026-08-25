#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_VECTOR`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_INITIALIZECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_SCALAREQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_SCALARMULTIPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_GETONEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_GETALLBITSSETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector`1_TypeDefinitionIndex = 24946;

	class Vector`1 : public Il2CppObject
	{
	public:
		::System::Numerics::Register* register; // 0x0
		::System::Int32 s_count; // 0x0
		Il2CppObject* s_zero; // 0x0
		Il2CppObject* s_one; // 0x0
		Il2CppObject* s_allOnes; // 0x0

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Zero()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Int32 InitializeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_INITIALIZECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Numerics::Register&* arg)
		{
			((::System::Void(*)(::System::Numerics::Register&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* op_Multiply(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* op_ExclusiveOr(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_OP_EXCLUSIVEOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* op_Explicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ScalarEquals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_SCALAREQUALS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ScalarMultiply(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_SCALARMULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetOneValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GETONEVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllBitsSetValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_GETALLBITSSETVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

