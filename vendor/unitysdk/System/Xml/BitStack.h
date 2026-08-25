#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BITSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x984DF90)
#define SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET UNITYSDK_OFFSET(0x984DFB0)
#define SYSTEM_XML_BITSTACK_POPBIT_OFFSET UNITYSDK_OFFSET(0x984E120)
#define SYSTEM_XML_BITSTACK_PEEKBIT_OFFSET UNITYSDK_OFFSET(0x984E1C0)
#define SYSTEM_XML_BITSTACK_PUSHCURR_OFFSET UNITYSDK_OFFSET(0x984E010)
#define SYSTEM_XML_BITSTACK_POPCURR_OFFSET UNITYSDK_OFFSET(0x984E180)

namespace System::Xml
{
	inline static constexpr unsigned int BitStack_TypeDefinitionIndex = 27624;

	class BitStack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* bitStack; // 0x10
		::System::Int32 stackPos; // 0x18
		::System::UInt32 curr; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PushBit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopBit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_POPBIT_OFFSET))(nullptr);
		}

		::System::Boolean PeekBit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PEEKBIT_OFFSET))(nullptr);
		}

		::System::Void PushCurr()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PUSHCURR_OFFSET))(nullptr);
		}

		::System::Void PopCurr()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_POPCURR_OFFSET))(nullptr);
		}

	};
}

