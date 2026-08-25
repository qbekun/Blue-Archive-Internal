#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentLocationExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE5E40)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETROOTASEVENTCONTENTLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE5E50)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETROOTASEVENTCONTENTLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE5EB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE5F40)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE5F10)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE5F60)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE5FB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE6000)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1AE6050)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETPREFABPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AE6090)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_LOCATIONRESETSCHEDULECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE60B0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE6100)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE6150)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE61A0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE61F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE6240)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_INFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE6290)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_CREATEEVENTCONTENTLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE62E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_STARTEVENTCONTENTLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE6740)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE65D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AE65A0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE66C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1AE6690)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDLOCATIONRESETSCHEDULECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE6660)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE6630)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE6570)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE6540)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE6600)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE6510)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE64E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ENDEVENTCONTENTLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE66F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_FINISHEVENTCONTENTLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE6760)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE6780)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLocationExcel_TypeDefinitionIndex = 17727;

	class EventContentLocationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentLocationExcel* GetRootAsEventContentLocationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETROOTASEVENTCONTENTLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentLocationExcel* GetRootAsEventContentLocationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentLocationExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETROOTASEVENTCONTENTLOCATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentLocationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_PREFABPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GETPREFABPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_LocationResetScheduleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_LOCATIONRESETSCHEDULECOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ScheduleEventPointCostParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleEventPointCostParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleEventPointCostParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_SCHEDULEEVENTPOINTCOSTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_GET_INFORMATIONGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentLocationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_CREATEEVENTCONTENTLOCATIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_STARTEVENTCONTENTLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDPREFABPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationResetScheduleCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDLOCATIONRESETSCHEDULECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleEventPointCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleEventPointCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleEventPointCostParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDSCHEDULEEVENTPOINTCOSTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ADDINFORMATIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_ENDEVENTCONTENTLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_FINISHEVENTCONTENTLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

