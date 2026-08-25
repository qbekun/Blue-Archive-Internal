#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestInfoDB; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_CALCULATEREWARDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0xFEE970)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_TODAYOPERATIONRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEE9D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0xFEE9E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_CUMULATEDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0xFEE9F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEA00)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_ECHELONCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEA10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTGAUGE_OFFSET UNITYSDK_OFFSET(0xFEEA20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEEA30)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_RECEIVEDCALCULATEREWARDCONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xFEEA40)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEEA50)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_RECEIVEDCALCULATEREWARDCONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xFEEB00)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_TODAYCONQUESTRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEB10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEAF0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFEEB20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_CUMULATEDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0xFEEB70)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEEB80)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_ALERTMASSEROSIONID_OFFSET UNITYSDK_OFFSET(0xFEEB90)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_TODAYCONQUESTRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEBA0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_TODAYOPERATIONRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEBB0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTGAUGE_OFFSET UNITYSDK_OFFSET(0xFEEBC0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_ALERTMASSEROSIONID_OFFSET UNITYSDK_OFFSET(0xFEEBD0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_ECHELONCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEBE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestInfoDB_TypeDefinitionIndex = 12538;

	class ConquestInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _EventGauge_k__BackingField; // 0x18
		::System::Int32 _EventSpawnCount_k__BackingField; // 0x1C
		::System::Int32 _EchelonChangeCount_k__BackingField; // 0x20
		::System::Int32 _TodayConquestRentCount_k__BackingField; // 0x24
		::System::Int32 _TodayOperationRentCount_k__BackingField; // 0x28
		::System::Int64 _CumulatedConditionValue_k__BackingField; // 0x30
		::System::Int64 _ReceivedCalculateRewardConditionAmount_k__BackingField; // 0x38
		Il2CppObject* _AlertMassErosionId_k__BackingField; // 0x40

		::System::Int64 get_CalculateRewardConditionValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_CALCULATEREWARDCONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_TodayOperationRentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_TODAYOPERATIONRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EventSpawnCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTSPAWNCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CumulatedConditionValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_CUMULATEDCONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EventSpawnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTSPAWNCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonChangeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_ECHELONCHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_EventGauge()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTGAUGE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedCalculateRewardConditionAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_RECEIVEDCALCULATEREWARDCONDITIONAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_CLONE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReceivedCalculateRewardConditionAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_RECEIVEDCALCULATEREWARDCONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TodayConquestRentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_TODAYCONQUESTRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CumulatedConditionValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_CUMULATEDCONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlertMassErosionId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_ALERTMASSEROSIONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TodayConquestRentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_TODAYCONQUESTRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TodayOperationRentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_TODAYOPERATIONRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventGauge(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_EVENTGAUGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AlertMassErosionId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_GET_ALERTMASSEROSIONID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonChangeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTINFODB_SET_ECHELONCHANGECOUNT_OFFSET))(arg, nullptr);
		}

	};
}

