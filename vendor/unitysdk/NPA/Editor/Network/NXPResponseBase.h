#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class ResponseStatus; }
namespace NPA::Editor::Network { class NXPResponseContent; }

#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9C1AAC0)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9C1AAD0)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9C1AAE0)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9C1AAF0)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x9C1AB00)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x9C1AB10)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9C1AB20)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9C1AB30)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C1AB40)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C1AB50)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RAWBYTES_OFFSET UNITYSDK_OFFSET(0x9C1AB60)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RAWBYTES_OFFSET UNITYSDK_OFFSET(0x9C1AB70)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RESPONSECONTENT_OFFSET UNITYSDK_OFFSET(0x9C1AB80)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RESPONSECONTENT_OFFSET UNITYSDK_OFFSET(0x9C1AB90)
#define NPA_EDITOR_NETWORK_NXPRESPONSEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1ABA0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPResponseBase_TypeDefinitionIndex = 26640;

	class NXPResponseBase : public Il2CppObject
	{
	public:
		::System::Net::HttpStatusCode* _StatusCode_k__BackingField; // 0x10
		::System::String* _Content_k__BackingField; // 0x18
		::NPA::Editor::Network::ResponseStatus* _ResponseStatus_k__BackingField; // 0x20
		::System::String* _ContentType_k__BackingField; // 0x28
		::System::String* _ErrorMessage_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _RawBytes_k__BackingField; // 0x38
		::NPA::Editor::Network::NXPResponseContent* _ResponseContent_k__BackingField; // 0x40

		::System::Net::HttpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::HttpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode* arg)
		{
			((::System::Void(*)(::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Content()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_CONTENT_OFFSET))(str, nullptr);
		}

		::NPA::Editor::Network::ResponseStatus* get_ResponseStatus()
		{
			return (return (::NPA::Editor::Network::ResponseStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RESPONSESTATUS_OFFSET))(nullptr);
		}

		::System::Void set_ResponseStatus(::NPA::Editor::Network::ResponseStatus* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::ResponseStatus*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RESPONSESTATUS_OFFSET))(arg, nullptr);
		}

		::System::String* get_ContentType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_CONTENTTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_ErrorMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_ERRORMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_ErrorMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_ERRORMESSAGE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RawBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RAWBYTES_OFFSET))(nullptr);
		}

		::System::Void set_RawBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RAWBYTES_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::NXPResponseContent* get_ResponseContent()
		{
			return (return (::NPA::Editor::Network::NXPResponseContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_GET_RESPONSECONTENT_OFFSET))(nullptr);
		}

		::System::Void set_ResponseContent(::NPA::Editor::Network::NXPResponseContent* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPResponseContent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_SET_RESPONSECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

