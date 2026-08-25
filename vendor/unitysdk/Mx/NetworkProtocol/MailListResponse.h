#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF47AA0)
#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47AB0)
#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47AC0)
#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_MAILDBS_OFFSET UNITYSDK_OFFSET(0xF47AD0)
#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF47AE0)
#define MX_NETWORKPROTOCOL_MAILLISTRESPONSE_SET_MAILDBS_OFFSET UNITYSDK_OFFSET(0xF47AF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailListResponse_TypeDefinitionIndex = 11838;

	class MailListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MailDBs_k__BackingField; // 0x50
		::System::Int64 _Count_k__BackingField; // 0x58

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MailDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_MAILDBS_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_MailDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTRESPONSE_SET_MAILDBS_OFFSET))(arg, nullptr);
		}

	};
}

