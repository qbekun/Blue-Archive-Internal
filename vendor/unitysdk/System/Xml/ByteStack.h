#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BYTESTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x984E410)
#define SYSTEM_XML_BYTESTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x984E480)
#define SYSTEM_XML_BYTESTACK_POP_OFFSET UNITYSDK_OFFSET(0x984E530)

namespace System::Xml
{
	inline static constexpr unsigned int ByteStack_TypeDefinitionIndex = 27626;

	class ByteStack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* stack; // 0x10
		::System::Int32 growthRate; // 0x18
		::System::Int32 top; // 0x1C
		::System::Int32 size; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Byte Pop()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK_POP_OFFSET))(nullptr);
		}

	};
}

