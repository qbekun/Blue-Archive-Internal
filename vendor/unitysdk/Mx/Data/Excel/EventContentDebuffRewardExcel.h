#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDebuffRewardExcel; }
namespace FlatData { class EventContentItemType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABB0E0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GETROOTASEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABB0F0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GETROOTASEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABB150)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1ABB1E0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1ABB1B0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABB200)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABB250)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1ABB2A0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_REWARDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1ABB2F0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_CREATEEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABB340)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_STARTEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABB530)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABB480)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABB450)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1ABB4B0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDREWARDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1ABB420)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ENDEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABB4E0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_FINISHEVENTCONTENTDEBUFFREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABB550)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDEBUFFREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABB570)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDebuffRewardExcel_TypeDefinitionIndex = 17654;

	class EventContentDebuffRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDebuffRewardExcel* GetRootAsEventContentDebuffRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDebuffRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GETROOTASEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDebuffRewardExcel* GetRootAsEventContentDebuffRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDebuffRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDebuffRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDebuffRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GETROOTASEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDebuffRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDebuffRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::EventContentItemType* get_EventContentItemType()
		{
			return (return (::FlatData::EventContentItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_EVENTCONTENTITEMTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardPercentage()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_GET_REWARDPERCENTAGE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDebuffRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EventContentItemType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::EventContentItemType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_CREATEEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDebuffRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_STARTEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentItemType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentItemType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentItemType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardPercentage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ADDREWARDPERCENTAGE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDebuffRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_ENDEVENTCONTENTDEBUFFREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDebuffRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_FINISHEVENTCONTENTDEBUFFREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDebuffRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDEBUFFREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

