#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentTreasureCellRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0EE70)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETROOTASEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0EE80)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETROOTASEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0EEE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B0EF70)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B0EF40)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B0EF90)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B0EFE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETLOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B0F020)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0F040)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B0F0A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B0F0E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B0F100)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0F160)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B0F1A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0F1C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0F220)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B0F260)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0F280)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0F4C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B0F380)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B0F440)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0F410)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F4E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F570)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B0F3E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F5B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F640)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0F3B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F680)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0F710)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ENDEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0F470)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_FINISHEVENTCONTENTTREASURECELLREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0F750)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASURECELLREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0F770)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentTreasureCellRewardExcel_TypeDefinitionIndex = 17898;

	class EventContentTreasureCellRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentTreasureCellRewardExcel* GetRootAsEventContentTreasureCellRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureCellRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETROOTASEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureCellRewardExcel* GetRootAsEventContentTreasureCellRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentTreasureCellRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureCellRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentTreasureCellRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETROOTASEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureCellRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureCellRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCodeIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETLOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentTreasureCellRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentTreasureCellRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentTreasureCellRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_ENDEVENTCONTENTTREASURECELLREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentTreasureCellRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_FINISHEVENTCONTENTTREASURECELLREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentTreasureCellRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASURECELLREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

