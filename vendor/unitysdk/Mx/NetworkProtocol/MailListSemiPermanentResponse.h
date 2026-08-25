#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF47D00)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47D10)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_SET_MAILDBS_OFFSET UNITYSDK_OFFSET(0xF47D20)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_MAILDBS_OFFSET UNITYSDK_OFFSET(0xF47D30)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47D40)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF47D50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailListSemiPermanentResponse_TypeDefinitionIndex = 11844;

	class MailListSemiPermanentResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MailDBs_k__BackingField; // 0x50
		::System::Int64 _Count_k__BackingField; // 0x58

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MailDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_SET_MAILDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MailDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_MAILDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTRESPONSE_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

