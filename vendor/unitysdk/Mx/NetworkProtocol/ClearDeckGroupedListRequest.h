#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClearDeckKey; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_SET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0xF3F250)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_GET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0xF3F270)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3F280)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F290)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClearDeckGroupedListRequest_TypeDefinitionIndex = 11529;

	class ClearDeckGroupedListRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClearDeckKey* _ClearDeckKey_k__BackingField; // 0x40

		::System::Void set_ClearDeckKey(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_SET_CLEARDECKKEY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* get_ClearDeckKey()
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_GET_CLEARDECKKEY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

