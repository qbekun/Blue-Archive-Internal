#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentClueSearchRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA9EA0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA9EB0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA9F10)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA9FA0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA9F70)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AA9FC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AAA010)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AAA070)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AAA0B0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AAA0D0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAA130)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AAA170)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AAA190)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAA1F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AAA230)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAA250)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAA440)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AAA330)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AAA3C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA460)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA4F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AAA390)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA530)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AAA360)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA600)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAA690)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ENDEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAA3F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_FINISHEVENTCONTENTCLUESEARCHREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAA6D0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAA6F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchRewardExcel_TypeDefinitionIndex = 17577;

	class EventContentClueSearchRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRewardExcel* GetRootAsEventContentClueSearchRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRewardExcel* GetRootAsEventContentClueSearchRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentClueSearchRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentClueSearchRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentClueSearchRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentClueSearchRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentClueSearchRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_ENDEVENTCONTENTCLUESEARCHREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentClueSearchRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_FINISHEVENTCONTENTCLUESEARCHREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentClueSearchRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

