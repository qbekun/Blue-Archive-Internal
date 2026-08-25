#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class ServerNotificationFlag; }

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ServerNotificationFlag_TypeDefinitionIndex = 11320;

	class ServerNotificationFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::NetworkProtocol::ServerNotificationFlag* None; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* NewMailArrived; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* HasUnreadMail; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* NewToastDetected; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveArenaDailyReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveRaidReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* ServerMaintenance; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CannotReceiveMail; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* InventoryFullRewardMail; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveClanAttendanceReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* HasClanApplicant; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* HasFriendRequest; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CheckConquest; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveEliminateRaidReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveMultiFloorRaidReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* CanReceiveProductDailyRecordReward; // 0x0
		::MX::NetworkProtocol::ServerNotificationFlag* HasUnreadSemiPermanentMail; // 0x0

	};
}

