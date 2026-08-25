#pragma once
#include "../unitysdk.h"

#define SYSTEM_NULLABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_BOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_UNBOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NULLABLE`1_UNBOXEXACT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Nullable`1_TypeDefinitionIndex = 23807;

	class Nullable`1 : public Il2CppObject
	{
	public:
		::System::Boolean hasValue; // 0x0
		Il2CppObject* value; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_GET_HASVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_GET_VALUE_OFFSET))(nullptr);
		}

		Il2CppObject* GetValueOrDefault()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_GETVALUEORDEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Object* Box(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_BOX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Unbox(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_UNBOX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* UnboxExact(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE`1_UNBOXEXACT_OFFSET))(arg, nullptr);
		}

	};
}

