#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9329570)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9329620)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x9329680)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x9329730)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x93297E0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET UNITYSDK_OFFSET(0x9329AD0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x9329CA0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x9329D50)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamReader_TypeDefinitionIndex = 25304;

	class UnexceptionalStreamReader : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* newline; // 0x0
		::System::Char newlineChar; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckEOL(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET))(arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET))(nullptr);
		}

	};
}

