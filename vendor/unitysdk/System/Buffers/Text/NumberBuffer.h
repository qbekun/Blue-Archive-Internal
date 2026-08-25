#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x92DECB0)
#define SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_GET_NUMDIGITS_OFFSET UNITYSDK_OFFSET(0x92DF3B0)
#define SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92EA5F0)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int NumberBuffer_TypeDefinitionIndex = 25218;

	class NumberBuffer : public Il2CppObject
	{
	public:
		::System::Int32 Scale; // 0x10
		::System::Boolean IsNegative; // 0x14
		::System::Byte _b0; // 0x15
		::System::Byte _b1; // 0x16
		::System::Byte _b2; // 0x17
		::System::Byte _b3; // 0x18
		::System::Byte _b4; // 0x19
		::System::Byte _b5; // 0x1A
		::System::Byte _b6; // 0x1B
		::System::Byte _b7; // 0x1C
		::System::Byte _b8; // 0x1D
		::System::Byte _b9; // 0x1E
		::System::Byte _b10; // 0x1F
		::System::Byte _b11; // 0x20
		::System::Byte _b12; // 0x21
		::System::Byte _b13; // 0x22
		::System::Byte _b14; // 0x23
		::System::Byte _b15; // 0x24
		::System::Byte _b16; // 0x25
		::System::Byte _b17; // 0x26
		::System::Byte _b18; // 0x27
		::System::Byte _b19; // 0x28
		::System::Byte _b20; // 0x29
		::System::Byte _b21; // 0x2A
		::System::Byte _b22; // 0x2B
		::System::Byte _b23; // 0x2C
		::System::Byte _b24; // 0x2D
		::System::Byte _b25; // 0x2E
		::System::Byte _b26; // 0x2F
		::System::Byte _b27; // 0x30
		::System::Byte _b28; // 0x31
		::System::Byte _b29; // 0x32
		::System::Byte _b30; // 0x33
		::System::Byte _b31; // 0x34
		::System::Byte _b32; // 0x35
		::System::Byte _b33; // 0x36
		::System::Byte _b34; // 0x37
		::System::Byte _b35; // 0x38
		::System::Byte _b36; // 0x39
		::System::Byte _b37; // 0x3A
		::System::Byte _b38; // 0x3B
		::System::Byte _b39; // 0x3C
		::System::Byte _b40; // 0x3D
		::System::Byte _b41; // 0x3E
		::System::Byte _b42; // 0x3F
		::System::Byte _b43; // 0x40
		::System::Byte _b44; // 0x41
		::System::Byte _b45; // 0x42
		::System::Byte _b46; // 0x43
		::System::Byte _b47; // 0x44
		::System::Byte _b48; // 0x45
		::System::Byte _b49; // 0x46
		::System::Byte _b50; // 0x47

		Il2CppObject* get_Digits()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_GET_DIGITS_OFFSET))(nullptr);
		}

		::System::Int32 get_NumDigits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_GET_NUMDIGITS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBERBUFFER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

