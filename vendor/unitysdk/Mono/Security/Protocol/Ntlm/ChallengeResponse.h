#pragma once
#include "../../../../unitysdk.h"

#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9107D40)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9107DC0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9108400)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x9107E60)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x91082C0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_LM_OFFSET UNITYSDK_OFFSET(0x91086A0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_NT_OFFSET UNITYSDK_OFFSET(0x9108A00)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91084D0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9108A70)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9108710)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PREPAREDESKEY_OFFSET UNITYSDK_OFFSET(0x9108AE0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PASSWORDTOKEY_OFFSET UNITYSDK_OFFSET(0x9108570)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9108CD0)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int ChallengeResponse_TypeDefinitionIndex = 35779;

	class ChallengeResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* magic; // 0x0
		::Il2CppArray<::System::Object*>* nullEncMagic; // 0x8
		::System::Boolean _disposed; // 0x10
		::Il2CppArray<::System::Object*>* _challenge; // 0x18
		::Il2CppArray<::System::Object*>* _lmpwd; // 0x20
		::Il2CppArray<::System::Object*>* _ntpwd; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_PASSWORD_OFFSET))(str, nullptr);
		}

		::System::Void set_Challenge(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_SET_CHALLENGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LM()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_LM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NT()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GET_NT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetResponse(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_GETRESPONSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PrepareDESKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PREPAREDESKEY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PasswordToKey(::System::String* str, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_PASSWORDTOKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

