#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class NtlmFlags; }

#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x910A340)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x910A360)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x910A370)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x910A380)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET UNITYSDK_OFFSET(0x910A390)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET UNITYSDK_OFFSET(0x910A470)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET UNITYSDK_OFFSET(0x910A630)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x910A750)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int MessageBase_TypeDefinitionIndex = 35781;

	class MessageBase : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* header; // 0x0
		::System::Int32 _type; // 0x10
		::Mono::Security::Protocol::Ntlm::NtlmFlags* _flags; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Protocol::Ntlm::NtlmFlags* get_Flags()
		{
			return (return (::Mono::Security::Protocol::Ntlm::NtlmFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags* arg)
		{
			((::System::Void(*)(::Mono::Security::Protocol::Ntlm::NtlmFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GET_TYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* PrepareMessage(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_PREPAREMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_DECODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckHeader(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_CHECKHEADER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_GETBYTES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_MESSAGEBASE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

