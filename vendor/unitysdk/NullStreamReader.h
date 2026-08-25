#pragma once
#include "unitysdk.h"

#define NULLSTREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F4D20)
#define NULLSTREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x92F4DB0)
#define NULLSTREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x92F4E00)
#define NULLSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F4E10)
#define NULLSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x92F4E20)
#define NULLSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x92F4E30)
#define NULLSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x92F4E40)
#define NULLSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x92F4E50)
#define NULLSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x92F4E60)
#define NULLSTREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x92F4EA0)

	inline static constexpr unsigned int NullStreamReader_TypeDefinitionIndex = 25238;

	class NullStreamReader : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_GET_BASESTREAM_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_CurrentEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_GET_CURRENTENCODING_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_READTOEND_OFFSET))(nullptr);
		}

		::System::Int32 ReadBuffer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAMREADER_READBUFFER_OFFSET))(nullptr);
		}

	};

