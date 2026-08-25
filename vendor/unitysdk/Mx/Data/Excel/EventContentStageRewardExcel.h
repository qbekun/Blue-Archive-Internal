#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentStageRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0C3F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GETROOTASEVENTCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0C400)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GETROOTASEVENTCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0C460)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B0C4F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B0C4C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B0C510)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1B0C560)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B0C5B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0C600)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B0C650)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0C6A0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1B0C6F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_CREATEEVENTCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0C740)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_STARTEVENTCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0CA30)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B0C8C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x1B0C980)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B0C950)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0C920)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1B0C890)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0C8F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1B0C9B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ENDEVENTCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0C9E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_FINISHEVENTCONTENTSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0CA50)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0CA70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageRewardExcel_TypeDefinitionIndex = 17884;

	class EventContentStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentStageRewardExcel* GetRootAsEventContentStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GETROOTASEVENTCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageRewardExcel* GetRootAsEventContentStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GETROOTASEVENTCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RewardTag* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_CREATEEVENTCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_STARTEVENTCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_ENDEVENTCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_FINISHEVENTCONTENTSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

