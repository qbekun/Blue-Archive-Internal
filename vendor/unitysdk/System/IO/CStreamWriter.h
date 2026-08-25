#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_CSTREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x932A7F0)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932A930)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932ACE0)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET UNITYSDK_OFFSET(0x932AFB0)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET UNITYSDK_OFFSET(0x932AF10)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET UNITYSDK_OFFSET(0x932B050)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932B100)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932B140)
#define SYSTEM_IO_CSTREAMWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x932B230)

namespace System::IO
{
	inline static constexpr unsigned int CStreamWriter_TypeDefinitionIndex = 25307;

	class CStreamWriter : public Il2CppObject
	{
	public:
		::System::TermInfoDriver* driver; // 0x70

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalWriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void InternalWriteChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET))(arg, nullptr);
		}

		::System::Void InternalWriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITELINE_OFFSET))(str, nullptr);
		}

	};
}

