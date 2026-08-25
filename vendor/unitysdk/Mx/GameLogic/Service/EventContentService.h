#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ScenarioGroupHistoryDB; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::Data { class EventContentData; }
namespace MX::GameLogic::DBModel { class EventContentBoxGachaDB; }
namespace MX::Data { class EventContentMeetupData; }
class SortingRule;

#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISDREAMMAKERSCENARIO_OFFSET UNITYSDK_OFFSET(0xFA6580)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CREATEORIGINALSCENARIOHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFA6610)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISCONQUESTSCENARIO_OFFSET UNITYSDK_OFFSET(0xFA67A0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETEVENTCONTENTCHANGEREWARDS_OFFSET UNITYSDK_OFFSET(0xFA6840)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKONSUBEVNET_OFFSET UNITYSDK_OFFSET(0xFA6AB0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENCHANGESUBSTAGE_OFFSET UNITYSDK_OFFSET(0xFA6D20)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISPROLOGUESCENARIO_OFFSET UNITYSDK_OFFSET(0xFA6F40)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETSUBEVENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0xFA6E50)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKPASSCONTENTCONDITION_OFFSET UNITYSDK_OFFSET(0xFA7000)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISTIMEOVERSUBEVENT_OFFSET UNITYSDK_OFFSET(0xFA6C50)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDEVENTCONTENTCHANGE_OFFSET UNITYSDK_OFFSET(0xFA71E0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CONTAINCHANGESCENARIOEVENT_OFFSET UNITYSDK_OFFSET(0xFA7410)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENCHANGEMAINSTAGE_OFFSET UNITYSDK_OFFSET(0xFA7540)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETBOXGACHALASTROUND_OFFSET UNITYSDK_OFFSET(0xFA7700)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISDEFENCESCENARIO_OFFSET UNITYSDK_OFFSET(0xFA78B0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CANRECEIVESTAGEPOINTREWARD_OFFSET UNITYSDK_OFFSET(0xFA7940)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETREADABLEMEETUPDATAS_OFFSET UNITYSDK_OFFSET(0xFA7B20)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDRETURNSCENARIOHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFA7BF0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDSPECIFICEVENTSCENARIO_OFFSET UNITYSDK_OFFSET(0xFA7CE0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETORCREATEEVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0xFA8800)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETSEASONINFOBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xFA7610)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKOPENCONDTIONMEETUP_OFFSET UNITYSDK_OFFSET(0xFA88F0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENSTAGE_OFFSET UNITYSDK_OFFSET(0xFA8C80)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_APPENDEVENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xFA95B0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISCHANGESCENARIOEVENT_OFFSET UNITYSDK_OFFSET(0xFA9DE0)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISEVENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xFA9E90)
#define MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKSUBEVENTENTRANCEITEMUSEALL_OFFSET UNITYSDK_OFFSET(0xFA6AF0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int EventContentService_TypeDefinitionIndex = 12341;

	class EventContentService : public Il2CppObject
	{
	public:
		::System::Boolean IsDreamMakerScenario(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISDREAMMAKERSCENARIO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* CreateOriginalScenarioHistoryDB(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, ::MX::Data::EventContentSeasonInfo* arg4, Il2CppObject* arg5)
		{
			return ((::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::MX::Data::EventContentSeasonInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CREATEORIGINALSCENARIOHISTORYDB_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsConquestScenario(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISCONQUESTSCENARIO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEventContentChangeRewards(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETEVENTCONTENTCHANGEREWARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CheckOnSubEvnet(::System::DateTime* arg, Il2CppObject* arg2, ::MX::GameLogic::DBModel::EventContentChangeDB* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, Il2CppObject*, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKONSUBEVNET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenChangeSubStage(::System::DateTime* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENCHANGESUBSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsPrologueScenario(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISPROLOGUESCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetSubEventSeasonInfo(::System::Int64 arg, ::MX::Data::EventContentSeasonInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETSUBEVENTSEASONINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckPassContentCondition(::MX::Data::EventContentStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKPASSCONTENTCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTimeOverSubEvent(::System::DateTime* arg, ::MX::GameLogic::DBModel::EventContentChangeDB* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISTIMEOVERSUBEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BuildEventContentChange(::System::DateTime* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::EventContentChangeDB* arg4)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDEVENTCONTENTCHANGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ContainChangeScenarioEvent(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CONTAINCHANGESCENARIOEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpenChangeMainStage(::System::DateTime* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENCHANGEMAINSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetBoxGachaLastRound(::MX::Data::EventContentData* arg, ::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentData*, ::MX::GameLogic::DBModel::EventContentBoxGachaDB*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETBOXGACHALASTROUND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsDefenceScenario(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISDEFENCESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveStagePointReward(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CANRECEIVESTAGEPOINTREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetReadableMeetupDatas(::MX::Data::EventContentData* arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Data::EventContentData*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETREADABLEMEETUPDATAS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void BuildReturnScenarioHistoryDB(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDRETURNSCENARIOHISTORYDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void BuildSpecificEventScenario(::System::Int64 arg, ::System::DateTime* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_BUILDSPECIFICEVENTSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentChangeDB* GetOrCreateEventContentChangeDB(::System::DateTime* arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::EventContentChangeDB* arg3, ::MX::Data::EventContentSeasonInfo* arg4)
		{
			return ((::MX::GameLogic::DBModel::EventContentChangeDB*(*)(::System::DateTime*, ::System::Int64, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_GETORCREATEEVENTCONTENTCHANGEDB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetSeasonInfoByStageId(::System::Int64 arg, ::MX::Data::EventContentSeasonInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_TRYGETSEASONINFOBYSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckOpenCondtionMeetup(::MX::Data::EventContentMeetupData* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentMeetupData*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKOPENCONDTIONMEETUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenStage(::System::DateTime* arg, ::MX::Data::EventContentStageInfo* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Int64 arg5, ::MX::GameLogic::DBModel::EventContentChangeDB* arg6, Il2CppObject* arg7)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::MX::Data::EventContentStageInfo*, Il2CppObject*, Il2CppObject*, ::System::Int64, ::MX::GameLogic::DBModel::EventContentChangeDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISOPENSTAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AppendEventSortingRule(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_APPENDEVENTSORTINGRULE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsChangeScenarioEvent(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISCHANGESCENARIOEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEventSortingRule(SortingRule* arg)
		{
			return ((::System::Boolean(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_ISEVENTSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckSubEventEntranceItemUseAll(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EVENTCONTENTSERVICE_CHECKSUBEVENTENTRANCEITEMUSEALL_OFFSET))(arg, arg2, nullptr);
		}

	};
}

