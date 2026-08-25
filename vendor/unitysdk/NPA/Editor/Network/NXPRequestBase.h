#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class UploadHandlerType; }
namespace NPA::Editor::Network { class DownloadHandlerType; }
namespace NPA::Editor::Network { class Method; }
namespace NPA::Editor::Network { class DataFormat; }

#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x9C1A620)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x9C1A630)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x9C1A640)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x9C1A650)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9C1A660)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9C1A670)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_REQUESTFORMAT_OFFSET UNITYSDK_OFFSET(0x9C1A680)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_REQUESTFORMAT_OFFSET UNITYSDK_OFFSET(0x9C1A690)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_RESOURCE_OFFSET UNITYSDK_OFFSET(0x9C1A6A0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_RESOURCE_OFFSET UNITYSDK_OFFSET(0x9C1A6B0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x9C1A6C0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_BASEURL_OFFSET UNITYSDK_OFFSET(0x9C1A6D0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9C1A6E0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9C1A6F0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9C1A700)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9C1A710)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_BODY_OFFSET UNITYSDK_OFFSET(0x9C1A720)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x9C1A730)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODY_OFFSET UNITYSDK_OFFSET(0x9C1A7B0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODY_OFFSET UNITYSDK_OFFSET(0x9C1A7D0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODYINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C1A7C0)
#define NPA_EDITOR_NETWORK_NXPREQUESTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A820)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPRequestBase_TypeDefinitionIndex = 26636;

	class NXPRequestBase : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::UploadHandlerType* _UploadHandler_k__BackingField; // 0x10
		::NPA::Editor::Network::DownloadHandlerType* _DownloadHandler_k__BackingField; // 0x14
		::NPA::Editor::Network::Method* _Method_k__BackingField; // 0x18
		::NPA::Editor::Network::DataFormat* _RequestFormat_k__BackingField; // 0x1C
		::System::String* _Resource_k__BackingField; // 0x20
		::System::String* _BaseURL_k__BackingField; // 0x28
		Il2CppObject* _Headers_k__BackingField; // 0x30
		::System::Int32 _Timeout_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _Body_k__BackingField; // 0x40

		::NPA::Editor::Network::UploadHandlerType* get_UploadHandler()
		{
			return (return (::NPA::Editor::Network::UploadHandlerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_UPLOADHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_UploadHandler(::NPA::Editor::Network::UploadHandlerType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::UploadHandlerType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_UPLOADHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::DownloadHandlerType* get_DownloadHandler()
		{
			return (return (::NPA::Editor::Network::DownloadHandlerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_DOWNLOADHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_DownloadHandler(::NPA::Editor::Network::DownloadHandlerType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::DownloadHandlerType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_DOWNLOADHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::Method* get_Method()
		{
			return (return (::NPA::Editor::Network::Method*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::NPA::Editor::Network::Method* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::Method*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_METHOD_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::DataFormat* get_RequestFormat()
		{
			return (return (::NPA::Editor::Network::DataFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_REQUESTFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_RequestFormat(::NPA::Editor::Network::DataFormat* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::DataFormat*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_REQUESTFORMAT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Resource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_RESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_Resource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_RESOURCE_OFFSET))(str, nullptr);
		}

		::System::String* get_BaseURL()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_BASEURL_OFFSET))(nullptr);
		}

		::System::Void set_BaseURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_BASEURL_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Body()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void set_Body(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SET_BODY_OFFSET))(arg, nullptr);
		}

		::System::Void AddHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_ADDHEADER_OFFSET))(str, str, nullptr);
		}

		::System::Void SetBody(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODY_OFFSET))(arg, nullptr);
		}

		::System::Void SetBody(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODY_OFFSET))(str, nullptr);
		}

		::System::Void SetBodyInternal(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_SETBODYINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

