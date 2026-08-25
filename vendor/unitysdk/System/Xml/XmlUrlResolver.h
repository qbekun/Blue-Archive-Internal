#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLURLRESOLVER_GET_DOWNLOADMANAGER_OFFSET UNITYSDK_OFFSET(0x99CAE70)
#define SYSTEM_XML_XMLURLRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CAF50)
#define SYSTEM_XML_XMLURLRESOLVER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x99CAF60)
#define SYSTEM_XML_XMLURLRESOLVER_RESOLVEURI_OFFSET UNITYSDK_OFFSET(0x99CB0E0)
#define SYSTEM_XML_XMLURLRESOLVER_GETENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x99CB0F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUrlResolver_TypeDefinitionIndex = 27840;

	class XmlUrlResolver : public Il2CppObject
	{
	public:
		::System::Object* s_DownloadManager; // 0x0
		::System::Net::ICredentials* _credentials; // 0x10
		::System::Net::IWebProxy* _proxy; // 0x18
		::System::Net::Cache::RequestCachePolicy* _cachePolicy; // 0x20

		::System::Xml::XmlDownloadManager* get_DownloadManager()
		{
			return (return (::System::Xml::XmlDownloadManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GET_DOWNLOADMANAGER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* GetEntity(::System::Uri* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Uri*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GETENTITY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Uri* ResolveUri(::System::Uri* arg, ::System::String* str)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_RESOLVEURI_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetEntityAsync(::System::Uri* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Uri*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GETENTITYASYNC_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

