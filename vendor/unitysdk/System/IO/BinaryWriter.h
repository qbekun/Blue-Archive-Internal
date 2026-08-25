#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931B9D0)
#define SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931BAE0)
#define SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931BD10)
#define SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931BB50)
#define SYSTEM_IO_BINARYWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x931BD30)
#define SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x931BD50)
#define SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x931BDA0)
#define SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x931BDC0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BDF0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BE60)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BE90)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BEC0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BF50)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931BF80)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C0C0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C180)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C1D0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C240)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C2B0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C360)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C410)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C540)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C670)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931C6C0)
#define SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET UNITYSDK_OFFSET(0x931CA00)
#define SYSTEM_IO_BINARYWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x931CA60)

namespace System::IO
{
	inline static constexpr unsigned int BinaryWriter_TypeDefinitionIndex = 25291;

	class BinaryWriter : public Il2CppObject
	{
	public:
		::System::IO::BinaryWriter* Null; // 0x0
		::System::IO::Stream* OutStream; // 0x10
		::Il2CppArray<::System::Object*>* _buffer; // 0x18
		::System::Text::Encoding* _encoding; // 0x20
		::System::Text::Encoder* _encoder; // 0x28
		::System::Boolean _leaveOpen; // 0x30
		::Il2CppArray<::System::Object*>* _largeByteBuffer; // 0x38
		::System::Int32 _maxChars; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void Write7BitEncodedInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

