#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class NtlmAuthLevel; }
namespace Mono::Security::Protocol::Ntlm { class Type2Message; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x910B210)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x910B4D0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x910B5E0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x910B660)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x910B670)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x910B680)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x910B930)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x910B990)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x910BA20)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type3Message_TypeDefinitionIndex = 35787;

	class Type3Message : public Il2CppObject
	{
	public:
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* _level; // 0x18
		::Il2CppArray<::System::Object*>* _challenge; // 0x20
		::System::String* _host; // 0x28
		::System::String* _domain; // 0x30
		::System::String* _username; // 0x38
		::System::String* _password; // 0x40
		::Mono::Security::Protocol::Ntlm::Type2Message* _type2; // 0x48
		::Il2CppArray<::System::Object*>* _lm; // 0x50
		::Il2CppArray<::System::Object*>* _nt; // 0x58

		::System::Void .ctor(::Mono::Security::Protocol::Ntlm::Type2Message* arg)
		{
			((::System::Void(*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Domain(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET))(str, nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET))(str, nullptr);
		}

		::System::Void set_Username(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET))(str, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET))(arg, nullptr);
		}

		::System::String* DecodeString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeString(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET))(nullptr);
		}

	};
}

