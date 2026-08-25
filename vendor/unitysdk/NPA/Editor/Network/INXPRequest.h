#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class UploadHandlerType; }
namespace NPA::Editor::Network { class DownloadHandlerType; }
namespace NPA::Editor::Network { class Method; }
namespace NPA::Editor::Network { class DataFormat; }

#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_REQUESTFORMAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_BODY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_RESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_SET_BASEURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int INXPRequest_TypeDefinitionIndex = 26631;

	class INXPRequest : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::UploadHandlerType* get_UploadHandler()
		{
			return (return (::NPA::Editor::Network::UploadHandlerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_UPLOADHANDLER_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::DownloadHandlerType* get_DownloadHandler()
		{
			return (return (::NPA::Editor::Network::DownloadHandlerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_DOWNLOADHANDLER_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::Method* get_Method()
		{
			return (return (::NPA::Editor::Network::Method*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::DataFormat* get_RequestFormat()
		{
			return (return (::NPA::Editor::Network::DataFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_REQUESTFORMAT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Body()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_BODY_OFFSET))(nullptr);
		}

		::System::String* get_Resource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_RESOURCE_OFFSET))(nullptr);
		}

		::System::String* get_BaseURL()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_BASEURL_OFFSET))(nullptr);
		}

		::System::Void set_BaseURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_SET_BASEURL_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

	};
}

