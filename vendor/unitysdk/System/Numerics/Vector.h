#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_VECTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET UNITYSDK_OFFSET(0x9254C90)
#define SYSTEM_NUMERICS_VECTOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR_XOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NUMERICS_VECTOR_ASVECTORUINT64_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_TypeDefinitionIndex = 24947;

	class Vector : public Il2CppObject
	{
	public:
		Il2CppObject* Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsHardwareAccelerated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET))(nullptr);
		}

		Il2CppObject* Multiply(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Xor(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_XOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AsVectorUInt64(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_ASVECTORUINT64_OFFSET))(arg, nullptr);
		}

	};
}

