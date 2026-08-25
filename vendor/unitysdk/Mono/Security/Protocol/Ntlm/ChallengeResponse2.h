#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace Mono::Security::Protocol::Ntlm { class NtlmAuthLevel; }

#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_LM_OFFSET UNITYSDK_OFFSET(0x9108DC0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_PASSWORD_OFFSET UNITYSDK_OFFSET(0x91095A0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_OFFSET UNITYSDK_OFFSET(0x91096B0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_SESSION_OFFSET UNITYSDK_OFFSET(0x9109710)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_OFFSET UNITYSDK_OFFSET(0x9109960)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_OFFSET UNITYSDK_OFFSET(0x9109DD0)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9109290)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PREPAREDESKEY_OFFSET UNITYSDK_OFFSET(0x910A060)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PASSWORDTOKEY_OFFSET UNITYSDK_OFFSET(0x9109140)
#define MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x910A250)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int ChallengeResponse2_TypeDefinitionIndex = 35780;

	class ChallengeResponse2 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* magic; // 0x0
		::Il2CppArray<::System::Object*>* nullEncMagic; // 0x8

		::Il2CppArray<::System::Object*>* Compute_LM(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_LM_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Compute_NTLM_Password(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_PASSWORD_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* Compute_NTLM(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Compute_NTLMv2_Session(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_SESSION_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_NTLMV2_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void Compute(::Mono::Security::Protocol::Ntlm::Type2Message* arg, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel*, ::System::String*, ::System::String*, ::System::String*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_COMPUTE_OFFSET))(arg, arg, str, str, str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetResponse(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_GETRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PrepareDESKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PREPAREDESKEY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PasswordToKey(::System::String* str, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_PASSWORDTOKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_CHALLENGERESPONSE2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

