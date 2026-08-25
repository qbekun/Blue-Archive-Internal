#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_SET_RESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xF10AC0)
#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10AD0)
#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10AE0)
#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF10AF0)
#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_SET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF10B00)
#define MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_RESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xF10B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountDetachNexonResponse_TypeDefinitionIndex = 11276;

	class AccountDetachNexonResponse : public Il2CppObject
	{
	public:
		::System::Int32 _ResultState_k__BackingField; // 0x50
		::System::String* _ResultMessage_k__BackingField; // 0x58

		::System::Void set_ResultMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_SET_RESULTMESSAGE_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ResultState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_RESULTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_ResultState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_SET_RESULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_ResultMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDETACHNEXONRESPONSE_GET_RESULTMESSAGE_OFFSET))(nullptr);
		}

	};
}

