#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_CSTREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x932A190)
#define SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x932A2C0)
#define SYSTEM_IO_CSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x932A370)
#define SYSTEM_IO_CSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x932A470)
#define SYSTEM_IO_CSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x932A670)
#define SYSTEM_IO_CSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x932A730)

namespace System::IO
{
	inline static constexpr unsigned int CStreamReader_TypeDefinitionIndex = 25306;

	class CStreamReader : public Il2CppObject
	{
	public:
		::System::TermInfoDriver* driver; // 0x60

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READTOEND_OFFSET))(nullptr);
		}

	};
}

