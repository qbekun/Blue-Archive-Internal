#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentStageTotalRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0D7A0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETROOTASEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0D7B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETROOTASEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0D810)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B0D8A0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B0D870)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B0D8C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0D910)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REQUIREDEVENTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0D960)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0D9B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B0DA10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B0DA50)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B0DA70)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0DAD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B0DB10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0DB30)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0DB90)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B0DBD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0DBF0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0DE90)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B0DD80)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0DD50)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREQUIREDEVENTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0DD20)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B0DE10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0DEB0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0DF40)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B0DDE0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0DF80)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0E010)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0DDB0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0E050)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0E0E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ENDEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0DE40)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_FINISHEVENTCONTENTSTAGETOTALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0E120)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGETOTALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0E140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageTotalRewardExcel_TypeDefinitionIndex = 17891;

	class EventContentStageTotalRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentStageTotalRewardExcel* GetRootAsEventContentStageTotalRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageTotalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETROOTASEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageTotalRewardExcel* GetRootAsEventContentStageTotalRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentStageTotalRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageTotalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentStageTotalRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETROOTASEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageTotalRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageTotalRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_RequiredEventItemAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REQUIREDEVENTITEMAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentStageTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentStageTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequiredEventItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREQUIREDEVENTITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentStageTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_ENDEVENTCONTENTSTAGETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentStageTotalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_FINISHEVENTCONTENTSTAGETOTALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentStageTotalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGETOTALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

