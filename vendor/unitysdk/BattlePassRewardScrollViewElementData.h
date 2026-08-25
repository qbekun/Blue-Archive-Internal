#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
class BattlePassTask;
namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }

#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_CANRECEIVEREWARDPAID_OFFSET UNITYSDK_OFFSET(0x224C5D0)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x224C760)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_HASRECEIVEDREWARDPAID_OFFSET UNITYSDK_OFFSET(0x224C7C0)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_CANRECEIVEREWARDFREE_OFFSET UNITYSDK_OFFSET(0x224C8C0)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_GET_TASK_OFFSET UNITYSDK_OFFSET(0x224C6D0)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_GET_SERVERDATA_OFFSET UNITYSDK_OFFSET(0x224C710)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_HASRECEIVEDREWARDFREE_OFFSET UNITYSDK_OFFSET(0x224C980)
#define BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x224CA80)

	inline static constexpr unsigned int BattlePassRewardScrollViewElementData_TypeDefinitionIndex = 4517;

	class BattlePassRewardScrollViewElementData : public Il2CppObject
	{
	public:
		::System::Int32 Level; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* FreeTrackItemData; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* PaidTrackItemData; // 0x20

		::System::Boolean CanReceiveRewardPaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_CANRECEIVEREWARDPAID_OFFSET))(nullptr);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_ISLOCKED_OFFSET))(nullptr);
		}

		::System::Boolean HasReceivedRewardPaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_HASRECEIVEDREWARDPAID_OFFSET))(nullptr);
		}

		::System::Boolean CanReceiveRewardFree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_CANRECEIVEREWARDFREE_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_GET_TASK_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_ServerData()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_GET_SERVERDATA_OFFSET))(nullptr);
		}

		::System::Boolean HasReceivedRewardFree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_HASRECEIVEDREWARDFREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSREWARDSCROLLVIEWELEMENTDATA_.CTOR_OFFSET))(nullptr);
		}

	};

