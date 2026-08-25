#pragma once
#include "unitysdk.h"

#define KEYPAIR`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYPAIR`2_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYPAIR`2_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYPAIR`2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int KeyPair`2_TypeDefinitionIndex = 34610;

	class KeyPair`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _pKey1; // 0x0
		Il2CppObject* _pKey2; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYPAIR`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYPAIR`2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + KEYPAIR`2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYPAIR`2_GETHASHCODE_OFFSET))(nullptr);
		}

	};

