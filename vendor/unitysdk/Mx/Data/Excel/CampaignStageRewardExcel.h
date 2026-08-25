#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignStageRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A04810)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GETROOTASCAMPAIGNSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A04820)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GETROOTASCAMPAIGNSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A04880)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A04910)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A048E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A04930)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1A04980)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A049D0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A04A20)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A04A70)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A04AC0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1A04B10)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_CREATECAMPAIGNSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A04B60)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_STARTCAMPAIGNSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A04E50)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A04CE0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x1A04DA0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A04D70)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A04D40)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A04CB0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A04D10)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1A04DD0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ENDCAMPAIGNSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A04E00)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_FINISHCAMPAIGNSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A04E70)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A04E90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignStageRewardExcel_TypeDefinitionIndex = 16889;

	class CampaignStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignStageRewardExcel* GetRootAsCampaignStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GETROOTASCAMPAIGNSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignStageRewardExcel* GetRootAsCampaignStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GETROOTASCAMPAIGNSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_StageRewardProb()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageRewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_STAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RewardTag* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_CREATECAMPAIGNSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_STARTCAMPAIGNSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_ENDCAMPAIGNSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_FINISHCAMPAIGNSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

