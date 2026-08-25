#pragma once
#include "unitysdk.h"

#define STACKITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int StackItem_TypeDefinitionIndex = 32835;

	class StackItem : public Il2CppObject
	{
	public:
		::System::Int32 p; // 0x0
		::System::Int32 r; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKITEM_.CTOR_OFFSET))(nullptr);
		}

	};

