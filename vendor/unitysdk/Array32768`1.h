#pragma once
#include "unitysdk.h"

#define ARRAY32768`1_ELEMENTAT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Array32768`1_TypeDefinitionIndex = 37011;

	class Array32768`1 : public Il2CppObject
	{
	public:
		Il2CppObject* f0; // 0x0
		Il2CppObject* f1; // 0x0
		Il2CppObject* f2; // 0x0
		Il2CppObject* f3; // 0x0
		Il2CppObject* f4; // 0x0
		Il2CppObject* f5; // 0x0
		Il2CppObject* f6; // 0x0
		Il2CppObject* f7; // 0x0

		Il2CppObject&* ElementAt(::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAY32768`1_ELEMENTAT_OFFSET))(arg, nullptr);
		}

	};

