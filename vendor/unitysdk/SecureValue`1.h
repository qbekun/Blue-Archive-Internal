#pragma once
#include "unitysdk.h"

#define SECUREVALUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SECUREVALUE`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SECUREVALUE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SecureValue`1_TypeDefinitionIndex = 3561;

	class SecureValue`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREVALUE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREVALUE`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Value()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREVALUE`1_GET_VALUE_OFFSET))(nullptr);
		}

	};

