#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentChangeExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA19F0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GETROOTASEVENTCONTENTCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA1A00)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GETROOTASEVENTCONTENTCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA1A60)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA1AF0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA1AC0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA1B10)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA1B60)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0x1AA1BB0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AA1C00)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1AA1C50)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA1CA0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1AA1CF0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTID_OFFSET UNITYSDK_OFFSET(0x1AA1D40)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA1D90)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_CREATEEVENTCONTENTCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA1DE0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_STARTEVENTCONTENTCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA2180)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA2010)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA1FE0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDISLAST_OFFSET UNITYSDK_OFFSET(0x1AA2100)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AA20D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1AA1FB0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA20A0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1AA2070)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTID_OFFSET UNITYSDK_OFFSET(0x1AA1F80)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA2040)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ENDEVENTCONTENTCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA2130)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_FINISHEVENTCONTENTCHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA21A0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA21C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentChangeExcel_TypeDefinitionIndex = 17536;

	class EventContentChangeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentChangeExcel* GetRootAsEventContentChangeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GETROOTASEVENTCONTENTCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentChangeExcel* GetRootAsEventContentChangeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentChangeExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentChangeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GETROOTASEVENTCONTENTCHANGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentChangeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_ISLAST_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ChangeCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ChangeCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_GET_CHANGECOSTAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentChangeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_CREATEEVENTCONTENTCHANGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_STARTEVENTCONTENTCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLast(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDISLAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ADDCHANGECOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_ENDEVENTCONTENTCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_FINISHEVENTCONTENTCHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

