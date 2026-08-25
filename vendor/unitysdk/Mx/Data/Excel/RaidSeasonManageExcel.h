#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidSeasonManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C44980)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETROOTASRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C44990)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETROOTASRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C449F0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C44A80)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C44A50)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C44AA0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C44AF0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATA_OFFSET UNITYSDK_OFFSET(0x1C44B40)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATABYTES_OFFSET UNITYSDK_OFFSET(0x1C44B80)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C44BA0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C44BE0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONENDDATA_OFFSET UNITYSDK_OFFSET(0x1C44C00)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONENDDATABYTES_OFFSET UNITYSDK_OFFSET(0x1C44C40)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1C44C60)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C44CA0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_OPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C44CC0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPLENGTH_OFFSET UNITYSDK_OFFSET(0x1C44D10)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C44D50)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_MAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1C44DA0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STACKEDSEASONREWARDGAUGE_OFFSET UNITYSDK_OFFSET(0x1C44DF0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_STACKEDSEASONREWARDGAUGELENGTH_OFFSET UNITYSDK_OFFSET(0x1C44E50)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSTACKEDSEASONREWARDGAUGEBYTES_OFFSET UNITYSDK_OFFSET(0x1C44E90)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C44EB0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONREWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C44F10)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C44F50)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATERAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C44F70)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C453D0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1C451D0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C451A0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATA_OFFSET UNITYSDK_OFFSET(0x1C45350)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C45320)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONENDDATA_OFFSET UNITYSDK_OFFSET(0x1C452F0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1C452C0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C45290)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPVECTOR_OFFSET UNITYSDK_OFFSET(0x1C453F0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTOPENRAIDBOSSGROUPVECTOR_OFFSET UNITYSDK_OFFSET(0x1C45480)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDRANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C45170)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDMAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1C45260)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSTACKEDSEASONREWARDGAUGE_OFFSET UNITYSDK_OFFSET(0x1C45230)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATESTACKEDSEASONREWARDGAUGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C454C0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTSTACKEDSEASONREWARDGAUGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C45550)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C45200)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATESEASONREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C45590)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTSEASONREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C45620)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ENDRAIDSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C45380)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_FINISHRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C45660)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDRAIDSEASONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C45680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSeasonManageExcel_TypeDefinitionIndex = 19165;

	class RaidSeasonManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidSeasonManageExcel* GetRootAsRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETROOTASRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidSeasonManageExcel* GetRootAsRaidSeasonManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidSeasonManageExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidSeasonManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETROOTASRAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidSeasonManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidSeasonManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonDisplay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONDISPLAY_OFFSET))(nullptr);
		}

		::System::String* get_SeasonStartData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONSTARTDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonStartDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONSTARTDATABYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndNoteLabelStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndNoteLabelStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETENDNOTELABELSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SeasonEndData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONENDDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonEndDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONENDDATABYTES_OFFSET))(nullptr);
		}

		::System::String* get_SettlementEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SETTLEMENTENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSettlementEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSETTLEMENTENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* OpenRaidBossGroup(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_OPENRAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenRaidBossGroupLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_OPENRAIDBOSSGROUPLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxSeasonRewardGauage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_MAXSEASONREWARDGAUAGE_OFFSET))(nullptr);
		}

		::System::Int64 StackedSeasonRewardGauge(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STACKEDSEASONREWARDGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StackedSeasonRewardGaugeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_STACKEDSEASONREWARDGAUGELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStackedSeasonRewardGaugeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSTACKEDSEASONREWARDGAUGEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_SEASONREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GET_SEASONREWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_GETSEASONREWARDIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATERAIDSEASONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonStartData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONSTARTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndNoteLabelStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDENDNOTELABELSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonEndData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONENDDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSettlementEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSETTLEMENTENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDOPENRAIDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenRaidBossGroupVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenRaidBossGroupVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTOPENRAIDBOSSGROUPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankingRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDRANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxSeasonRewardGauage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDMAXSEASONREWARDGAUAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackedSeasonRewardGauge(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSTACKEDSEASONREWARDGAUGE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStackedSeasonRewardGaugeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATESTACKEDSEASONREWARDGAUGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStackedSeasonRewardGaugeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTSTACKEDSEASONREWARDGAUGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ADDSEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_CREATESEASONREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_STARTSEASONREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidSeasonManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_ENDRAIDSEASONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_FINISHRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidSeasonManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCEL_FINISHSIZEPREFIXEDRAIDSEASONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

