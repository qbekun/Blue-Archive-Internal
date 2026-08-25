#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidRankingRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C42AC0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETROOTASRAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C42AD0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETROOTASRAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C42B30)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C42BC0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C42B90)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C42BE0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C42C30)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTART_OFFSET UNITYSDK_OFFSET(0x1C42C80)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKEND_OFFSET UNITYSDK_OFFSET(0x1C42CD0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1C42D20)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDTW_OFFSET UNITYSDK_OFFSET(0x1C42D70)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1C42DC0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1C42E10)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1C42E60)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDNA_OFFSET UNITYSDK_OFFSET(0x1C42EB0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C42F00)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C42F50)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_PERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x1C42FA0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_PERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1C42FF0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1C43040)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C43090)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C430F0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C43130)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C43150)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C431B0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C431F0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C43210)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C43270)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C432B0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C432D0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTRAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C439A0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C43860)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C43830)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTART_OFFSET UNITYSDK_OFFSET(0x1C43800)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKEND_OFFSET UNITYSDK_OFFSET(0x1C437D0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1C437A0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDTW_OFFSET UNITYSDK_OFFSET(0x1C43770)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1C43740)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1C43710)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1C436E0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDNA_OFFSET UNITYSDK_OFFSET(0x1C436B0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C43680)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C43650)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDPERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x1C43620)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDPERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1C435F0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDTIER_OFFSET UNITYSDK_OFFSET(0x1C43920)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C438F0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C439C0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C43A50)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C438C0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C43A90)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C43B20)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C43890)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C43B60)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C43BF0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ENDRAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C43950)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_FINISHRAIDRANKINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C43C30)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_FINISHSIZEPREFIXEDRAIDRANKINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C43C50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidRankingRewardExcel_TypeDefinitionIndex = 19158;

	class RaidRankingRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidRankingRewardExcel* GetRootAsRaidRankingRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidRankingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETROOTASRAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidRankingRewardExcel* GetRootAsRaidRankingRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidRankingRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidRankingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidRankingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETROOTASRAIDRANKINGREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidRankingRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidRankingRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKEND_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTTW_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDTW_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTASIA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDASIA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTNA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDNA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKSTARTGLOBAL_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_RANKENDGLOBAL_OFFSET))(nullptr);
		}

		::System::Int64 get_PercentRankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_PERCENTRANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_PercentRankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_PERCENTRANKEND_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_TIER_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTRAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRankingRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTNA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDNA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKSTARTGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDRANKENDGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPercentRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDPERCENTRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPercentRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDPERCENTRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_ENDRAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidRankingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_FINISHRAIDRANKINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidRankingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCEL_FINISHSIZEPREFIXEDRAIDRANKINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

