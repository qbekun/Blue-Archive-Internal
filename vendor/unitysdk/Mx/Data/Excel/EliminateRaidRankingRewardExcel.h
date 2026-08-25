#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidRankingRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7F210)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETROOTASELIMINATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7F220)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETROOTASELIMINATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7F280)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A7F310)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A7F2E0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A7F330)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A7F380)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTART_OFFSET UNITYSDK_OFFSET(0x1A7F3D0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKEND_OFFSET UNITYSDK_OFFSET(0x1A7F420)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1A7F470)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDTW_OFFSET UNITYSDK_OFFSET(0x1A7F4C0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1A7F510)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1A7F560)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1A7F5B0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDNA_OFFSET UNITYSDK_OFFSET(0x1A7F600)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1A7F650)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1A7F6A0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_PERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x1A7F6F0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_PERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1A7F740)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1A7F790)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A7F7E0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A7F840)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A7F880)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A7F8A0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A7F900)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A7F940)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1A7F960)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUENAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1A7F9B0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7F9F0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A7FA50)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A7FA90)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEELIMINATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7FAB0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTELIMINATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A801D0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A80060)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A80030)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTART_OFFSET UNITYSDK_OFFSET(0x1A80000)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKEND_OFFSET UNITYSDK_OFFSET(0x1A7FFD0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1A7FFA0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDTW_OFFSET UNITYSDK_OFFSET(0x1A7FF70)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1A7FF40)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1A7FF10)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1A7FEE0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDNA_OFFSET UNITYSDK_OFFSET(0x1A7FEB0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1A7FE80)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1A7FE50)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDPERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x1A7FE20)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDPERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1A7FDF0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDTIER_OFFSET UNITYSDK_OFFSET(0x1A80150)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A80120)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A801F0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A80280)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A800F0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A802C0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A80350)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1A800C0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUENAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A80390)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUENAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A80420)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A80090)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A80460)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A804F0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ENDELIMINATERAIDRANKINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A80180)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_FINISHELIMINATERAIDRANKINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A80530)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDRANKINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A80550)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidRankingRewardExcel_TypeDefinitionIndex = 17385;

	class EliminateRaidRankingRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidRankingRewardExcel* GetRootAsEliminateRaidRankingRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidRankingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETROOTASELIMINATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidRankingRewardExcel* GetRootAsEliminateRaidRankingRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidRankingRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidRankingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidRankingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETROOTASELIMINATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidRankingRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidRankingRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKEND_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTTW_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDTW_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTASIA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDASIA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTNA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDNA_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStartGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKSTARTGLOBAL_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEndGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_RANKENDGLOBAL_OFFSET))(nullptr);
		}

		::System::Int64 get_PercentRankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_PERCENTRANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_PercentRankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_PERCENTRANKEND_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_TIER_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* RewardParcelUniqueName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELUNIQUENAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelUniqueNameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELUNIQUENAMELENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEELIMINATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTELIMINATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRankingRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTNA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDNA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStartGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKSTARTGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEndGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDRANKENDGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPercentRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDPERCENTRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPercentRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDPERCENTRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELUNIQUENAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelUniqueNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELUNIQUENAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelUniqueNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELUNIQUENAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidRankingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_ENDELIMINATERAIDRANKINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidRankingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_FINISHELIMINATERAIDRANKINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidRankingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDRANKINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

