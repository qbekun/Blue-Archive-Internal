#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace Assets::_MX::Program::Scripts::Network { class HttpMethodType; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_DOWNLOADTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE57880)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_URL_OFFSET UNITYSDK_OFFSET(0xE57890)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0xE578A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0xE578B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_BINARYDATA_OFFSET UNITYSDK_OFFSET(0xE578C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_RETRYCOUNT_OFFSET UNITYSDK_OFFSET(0xE578D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_SET_RETRYCOUNT_OFFSET UNITYSDK_OFFSET(0xE578E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_INCREASERETRYCOUNT_OFFSET UNITYSDK_OFFSET(0xE578F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_ENCODEREQUEST_OFFSET UNITYSDK_OFFSET(0xE57900)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_BUNDLEVERSION_OFFSET UNITYSDK_OFFSET(0xE57910)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PUBLISHERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE57920)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_RSAKEYSIZE_OFFSET UNITYSDK_OFFSET(0xE57930)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE57940)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE57A10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE57AE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE57B90)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int HttpMessage_TypeDefinitionIndex = 10459;

	class HttpMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* _Protocol_k__BackingField; // 0x10
		::System::String* _URL_k__BackingField; // 0x18
		::Assets::_MX::Program::Scripts::Network::HttpMethodType* _MethodType_k__BackingField; // 0x20
		::System::String* _Parameter_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _BinaryData_k__BackingField; // 0x30
		::System::Int32 _RetryCount_k__BackingField; // 0x38
		::System::Boolean _EncodeRequest_k__BackingField; // 0x3C
		::System::String* _BundleVersion_k__BackingField; // 0x40
		Il2CppObject* _PublisherAccountId_k__BackingField; // 0x48
		Il2CppObject* _RSAKeySize_k__BackingField; // 0x58

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusCode()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_DownloadText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_DOWNLOADTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DownloadData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_DOWNLOADDATA_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_URL_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpMethodType* get_MethodType()
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpMethodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_METHODTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BinaryData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_BINARYDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_RetryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_RETRYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RetryCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_SET_RETRYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void IncreaseRetryCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_INCREASERETRYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_EncodeRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_ENCODEREQUEST_OFFSET))(nullptr);
		}

		::System::String* get_BundleVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_BUNDLEVERSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_PublisherAccountId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_PUBLISHERACCOUNTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_RSAKeySize()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GET_RSAKEYSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg)
		{
			((::System::Void(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::NetworkProtocol::Protocol* arg, ::System::String* str2, ::System::Boolean arg2, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg3, ::System::String* str3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::String*, ::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET))(str, arg, str2, arg2, arg3, str3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg3, ::System::String* str2, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_.CTOR_OFFSET))(str, arg, arg2, arg3, str2, arg4, arg5, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_INIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Send()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_STOP_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPMESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

