#pragma once
#include "../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class MultipleConditionCheckType; }
namespace MX::Campaign::HexaTileMapEvent { class HexaEvent; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x143C100)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x143C110)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x143C120)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x143C130)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_HEXACONDITIONS_OFFSET UNITYSDK_OFFSET(0x143C140)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x143C150)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x143C160)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_HEXACOMMANDS_OFFSET UNITYSDK_OFFSET(0x143C170)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x143C180)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x143C250)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_CLONE_OFFSET UNITYSDK_OFFSET(0x143CA20)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_RUNCOMMANDIFCONDITIONSATISFIED_OFFSET UNITYSDK_OFFSET(0x143CA80)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_EXECUTEDELAYEDEVENT_OFFSET UNITYSDK_OFFSET(0x143DB60)

namespace MX::Campaign::HexaTileMapEvent
{
	inline static constexpr unsigned int HexaEvent_TypeDefinitionIndex = 14911;

	class HexaEvent : public Il2CppObject
	{
	public:
		::System::String* _EventName_k__BackingField; // 0x10
		::System::Int64 _EventId_k__BackingField; // 0x18
		Il2CppObject* hexaConditions; // 0x20
		::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x28
		Il2CppObject* hexaCommands; // 0x30

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_EVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_EventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_EVENTNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HexaConditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_HEXACONDITIONS_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return ((::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MultipleConditionCheckType(::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HexaCommands()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_GET_HEXACOMMANDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaTileMapEvent::HexaEvent* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaEvent* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_CLONE_OFFSET))(nullptr);
		}

		::System::Void RunCommandIfConditionSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_RUNCOMMANDIFCONDITIONSATISFIED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ExecuteDelayedEvent(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXAEVENT_EXECUTEDELAYEDEVENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

