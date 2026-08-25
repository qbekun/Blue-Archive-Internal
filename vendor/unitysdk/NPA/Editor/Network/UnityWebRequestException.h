#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0x9C1B950)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ISNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x9C1B960)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ISHTTPERROR_OFFSET UNITYSDK_OFFSET(0x9C1B970)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x9C1B980)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9C1B990)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0x9C1B9A0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_RESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x9C1B9B0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1B9C0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9C1BB10)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int UnityWebRequestException_TypeDefinitionIndex = 26644;

	class UnityWebRequestException : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _WebRequest_k__BackingField; // 0x90
		::System::Boolean _IsNetworkError_k__BackingField; // 0x98
		::System::Boolean _IsHttpError_k__BackingField; // 0x99
		::System::String* _Error_k__BackingField; // 0xA0
		::System::String* _Text_k__BackingField; // 0xA8
		::System::Int64 _ResponseCode_k__BackingField; // 0xB0
		Il2CppObject* _ResponseHeaders_k__BackingField; // 0xB8
		::System::String* msg; // 0xC0

		::UnityEngine::Networking::UnityWebRequest* get_WebRequest()
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_WEBREQUEST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNetworkError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ISNETWORKERROR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHttpError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ISHTTPERROR_OFFSET))(nullptr);
		}

		::System::String* get_Error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_ResponseCode()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_RESPONSECODE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ResponseHeaders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_RESPONSEHEADERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

