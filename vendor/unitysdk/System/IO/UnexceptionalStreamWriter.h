#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9329E00)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9329E70)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x9329F10)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x9329FB0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932A050)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x932A0F0)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamWriter_TypeDefinitionIndex = 25305;

	class UnexceptionalStreamWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(str, nullptr);
		}

	};
}

