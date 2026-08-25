#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class ResponseStatus; }
namespace NPA::Editor::Network { class NXPResponseContent; }

#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RAWBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RESPONSECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int INXPResponse_TypeDefinitionIndex = 26632;

	class INXPResponse : public Il2CppObject
	{
	public:
		::System::Net::HttpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::HttpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_Content()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_CONTENT_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::ResponseStatus* get_ResponseStatus()
		{
			return (return (::NPA::Editor::Network::ResponseStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RESPONSESTATUS_OFFSET))(nullptr);
		}

		::System::String* get_ContentType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ErrorMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_ERRORMESSAGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RawBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RAWBYTES_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPResponseContent* get_ResponseContent()
		{
			return (return (::NPA::Editor::Network::NXPResponseContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_INXPRESPONSE_GET_RESPONSECONTENT_OFFSET))(nullptr);
		}

	};
}

