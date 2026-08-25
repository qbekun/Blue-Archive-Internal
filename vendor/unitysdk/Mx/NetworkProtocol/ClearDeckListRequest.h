#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClearDeckKey; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F1C0)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3F1D0)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_GET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0xF3F1E0)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_SET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0xF3F1F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClearDeckListRequest_TypeDefinitionIndex = 11527;

	class ClearDeckListRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClearDeckKey* _ClearDeckKey_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* get_ClearDeckKey()
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_GET_CLEARDECKKEY_OFFSET))(nullptr);
		}

		::System::Void set_ClearDeckKey(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTREQUEST_SET_CLEARDECKKEY_OFFSET))(arg, nullptr);
		}

	};
}

