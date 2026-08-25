#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPMETHODINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B9D4A0)
#define SYSTEM_NET_FTPMETHODINFO_HASFLAG_OFFSET UNITYSDK_OFFSET(0x9B9A960)
#define SYSTEM_NET_FTPMETHODINFO_GET_ISCOMMANDONLY_OFFSET UNITYSDK_OFFSET(0x9B9AB50)
#define SYSTEM_NET_FTPMETHODINFO_GET_ISUPLOAD_OFFSET UNITYSDK_OFFSET(0x9B9BC10)
#define SYSTEM_NET_FTPMETHODINFO_GET_ISDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9B9BC20)
#define SYSTEM_NET_FTPMETHODINFO_GET_SHOULDPARSEFORRESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9B98BC0)
#define SYSTEM_NET_FTPMETHODINFO_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x9B9D500)
#define SYSTEM_NET_FTPMETHODINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B9D680)

namespace System::Net
{
	inline static constexpr unsigned int FtpMethodInfo_TypeDefinitionIndex = 29662;

	class FtpMethodInfo : public Il2CppObject
	{
	public:
		::System::String* Method; // 0x10
		::System::Net::FtpOperation* Operation; // 0x18
		::System::Net::FtpMethodFlags* Flags; // 0x1C
		::System::String* HttpCommand; // 0x20
		::Il2CppArray<::System::Object*>* s_knownMethodInfo; // 0x0

		::System::Void .ctor(::System::String* str, ::System::Net::FtpOperation* arg, ::System::Net::FtpMethodFlags* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Net::FtpOperation*, ::System::Net::FtpMethodFlags*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_.CTOR_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean HasFlag(::System::Net::FtpMethodFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::FtpMethodFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_HASFLAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCommandOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_GET_ISCOMMANDONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUpload()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_GET_ISUPLOAD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDownload()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_GET_ISDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldParseForResponseUri()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_GET_SHOULDPARSEFORRESPONSEURI_OFFSET))(nullptr);
		}

		::System::Net::FtpMethodInfo* GetMethodInfo(::System::String* str)
		{
			return (return (::System::Net::FtpMethodInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_GETMETHODINFO_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPMETHODINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

