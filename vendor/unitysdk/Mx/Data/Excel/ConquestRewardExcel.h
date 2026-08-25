#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A65F00)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GETROOTASCONQUESTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A65F10)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GETROOTASCONQUESTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A65F70)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A66000)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A65FD0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A66020)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1A66070)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A660C0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A66110)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1A66160)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A661B0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1A66200)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_CREATECONQUESTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A66250)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_STARTCONQUESTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A66540)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A663D0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x1A66490)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A66460)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A66430)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A663A0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A66400)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1A664C0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ENDCONQUESTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A664F0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_FINISHCONQUESTREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A66560)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCEL_FINISHSIZEPREFIXEDCONQUESTREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A66580)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestRewardExcel_TypeDefinitionIndex = 17278;

	class ConquestRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestRewardExcel* GetRootAsConquestRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GETROOTASCONQUESTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestRewardExcel* GetRootAsConquestRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GETROOTASCONQUESTREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RewardTag* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_CREATECONQUESTREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_STARTCONQUESTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_ENDCONQUESTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_FINISHCONQUESTREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCEL_FINISHSIZEPREFIXEDCONQUESTREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

