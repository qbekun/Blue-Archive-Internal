#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xF0F5A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF0F5B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F5C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xF0F5D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF0F5E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF0F5F0)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F600)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF0F610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCallNameRequest_TypeDefinitionIndex = 11237;

	class AccountCallNameRequest : public Il2CppObject
	{
	public:
		::System::String* _CallName_k__BackingField; // 0x40
		::System::String* _CallNameKatakana_k__BackingField; // 0x48
		::System::String* _CallNameKorean_k__BackingField; // 0x50

		::System::String* get_CallNameKatakana()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAMEKATAKANA_OFFSET))(nullptr);
		}

		::System::String* get_CallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CallNameKatakana(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAMEKATAKANA_OFFSET))(str, nullptr);
		}

		::System::Void set_CallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CallNameKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_CALLNAMEKOREAN_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CallNameKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMEREQUEST_SET_CALLNAMEKOREAN_OFFSET))(str, nullptr);
		}

	};
}

