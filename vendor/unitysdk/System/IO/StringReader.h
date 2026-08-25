#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_STRINGREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931CAD0)
#define SYSTEM_IO_STRINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x931CB90)
#define SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x931CBB0)
#define SYSTEM_IO_STRINGREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x931CBF0)
#define SYSTEM_IO_STRINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x931CC50)
#define SYSTEM_IO_STRINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x931CCB0)
#define SYSTEM_IO_STRINGREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x931CEB0)
#define SYSTEM_IO_STRINGREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x931CF10)
#define SYSTEM_IO_STRINGREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x931D020)

namespace System::IO
{
	inline static constexpr unsigned int StringReader_TypeDefinitionIndex = 25292;

	class StringReader : public Il2CppObject
	{
	public:
		::System::String* _s; // 0x18
		::System::Int32 _pos; // 0x20
		::System::Int32 _length; // 0x24

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READTOEND_OFFSET))(nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READLINE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

