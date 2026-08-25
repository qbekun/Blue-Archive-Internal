#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstEventCommonExcel; }
namespace FlatData { class Rarity; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD054A0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GETROOTASCONSTEVENTCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0xD054B0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GETROOTASCONSTEVENTCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0xD05510)
#define FLATDATA_CONSTEVENTCOMMONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD05570)
#define FLATDATA_CONSTEVENTCOMMONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD051C0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTCONTENTHARDSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xD05590)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTCONTENTHARDSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xD055E0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD05660)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD056B0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTCHANGELIMITSECONDS_OFFSET UNITYSDK_OFFSET(0xD05730)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTCHANGELIMITSECONDS_OFFSET UNITYSDK_OFFSET(0xD05780)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD05800)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD05850)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0xD058A0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0xD058F0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTRARITY_OFFSET UNITYSDK_OFFSET(0xD05970)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTRARITY_OFFSET UNITYSDK_OFFSET(0xD059C0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYRESOURCE_OFFSET UNITYSDK_OFFSET(0xD05A40)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYRESOURCE_OFFSET UNITYSDK_OFFSET(0xD05A80)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GETMEETUPSCENARIOREPLAYRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0xD05AF0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0xD05B10)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0xD05B50)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GETMEETUPSCENARIOREPLAYTITLELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0xD05BC0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD05BE0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD05C30)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURENORMALVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD05CB0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURENORMALVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD05D00)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELOOPVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD05D80)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELOOPVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD05DD0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD05E50)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD05EA0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD05F20)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD05F70)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD05FF0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD06040)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_CREATECONSTEVENTCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0xD060C0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_STARTCONSTEVENTCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0xD06620)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTCONTENTHARDSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xD06570)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD063C0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSUBEVENTCHANGELIMITSECONDS_OFFSET UNITYSDK_OFFSET(0xD06390)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSUBEVENTINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD065A0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDCARDSHOPPROBWEIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0xD06360)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDCARDSHOPPROBWEIGHTRARITY_OFFSET UNITYSDK_OFFSET(0xD06540)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDMEETUPSCENARIOREPLAYRESOURCE_OFFSET UNITYSDK_OFFSET(0xD06510)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDMEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0xD064E0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD06330)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURENORMALVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD064B0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELOOPVARIATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0xD06480)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELIMITVARIATIONLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD06450)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD06420)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD063F0)
#define FLATDATA_CONSTEVENTCOMMONEXCEL_ENDCONSTEVENTCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0xD065D0)

namespace FlatData
{
	inline static constexpr unsigned int ConstEventCommonExcel_TypeDefinitionIndex = 9221;

	class ConstEventCommonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstEventCommonExcel* GetRootAsConstEventCommonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstEventCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GETROOTASCONSTEVENTCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstEventCommonExcel* GetRootAsConstEventCommonExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstEventCommonExcel* arg2)
		{
			return ((::FlatData::ConstEventCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstEventCommonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GETROOTASCONSTEVENTCOMMONEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstEventCommonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstEventCommonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_eventContentHardStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTCONTENTHARDSTAGECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_EventContentHardStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTCONTENTHARDSTAGECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_eventStrategyPlayTimeLimitInSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventStrategyPlayTimeLimitInSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_subEventChangeLimitSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTCHANGELIMITSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_SubEventChangeLimitSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTCHANGELIMITSECONDS_OFFSET))(nullptr);
		}

		::System::Boolean get_subEventInstantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTINSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_SubEventInstantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SUBEVENTINSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Int64 get_cardShopProbWeightCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CardShopProbWeightCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTCOUNT_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_cardShopProbWeightRarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTRARITY_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_CardShopProbWeightRarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_CARDSHOPPROBWEIGHTRARITY_OFFSET))(nullptr);
		}

		::System::String* get_meetupScenarioReplayResource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYRESOURCE_OFFSET))(nullptr);
		}

		::System::String* get_MeetupScenarioReplayResource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetMeetupScenarioReplayResourceBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GETMEETUPSCENARIOREPLAYRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_meetupScenarioReplayTitleLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_MeetupScenarioReplayTitleLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_MEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetMeetupScenarioReplayTitleLocalizeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GETMEETUPSCENARIOREPLAYTITLELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_specialOperactionCollectionGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_SpecialOperactionCollectionGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_SPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_treasureNormalVariationAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURENORMALVARIATIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureNormalVariationAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURENORMALVARIATIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_treasureLoopVariationAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELOOPVARIATIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureLoopVariationAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELOOPVARIATIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_treasureLimitVariationLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONLOOPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureLimitVariationLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONLOOPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_treasureLimitVariationClearLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureLimitVariationClearLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_TREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_eventStoryReplayHideEventContentId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_EventStoryReplayHideEventContentId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_GET_EVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstEventCommonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::System::Int64 arg6, ::FlatData::Rarity* arg7, ::FlatBuffers::StringOffset* arg8, ::FlatBuffers::StringOffset* arg9, ::System::Int64 arg10, ::System::Int32 arg11, ::System::Int32 arg12, ::System::Int32 arg13, ::System::Int32 arg14, ::System::Int32 arg15)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatData::Rarity*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_CREATECONSTEVENTCOMMONEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, nullptr);
		}

		::System::Void StartConstEventCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_STARTCONSTEVENTCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentHardStageCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTCONTENTHARDSTAGECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEventStrategyPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTSTRATEGYPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSubEventChangeLimitSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSUBEVENTCHANGELIMITSECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSubEventInstantClear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSUBEVENTINSTANTCLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCardShopProbWeightCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDCARDSHOPPROBWEIGHTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCardShopProbWeightRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDCARDSHOPPROBWEIGHTRARITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMeetupScenarioReplayResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDMEETUPSCENARIOREPLAYRESOURCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMeetupScenarioReplayTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDMEETUPSCENARIOREPLAYTITLELOCALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpecialOperactionCollectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDSPECIALOPERACTIONCOLLECTIONGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureNormalVariationAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURENORMALVARIATIONAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureLoopVariationAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELOOPVARIATIONAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureLimitVariationLoopCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELIMITVARIATIONLOOPCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureLimitVariationClearLoopCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDTREASURELIMITVARIATIONCLEARLOOPCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEventStoryReplayHideEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ADDEVENTSTORYREPLAYHIDEEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstEventCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTEVENTCOMMONEXCEL_ENDCONSTEVENTCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

