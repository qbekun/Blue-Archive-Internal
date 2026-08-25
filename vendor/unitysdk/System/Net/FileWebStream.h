#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FILEWEBSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A61670)
#define SYSTEM_NET_FILEWEBSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A62650)
#define SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A62710)
#define SYSTEM_NET_FILEWEBSTREAM_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET UNITYSDK_OFFSET(0x9A627F0)
#define SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9A62840)
#define SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9A629D0)
#define SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9A62AD0)
#define SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9A62C00)
#define SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9A62CC0)
#define SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9A62DF0)
#define SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x9A62940)

namespace System::Net
{
	inline static constexpr unsigned int FileWebStream_TypeDefinitionIndex = 29743;

	class FileWebStream : public Il2CppObject
	{
	public:
		::System::Net::FileWebRequest* m_request; // 0x70

		::System::Void .ctor(::System::Net::FileWebRequest* arg, ::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg)
		{
			((::System::Void(*)(::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Net::FileWebRequest* arg, ::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Net.ICloseEx.CloseEx(::System::Net::CloseExState* arg)
		{
			((::System::Void(*)(::System::Net::CloseExState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET))(nullptr);
		}

	};
}

