#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidSeasonManageExcel; }
namespace FlatData { class CurrencyTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCDD90)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETROOTASWORLDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCDDA0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETROOTASWORLDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCDE00)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CCDE90)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CCDE60)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CCDEB0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1CCDF00)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0x1CCDF50)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYSCENE_OFFSET UNITYSDK_OFFSET(0x1CCDFA0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYSCENEBYTES_OFFSET UNITYSDK_OFFSET(0x1CCDFE0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBANNER_OFFSET UNITYSDK_OFFSET(0x1CCE000)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYBANNERBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE040)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBG_OFFSET UNITYSDK_OFFSET(0x1CCE060)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYBGBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE0A0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBANNERSHOW_OFFSET UNITYSDK_OFFSET(0x1CCE0C0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SEASONOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CCE110)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1CCE160)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CANPLAYNOTSEASONTIME_OFFSET UNITYSDK_OFFSET(0x1CCE1B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDUNIQUETHEMELOBBYUI_OFFSET UNITYSDK_OFFSET(0x1CCE200)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDUNIQUETHEMENAME_OFFSET UNITYSDK_OFFSET(0x1CCE250)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDUNIQUETHEMENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE290)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CANWORLDRAIDGEMENTER_OFFSET UNITYSDK_OFFSET(0x1CCE2B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_HIDEWORLDRAIDTICKETUI_OFFSET UNITYSDK_OFFSET(0x1CCE300)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET UNITYSDK_OFFSET(0x1CCE350)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_USEWORLDRAIDCOMMONTOAST_OFFSET UNITYSDK_OFFSET(0x1CCE3A0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_OPENRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CCE3F0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCE450)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE490)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_BOSSSPAWNTIME_OFFSET UNITYSDK_OFFSET(0x1CCE4B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_BOSSSPAWNTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CCE500)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ELIMINATETIME_OFFSET UNITYSDK_OFFSET(0x1CCE540)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_ELIMINATETIMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CCE590)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_SCENARIOOUTPUTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1CCE5D0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SCENARIOOUTPUTCONDITIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCE630)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETSCENARIOOUTPUTCONDITIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE670)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1CCE690)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CONDITIONSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCE6F0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETCONDITIONSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE730)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDMAPENTEROPERATOR_OFFSET UNITYSDK_OFFSET(0x1CCE750)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDMAPENTEROPERATORBYTES_OFFSET UNITYSDK_OFFSET(0x1CCE790)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_USEFAVORRANKBUFF_OFFSET UNITYSDK_OFFSET(0x1CCE7B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEWORLDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCE800)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTWORLDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCF090)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1CCEC80)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDPHASEID_OFFSET UNITYSDK_OFFSET(0x1CCEC50)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDENTERTICKET_OFFSET UNITYSDK_OFFSET(0x1CCEE90)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYSCENE_OFFSET UNITYSDK_OFFSET(0x1CCEE60)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBANNER_OFFSET UNITYSDK_OFFSET(0x1CCEE30)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBG_OFFSET UNITYSDK_OFFSET(0x1CCEE00)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBANNERSHOW_OFFSET UNITYSDK_OFFSET(0x1CCF010)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSEASONOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CCEC20)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1CCEBF0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCANPLAYNOTSEASONTIME_OFFSET UNITYSDK_OFFSET(0x1CCEFE0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDUNIQUETHEMELOBBYUI_OFFSET UNITYSDK_OFFSET(0x1CCEFB0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDUNIQUETHEMENAME_OFFSET UNITYSDK_OFFSET(0x1CCEDD0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCANWORLDRAIDGEMENTER_OFFSET UNITYSDK_OFFSET(0x1CCEF80)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDHIDEWORLDRAIDTICKETUI_OFFSET UNITYSDK_OFFSET(0x1CCEF50)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDHIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET UNITYSDK_OFFSET(0x1CCEF20)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDUSEWORLDRAIDCOMMONTOAST_OFFSET UNITYSDK_OFFSET(0x1CCEEF0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CCEDA0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTOPENRAIDBOSSGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF140)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDBOSSSPAWNTIME_OFFSET UNITYSDK_OFFSET(0x1CCED70)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEBOSSSPAWNTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF180)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTBOSSSPAWNTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF210)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDELIMINATETIME_OFFSET UNITYSDK_OFFSET(0x1CCED40)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEELIMINATETIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF250)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTELIMINATETIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF2E0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSCENARIOOUTPUTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1CCED10)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATESCENARIOOUTPUTCONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF320)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTSCENARIOOUTPUTCONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF3B0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1CCECE0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATECONDITIONSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF3F0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTCONDITIONSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCF480)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDMAPENTEROPERATOR_OFFSET UNITYSDK_OFFSET(0x1CCECB0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDUSEFAVORRANKBUFF_OFFSET UNITYSDK_OFFSET(0x1CCEEC0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ENDWORLDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCF040)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_FINISHWORLDRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCF4C0)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCF4E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidSeasonManageExcel_TypeDefinitionIndex = 19819;

	class WorldRaidSeasonManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidSeasonManageExcel* GetRootAsWorldRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETROOTASWORLDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidSeasonManageExcel* GetRootAsWorldRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidSeasonManageExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETROOTASWORLDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidSeasonManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidSeasonManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_PHASEID_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_EnterTicket()
		{
			return (return (::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::String* get_WorldRaidLobbyScene()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYSCENE_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidLobbySceneBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYSCENEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldRaidLobbyBanner()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBANNER_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidLobbyBannerBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYBANNERBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldRaidLobbyBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidLobbyBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDLOBBYBGBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_WorldRaidLobbyBannerShow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYBANNERSHOW_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SEASONOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidLobbyEnterScenario()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET))(nullptr);
		}

		::System::Boolean get_CanPlayNotSeasonTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CANPLAYNOTSEASONTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_WorldRaidUniqueThemeLobbyUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDUNIQUETHEMELOBBYUI_OFFSET))(nullptr);
		}

		::System::String* get_WorldRaidUniqueThemeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDUNIQUETHEMENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidUniqueThemeNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDUNIQUETHEMENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWorldRaidGemEnter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CANWORLDRAIDGEMENTER_OFFSET))(nullptr);
		}

		::System::Boolean get_HideWorldRaidTicketUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_HIDEWORLDRAIDTICKETUI_OFFSET))(nullptr);
		}

		::System::Boolean get_HideWorldRaidBossCompleteRewardUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET))(nullptr);
		}

		::System::Boolean get_UseWorldRaidCommonToast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_USEWORLDRAIDCOMMONTOAST_OFFSET))(nullptr);
		}

		::System::Int64 OpenRaidBossGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_OPENRAIDBOSSGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenRaidBossGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenRaidBossGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* BossSpawnTime(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_BOSSSPAWNTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossSpawnTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_BOSSSPAWNTIMELENGTH_OFFSET))(nullptr);
		}

		::System::String* EliminateTime(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ELIMINATETIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EliminateTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_ELIMINATETIMELENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ScenarioOutputConditionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_SCENARIOOUTPUTCONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ScenarioOutputConditionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_SCENARIOOUTPUTCONDITIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioOutputConditionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETSCENARIOOUTPUTCONDITIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConditionScenarioGroupid(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CONDITIONSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionScenarioGroupidLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_CONDITIONSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionScenarioGroupidBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETCONDITIONSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldRaidMapEnterOperator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_WORLDRAIDMAPENTEROPERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidMapEnterOperatorBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GETWORLDRAIDMAPENTEROPERATORBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_UseFavorRankBuff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_GET_USEFAVORRANKBUFF_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CurrencyTypes* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::CurrencyTypes*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEWORLDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTWORLDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDPHASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterTicket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDENTERTICKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidLobbyScene(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYSCENE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidLobbyBanner(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBANNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidLobbyBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidLobbyBannerShow(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYBANNERSHOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSEASONOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidLobbyEnterScenario(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDLOBBYENTERSCENARIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanPlayNotSeasonTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCANPLAYNOTSEASONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidUniqueThemeLobbyUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDUNIQUETHEMELOBBYUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidUniqueThemeName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDUNIQUETHEMENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanWorldRaidGemEnter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCANWORLDRAIDGEMENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideWorldRaidTicketUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDHIDEWORLDRAIDTICKETUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideWorldRaidBossCompleteRewardUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDHIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseWorldRaidCommonToast(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDUSEWORLDRAIDCOMMONTOAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenRaidBossGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenRaidBossGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTOPENRAIDBOSSGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossSpawnTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDBOSSSPAWNTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBossSpawnTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEBOSSSPAWNTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBossSpawnTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTBOSSSPAWNTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEliminateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDELIMINATETIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEliminateTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATEELIMINATETIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEliminateTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTELIMINATETIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioOutputConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDSCENARIOOUTPUTCONDITIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateScenarioOutputConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATESCENARIOOUTPUTCONDITIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartScenarioOutputConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTSCENARIOOUTPUTCONDITIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioGroupid(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDCONDITIONSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionScenarioGroupidVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_CREATECONDITIONSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionScenarioGroupidVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_STARTCONDITIONSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidMapEnterOperator(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDWORLDRAIDMAPENTEROPERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseFavorRankBuff(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ADDUSEFAVORRANKBUFF_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_ENDWORLDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_FINISHWORLDRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

