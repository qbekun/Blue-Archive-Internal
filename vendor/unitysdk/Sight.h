#pragma once
#include "unitysdk.h"

#define SIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D20)

	inline static constexpr unsigned int Sight_TypeDefinitionIndex = 9878;

	class Sight : public Il2CppObject
	{
	public:
		::System::Boolean ScriptEnable; // 0x18
		::System::Boolean GameObjectActivate; // 0x19

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SIGHT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

