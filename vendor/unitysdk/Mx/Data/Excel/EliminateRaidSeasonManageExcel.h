#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidSeasonManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A81280)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETROOTASELIMINATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A81290)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETROOTASELIMINATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A812F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A81380)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A81350)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1A813A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A813F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATA_OFFSET UNITYSDK_OFFSET(0x1A81440)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATABYTES_OFFSET UNITYSDK_OFFSET(0x1A81480)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A814A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A814E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONENDDATA_OFFSET UNITYSDK_OFFSET(0x1A81500)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONENDDATABYTES_OFFSET UNITYSDK_OFFSET(0x1A81540)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1A81560)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A815A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LOBBYTABLEBGPATH_OFFSET UNITYSDK_OFFSET(0x1A815C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETLOBBYTABLEBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A81600)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LOBBYSCREENBGPATH_OFFSET UNITYSDK_OFFSET(0x1A81620)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETLOBBYSCREENBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A81660)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP01_OFFSET UNITYSDK_OFFSET(0x1A81680)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP01BYTES_OFFSET UNITYSDK_OFFSET(0x1A816C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP02_OFFSET UNITYSDK_OFFSET(0x1A816E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP02BYTES_OFFSET UNITYSDK_OFFSET(0x1A81720)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP03_OFFSET UNITYSDK_OFFSET(0x1A81740)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP03BYTES_OFFSET UNITYSDK_OFFSET(0x1A81780)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A817A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_MAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1A817F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STACKEDSEASONREWARDGAUGE_OFFSET UNITYSDK_OFFSET(0x1A81840)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_STACKEDSEASONREWARDGAUGELENGTH_OFFSET UNITYSDK_OFFSET(0x1A818A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSTACKEDSEASONREWARDGAUGEBYTES_OFFSET UNITYSDK_OFFSET(0x1A818E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A81900)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONREWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A81960)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A819A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDNORMAL_OFFSET UNITYSDK_OFFSET(0x1A819C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDHARD_OFFSET UNITYSDK_OFFSET(0x1A81A10)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDVERYHARD_OFFSET UNITYSDK_OFFSET(0x1A81A60)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDHARDCORE_OFFSET UNITYSDK_OFFSET(0x1A81AB0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDEXTREME_OFFSET UNITYSDK_OFFSET(0x1A81B00)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDINSANE_OFFSET UNITYSDK_OFFSET(0x1A81B50)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDTORMENT_OFFSET UNITYSDK_OFFSET(0x1A81BA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATEELIMINATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A81BF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTELIMINATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A82420)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1A82160)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A82130)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATA_OFFSET UNITYSDK_OFFSET(0x1A823A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A82370)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONENDDATA_OFFSET UNITYSDK_OFFSET(0x1A82340)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1A82310)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLOBBYTABLEBGPATH_OFFSET UNITYSDK_OFFSET(0x1A822E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLOBBYSCREENBGPATH_OFFSET UNITYSDK_OFFSET(0x1A822B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP01_OFFSET UNITYSDK_OFFSET(0x1A82280)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP02_OFFSET UNITYSDK_OFFSET(0x1A82250)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP03_OFFSET UNITYSDK_OFFSET(0x1A82220)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDRANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A82100)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDMAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1A821F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSTACKEDSEASONREWARDGAUGE_OFFSET UNITYSDK_OFFSET(0x1A821C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATESTACKEDSEASONREWARDGAUGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A82440)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTSTACKEDSEASONREWARDGAUGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A824D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A82190)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATESEASONREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A82510)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTSEASONREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A825A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDNORMAL_OFFSET UNITYSDK_OFFSET(0x1A820D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDHARD_OFFSET UNITYSDK_OFFSET(0x1A820A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDVERYHARD_OFFSET UNITYSDK_OFFSET(0x1A82070)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDHARDCORE_OFFSET UNITYSDK_OFFSET(0x1A82040)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDEXTREME_OFFSET UNITYSDK_OFFSET(0x1A82010)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDINSANE_OFFSET UNITYSDK_OFFSET(0x1A81FE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDTORMENT_OFFSET UNITYSDK_OFFSET(0x1A81FB0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ENDELIMINATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A823D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_FINISHELIMINATERAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A825E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A82600)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidSeasonManageExcel_TypeDefinitionIndex = 17392;

	class EliminateRaidSeasonManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidSeasonManageExcel* GetRootAsEliminateRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETROOTASELIMINATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidSeasonManageExcel* GetRootAsEliminateRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidSeasonManageExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETROOTASELIMINATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidSeasonManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidSeasonManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonDisplay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONDISPLAY_OFFSET))(nullptr);
		}

		::System::String* get_SeasonStartData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonStartDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATABYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndNoteLabelStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndNoteLabelStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SeasonEndData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONENDDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonEndDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONENDDATABYTES_OFFSET))(nullptr);
		}

		::System::String* get_SettlementEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSettlementEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LobbyTableBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LOBBYTABLEBGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyTableBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETLOBBYTABLEBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LobbyScreenBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LOBBYSCREENBGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyScreenBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETLOBBYSCREENBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenRaidBossGroup01()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP01_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenRaidBossGroup01Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP01BYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenRaidBossGroup02()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP02_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenRaidBossGroup02Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP02BYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenRaidBossGroup03()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUP03_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenRaidBossGroup03Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETOPENRAIDBOSSGROUP03BYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxSeasonRewardGauage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_MAXSEASONREWARDGAUAGE_OFFSET))(nullptr);
		}

		::System::Int64 StackedSeasonRewardGauge(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STACKEDSEASONREWARDGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StackedSeasonRewardGaugeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_STACKEDSEASONREWARDGAUGELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStackedSeasonRewardGaugeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSTACKEDSEASONREWARDGAUGEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_SEASONREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_SEASONREWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GETSEASONREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdNormal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDNORMAL_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdHard()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDHARD_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdVeryhard()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDVERYHARD_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdHardcore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDHARDCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdExtreme()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDEXTREME_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdInsane()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDINSANE_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitedRewardIdTorment()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_GET_LIMITEDREWARDIDTORMENT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATEELIMINATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTELIMINATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonStartData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndNoteLabelStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonEndData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONENDDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSettlementEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyTableBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLOBBYTABLEBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyScreenBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLOBBYSCREENBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroup01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroup02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroup03(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankingRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDRANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxSeasonRewardGauage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDMAXSEASONREWARDGAUAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackedSeasonRewardGauge(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSTACKEDSEASONREWARDGAUGE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStackedSeasonRewardGaugeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATESTACKEDSEASONREWARDGAUGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStackedSeasonRewardGaugeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTSTACKEDSEASONREWARDGAUGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDSEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_CREATESEASONREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_STARTSEASONREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdNormal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDNORMAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdHard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDHARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdVeryhard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDVERYHARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdHardcore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDHARDCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdExtreme(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDEXTREME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdInsane(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDINSANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardIdTorment(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ADDLIMITEDREWARDIDTORMENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_ENDELIMINATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_FINISHELIMINATERAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

