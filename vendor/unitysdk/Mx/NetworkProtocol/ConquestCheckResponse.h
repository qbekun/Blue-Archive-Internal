#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40C60)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_ALARMPHASETOSHOW_OFFSET UNITYSDK_OFFSET(0xF40C70)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_CONQUESTSUMMARY_OFFSET UNITYSDK_OFFSET(0xF40C80)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_CANRECEIVECALCULATEREWARD_OFFSET UNITYSDK_OFFSET(0xF40C90)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_CONQUESTSUMMARY_OFFSET UNITYSDK_OFFSET(0xF40CA0)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_PARCELCONSUMECUMULATEDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF40CB0)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_PARCELCONSUMECUMULATEDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF40CC0)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_CANRECEIVECALCULATEREWARD_OFFSET UNITYSDK_OFFSET(0xF40CD0)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40CE0)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_ALARMPHASETOSHOW_OFFSET UNITYSDK_OFFSET(0xF40CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestCheckResponse_TypeDefinitionIndex = 11566;

	class ConquestCheckResponse : public Il2CppObject
	{
	public:
		::System::Boolean _CanReceiveCalculateReward_k__BackingField; // 0x50
		Il2CppObject* _AlarmPhaseToShow_k__BackingField; // 0x54
		::System::Int64 _ParcelConsumeCumulatedAmount_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ConquestSummary* _ConquestSummary_k__BackingField; // 0x68

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_AlarmPhaseToShow()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_ALARMPHASETOSHOW_OFFSET))(nullptr);
		}

		::System::Void set_ConquestSummary(::MX::GameLogic::DBModel::ConquestSummary* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_CONQUESTSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanReceiveCalculateReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_CANRECEIVECALCULATEREWARD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestSummary* get_ConquestSummary()
		{
			return ((::MX::GameLogic::DBModel::ConquestSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_CONQUESTSUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelConsumeCumulatedAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_PARCELCONSUMECUMULATEDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelConsumeCumulatedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_PARCELCONSUMECUMULATEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanReceiveCalculateReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_GET_CANRECEIVECALCULATEREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AlarmPhaseToShow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKRESPONSE_SET_ALARMPHASETOSHOW_OFFSET))(arg, nullptr);
		}

	};
}

