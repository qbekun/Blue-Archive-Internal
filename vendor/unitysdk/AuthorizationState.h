#pragma once
#include "unitysdk.h"

#define AUTHORIZATIONSTATE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9A72730)
#define AUTHORIZATIONSTATE_GET_NTLMAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x9A72740)
#define AUTHORIZATIONSTATE_GET_ISNTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x9A72750)
#define AUTHORIZATIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6D140)
#define AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x9A719D0)
#define AUTHORIZATIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x9A72570)
#define AUTHORIZATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A72770)

	inline static constexpr unsigned int AuthorizationState_TypeDefinitionIndex = 29773;

	class AuthorizationState : public Il2CppObject
	{
	public:
		::System::Net::HttpWebRequest* request; // 0x10
		::System::Boolean isProxy; // 0x18
		::System::Boolean isCompleted; // 0x19
		NtlmAuthState* ntlm_auth_state; // 0x1C

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		NtlmAuthState* get_NtlmAuthState()
		{
			return (return (NtlmAuthState*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_GET_NTLMAUTHSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNtlmAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_GET_ISNTLMAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::HttpWebRequest* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::HttpWebRequest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* arg, ::System::Net::HttpStatusCode* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebResponse*, ::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_CHECKAUTHORIZATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_RESET_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHORIZATIONSTATE_TOSTRING_OFFSET))(nullptr);
		}

	};

