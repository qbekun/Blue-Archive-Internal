#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_SET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11C70)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11C80)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11C90)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_GET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11CA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassGetInfoResponse_TypeDefinitionIndex = 11332;

	class BattlePassGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BattlePassInfoDB* _BattlePassInfo_k__BackingField; // 0x50

		::System::Void set_BattlePassInfo(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_SET_BATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_BattlePassInfo()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFORESPONSE_GET_BATTLEPASSINFO_OFFSET))(nullptr);
		}

	};
}

