#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define CAMPAIGNMAINSTAGEENDSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4F1D0)

	inline static constexpr unsigned int CampaignMainStageEndSummary_TypeDefinitionIndex = 758;

	class CampaignMainStageEndSummary : public Il2CppObject
	{
	public:
		::System::Boolean IsWin; // 0x10
		::System::Int64 StageId; // 0x18
		::System::Int32 OldLevel; // 0x20
		::System::Int32 NewLevel; // 0x24
		::System::Int64 OldExp; // 0x28
		::System::Int64 NewExp; // 0x30
		Il2CppObject* Rewards; // 0x38
		::System::Boolean IsFirstClear; // 0x40
		::MX::GameLogic::Parcel::ParcelResultDB* ParcelResultDB; // 0x48
		::MX::GameLogic::DBModel::SessionKey* SessionKey; // 0x50
		::MX::NetworkProtocol::Protocol* Protocol; // 0x58
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* HistoryDB; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAINSTAGEENDSUMMARY_.CTOR_OFFSET))(nullptr);
		}

	};

