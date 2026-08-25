#pragma once
#include "../unitysdk.h"

#define NPA_NXPWEBURLREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0x9BCBD30)
#define NPA_NXPWEBURLREQUEST_SET_URL_OFFSET UNITYSDK_OFFSET(0x9BCBD40)
#define NPA_NXPWEBURLREQUEST_GET_REQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x9BCBD50)
#define NPA_NXPWEBURLREQUEST_SET_REQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x9BCBD60)
#define NPA_NXPWEBURLREQUEST_GET_SCHEMEACTIONS_OFFSET UNITYSDK_OFFSET(0x9BCBD70)
#define NPA_NXPWEBURLREQUEST_SET_SCHEMEACTIONS_OFFSET UNITYSDK_OFFSET(0x9BCBD80)
#define NPA_NXPWEBURLREQUEST_GET_WEBLINKURLS_OFFSET UNITYSDK_OFFSET(0x9BCBD90)
#define NPA_NXPWEBURLREQUEST_SET_WEBLINKURLS_OFFSET UNITYSDK_OFFSET(0x9BCBDA0)
#define NPA_NXPWEBURLREQUEST_GET_INAPPWEBLINKURLS_OFFSET UNITYSDK_OFFSET(0x9BCBDB0)
#define NPA_NXPWEBURLREQUEST_SET_INAPPWEBLINKURLS_OFFSET UNITYSDK_OFFSET(0x9BCBDC0)
#define NPA_NXPWEBURLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCBDD0)
#define NPA_NXPWEBURLREQUEST_SETSCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9BCBE00)
#define NPA_NXPWEBURLREQUEST_ADDWEBLINKURL_OFFSET UNITYSDK_OFFSET(0x9BCBF00)
#define NPA_NXPWEBURLREQUEST_ADDINAPPWEBLINKURL_OFFSET UNITYSDK_OFFSET(0x9BCC020)
#define NPA_NXPWEBURLREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCC140)

namespace NPA
{
	inline static constexpr unsigned int NXPWebURLRequest_TypeDefinitionIndex = 25651;

	class NXPWebURLRequest : public Il2CppObject
	{
	public:
		::System::String* url; // 0x10
		Il2CppObject* requestHeader; // 0x18
		Il2CppObject* schemeActions; // 0x20
		Il2CppObject* webLinkURLs; // 0x28
		Il2CppObject* inAppWebLinkURLs; // 0x30

		::System::String* get_URL()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_URL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SET_URL_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_RequestHeader()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_GET_REQUESTHEADER_OFFSET))(nullptr);
		}

		::System::Void set_RequestHeader(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SET_REQUESTHEADER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SchemeActions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_GET_SCHEMEACTIONS_OFFSET))(nullptr);
		}

		::System::Void set_SchemeActions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SET_SCHEMEACTIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WebLinkURLs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_GET_WEBLINKURLS_OFFSET))(nullptr);
		}

		::System::Void set_WebLinkURLs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SET_WEBLINKURLS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InAppWebLinkUrLs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_GET_INAPPWEBLINKURLS_OFFSET))(nullptr);
		}

		::System::Void set_InAppWebLinkUrLs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SET_INAPPWEBLINKURLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void SetSchemeAction(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_SETSCHEMEACTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddWebLinkURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_ADDWEBLINKURL_OFFSET))(str, nullptr);
		}

		::System::Void AddInAppWebLinkURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_ADDINAPPWEBLINKURL_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBURLREQUEST_TOSTRING_OFFSET))(nullptr);
		}

	};
}

