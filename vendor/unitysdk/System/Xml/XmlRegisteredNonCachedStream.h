#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C4040)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x99C5110)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99C51E0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x99C5350)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x99C53A0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x99C53F0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x99C5420)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x99C5450)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x99C5480)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x99C54B0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x99C54E0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x99C5510)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x99C5540)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x99C5570)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x99C55A0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x99C55D0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x99C5600)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x99C5630)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x99C5660)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x99C5690)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRegisteredNonCachedStream_TypeDefinitionIndex = 27815;

	class XmlRegisteredNonCachedStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::System::Xml::XmlDownloadManager* downloadManager; // 0x30
		::System::String* host; // 0x38

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlDownloadManager* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlDownloadManager*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

	};
}

