#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BASEPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_NETWORKPROTOCOL_BASEPACKET_SET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0xF11840)
#define MX_NETWORKPROTOCOL_BASEPACKET_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF11850)
#define MX_NETWORKPROTOCOL_BASEPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11870)
#define MX_NETWORKPROTOCOL_BASEPACKET_GET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0xF11880)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BasePacket_TypeDefinitionIndex = 11323;

	class BasePacket : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SessionKey* _SessionKey_k__BackingField; // 0x10

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BASEPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SessionKey(::MX::GameLogic::DBModel::SessionKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BASEPACKET_SET_SESSIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BASEPACKET_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BASEPACKET_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SessionKey* get_SessionKey()
		{
			return ((::MX::GameLogic::DBModel::SessionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BASEPACKET_GET_SESSIONKEY_OFFSET))(nullptr);
		}

	};
}

