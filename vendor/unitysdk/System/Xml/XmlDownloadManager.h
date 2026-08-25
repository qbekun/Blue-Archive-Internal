#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x99C39E0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET UNITYSDK_OFFSET(0x99C3AD0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x99C4270)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x99C4400)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x99C4580)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C4700)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager_TypeDefinitionIndex = 27813;

	class XmlDownloadManager : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* connections; // 0x10

		::System::IO::Stream* GetStream(::System::Uri* arg, ::System::Net::ICredentials* arg, ::System::Net::IWebProxy* arg, ::System::Net::Cache::RequestCachePolicy* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IO::Stream* GetNonFileStream(::System::Uri* arg, ::System::Net::ICredentials* arg, ::System::Net::IWebProxy* arg, ::System::Net::Cache::RequestCachePolicy* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetStreamAsync(::System::Uri* arg, ::System::Net::ICredentials* arg, ::System::Net::IWebProxy* arg, ::System::Net::Cache::RequestCachePolicy* arg)
		{
			return (return (Il2CppObject*(*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetNonFileStreamAsync(::System::Uri* arg, ::System::Net::ICredentials* arg, ::System::Net::IWebProxy* arg, ::System::Net::Cache::RequestCachePolicy* arg)
		{
			return (return (Il2CppObject*(*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

