#pragma once
#include "../../../../unitysdk.h"

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x910A870)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x910A900)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_HOST_OFFSET UNITYSDK_OFFSET(0x910A980)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x910AA00)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x910AB00)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type1Message_TypeDefinitionIndex = 35785;

	class Type1Message : public Il2CppObject
	{
	public:
		::System::String* _host; // 0x18
		::System::String* _domain; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Domain(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_DOMAIN_OFFSET))(str, nullptr);
		}

		::System::Void set_Host(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_SET_HOST_OFFSET))(str, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE1MESSAGE_GETBYTES_OFFSET))(nullptr);
		}

	};
}

