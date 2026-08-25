#pragma once
#include "unitysdk.h"

#define NUMBERBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E312A0)
#define NUMBERBUFFER_GETDIGITSPOINTER_OFFSET UNITYSDK_OFFSET(0x9E35270)

	inline static constexpr unsigned int NumberBuffer_TypeDefinitionIndex = 37246;

	class NumberBuffer : public Il2CppObject
	{
	public:
		::System::Object** _buffer; // 0x10
		NumberBufferKind* Kind; // 0x18
		::System::Int32 DigitsCount; // 0x1C
		::System::Int32 Scale; // 0x20
		::System::Boolean IsNegative; // 0x24

		::System::Void .ctor(NumberBufferKind* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(NumberBufferKind*, ::System::Object**, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NUMBERBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object** GetDigitsPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NUMBERBUFFER_GETDIGITSPOINTER_OFFSET))(nullptr);
		}

	};

