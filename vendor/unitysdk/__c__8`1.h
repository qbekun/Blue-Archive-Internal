#pragma once
#include "unitysdk.h"

#define <>C__8`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__8`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__8`1__SERIALIZE_B__8_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__8`1__SERIALIZE_B__8_1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__8`1_TypeDefinitionIndex = 12842;

	class <>c__8`1 : public Il2CppObject
	{
	public:
		Il2CppObject* __9; // 0x0
		Il2CppObject* __9__8_0; // 0x0
		Il2CppObject* __9__8_1; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__8`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__8`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Serialize_b__8_0(::System::Reflection::PropertyInfo* arg)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__8`1__SERIALIZE_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::String* _Serialize_b__8_1(::System::Reflection::PropertyInfo* arg)
		{
			return ((::System::String*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__8`1__SERIALIZE_B__8_1_OFFSET))(arg, nullptr);
		}

	};

