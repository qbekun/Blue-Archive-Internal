#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace FlatData { class EventContentScenarioConditionType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF6E40)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETROOTASEVENTCONTENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF6E50)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETROOTASEVENTCONTENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF6EB0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AF6F40)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AF6F10)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF6F60)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF6FB0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RETURNSCENARIOPLAY_OFFSET UNITYSDK_OFFSET(0x1AF7000)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REPLAYDISPLAYGROUP_OFFSET UNITYSDK_OFFSET(0x1AF7050)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1AF70A0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1AF70F0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF7140)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISMEETUP_OFFSET UNITYSDK_OFFSET(0x1AF7190)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISOMNIBUS_OFFSET UNITYSDK_OFFSET(0x1AF71E0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF7230)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_SCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF7290)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF72D0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_SCENARIOCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF72F0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF7340)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CONDITIONEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF7390)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CLEAREDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF73E0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONSUMMARYLOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1AF7430)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AF7480)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETRECOLLECTIONRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF74C0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISRECOLLECTIONHORIZON_OFFSET UNITYSDK_OFFSET(0x1AF74E0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF7530)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AF7590)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF75D0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0x1AF75F0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF7650)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF7690)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF76B0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF7710)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AF7750)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEEVENTCONTENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF7770)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTEVENTCONTENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF7EF0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AF7C00)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF7BD0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRETURNSCENARIOPLAY_OFFSET UNITYSDK_OFFSET(0x1AF7E70)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREPLAYDISPLAYGROUP_OFFSET UNITYSDK_OFFSET(0x1AF7D80)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1AF7BA0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1AF7B70)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF7E40)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISMEETUP_OFFSET UNITYSDK_OFFSET(0x1AF7E10)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISOMNIBUS_OFFSET UNITYSDK_OFFSET(0x1AF7DE0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF7D50)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATESCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF7F10)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF7FA0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDSCENARIOCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF7D20)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF7B40)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCONDITIONEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF7B10)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCLEAREDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF7AE0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONSUMMARYLOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1AF7CF0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AF7CC0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISRECOLLECTIONHORIZON_OFFSET UNITYSDK_OFFSET(0x1AF7DB0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF7C90)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF7FE0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF8070)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1AF7C60)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF80B0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF8140)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF7C30)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF8180)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF8210)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ENDEVENTCONTENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF7EA0)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_FINISHEVENTCONTENTSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF8250)
#define MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF8270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentScenarioExcel_TypeDefinitionIndex = 17802;

	class EventContentScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentScenarioExcel* GetRootAsEventContentScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETROOTASEVENTCONTENTSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentScenarioExcel* GetRootAsEventContentScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETROOTASEVENTCONTENTSCENARIOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_ReturnScenarioPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RETURNSCENARIOPLAY_OFFSET))(nullptr);
		}

		::System::Int32 get_ReplayDisplayGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REPLAYDISPLAYGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_RecollectionNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRecollection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISRECOLLECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMeetup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISMEETUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOmnibus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISOMNIBUS_OFFSET))(nullptr);
		}

		::System::Int64 ScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_SCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_SCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::EventContentScenarioConditionType* get_ScenarioConditionType()
		{
			return (return (::FlatData::EventContentScenarioConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_SCENARIOCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionEventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CONDITIONEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearedScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_CLEAREDSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_RecollectionSummaryLocalizeScenarioId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONSUMMARYLOCALIZESCENARIOID_OFFSET))(nullptr);
		}

		::System::String* get_RecollectionResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_RECOLLECTIONRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecollectionResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETRECOLLECTIONRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRecollectionHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_ISRECOLLECTIONHORIZON_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::EventContentScenarioConditionType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatData::EventContentScenarioConditionType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEEVENTCONTENTSCENARIOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTEVENTCONTENTSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReturnScenarioPlay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRETURNSCENARIOPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplayDisplayGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREPLAYDISPLAYGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecollectionNumber(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRecollection(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISRECOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsMeetup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISMEETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsOmnibus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISOMNIBUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATESCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentScenarioConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentScenarioConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDSCENARIOCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCONDITIONAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCONDITIONEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearedScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDCLEAREDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecollectionSummaryLocalizeScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONSUMMARYLOCALIZESCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecollectionResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDRECOLLECTIONRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRecollectionHorizon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDISRECOLLECTIONHORIZON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_ENDEVENTCONTENTSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_FINISHEVENTCONTENTSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSCENARIOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

