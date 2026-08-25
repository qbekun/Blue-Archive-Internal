#pragma once
#include "../unitysdk.h"

#define SYSTEM_DTSUBSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9350BB0)

namespace System
{
	inline static constexpr unsigned int DTSubString_TypeDefinitionIndex = 23752;

	class DTSubString : public Il2CppObject
	{
	public:
		Il2CppObject* s; // 0x10
		::System::Int32 index; // 0x20
		::System::Int32 length; // 0x24
		::System::DTSubStringType* type; // 0x28
		::System::Int32 value; // 0x2C

		::System::Char get_Item(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DTSUBSTRING_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

