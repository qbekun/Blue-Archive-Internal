#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDiceRaceTotalRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC25F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETROOTASEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC2600)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETROOTASEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC2660)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AC26F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AC26C0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC2710)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1AC2760)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REQUIREDLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC27B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_DISPLAYLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC2800)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AC2850)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AC28B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AC28F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AC2910)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AC2970)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AC29B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AC29D0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AC2A30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AC2A70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC2A90)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC2D80)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC2C10)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1AC2BE0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREQUIREDLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC2D00)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDDISPLAYLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AC2CD0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AC2CA0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2DA0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2E30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AC2C70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2E70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2F00)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AC2C40)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2F40)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC2FD0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ENDEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC2D30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_FINISHEVENTCONTENTDICERACETOTALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC3010)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACETOTALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC3030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceTotalRewardExcel_TypeDefinitionIndex = 17692;

	class EventContentDiceRaceTotalRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel* GetRootAsEventContentDiceRaceTotalRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETROOTASEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel* GetRootAsEventContentDiceRaceTotalRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETROOTASEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RequiredLapFinishCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REQUIREDLAPFINISHCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayLapFinishCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_DISPLAYLAPFINISHCOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDiceRaceTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDiceRaceTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequiredLapFinishCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREQUIREDLAPFINISHCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayLapFinishCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDDISPLAYLAPFINISHCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDiceRaceTotalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_ENDEVENTCONTENTDICERACETOTALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDiceRaceTotalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_FINISHEVENTCONTENTDICERACETOTALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDiceRaceTotalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACETOTALREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACETOTALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

