#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCardShopExcel; }
namespace FlatData { class Rarity; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9D710)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETROOTASEVENTCONTENTCARDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9D720)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETROOTASEVENTCONTENTCARDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9D780)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A9D810)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A9D7E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9D830)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A9D880)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A9D8D0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1A9D920)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9D970)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1A9D9C0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1A9DA10)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1A9DA60)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_PROBWEIGHT1_OFFSET UNITYSDK_OFFSET(0x1A9DAB0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A9DB00)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A9DB60)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A9DBA0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A9DBC0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A9DC20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A9DC60)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A9DC80)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A9DCE0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A9DD20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEEVENTCONTENTCARDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9DD40)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTEVENTCONTENTCARDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9E1F0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9DFC0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A9DF90)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A9E140)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDCOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1A9DF60)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDCARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9E110)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1A9E170)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1A9E0E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1A9E0B0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDPROBWEIGHT1_OFFSET UNITYSDK_OFFSET(0x1A9E080)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A9E050)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E210)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E2A0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A9E020)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E2E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E370)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A9DFF0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E3B0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9E440)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ENDEVENTCONTENTCARDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9E1A0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_FINISHEVENTCONTENTCARDSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9E480)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9E4A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardShopExcel_TypeDefinitionIndex = 17516;

	class EventContentCardShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCardShopExcel* GetRootAsEventContentCardShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETROOTASEVENTCONTENTCARDSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardShopExcel* GetRootAsEventContentCardShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCardShopExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCardShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETROOTASEVENTCONTENTCARDSHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_CARDGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int32 get_RefreshGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REFRESHGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbWeight1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_PROBWEIGHT1_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCardShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::Rarity* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::Rarity*, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEEVENTCONTENTCARDSHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCardShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTEVENTCONTENTCARDSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDCOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDCARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREFRESHGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbWeight1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDPROBWEIGHT1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCardShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_ENDEVENTCONTENTCARDSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCardShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_FINISHEVENTCONTENTCARDSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCardShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

