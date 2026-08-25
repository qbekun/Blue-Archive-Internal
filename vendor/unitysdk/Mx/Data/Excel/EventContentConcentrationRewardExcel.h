#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentConcentrationRewardExcel; }
namespace FlatData { class ConcentrationRewardType; }
namespace FlatData { class Rarity; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB3A50)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB3A60)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB3AC0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AB3B50)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AB3B20)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB3B70)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB3BC0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB3C10)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1AB3C60)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1AB3CB0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1AB3D00)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AB3D50)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AB3DB0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AB3DF0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AB3E10)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AB3E70)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AB3EB0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AB3ED0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AB3F30)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AB3F70)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB3F90)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB4340)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB4170)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB4140)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDCONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB4290)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1AB4260)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0x1AB4230)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDISLOOP_OFFSET UNITYSDK_OFFSET(0x1AB42C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AB4200)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB4360)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB43F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AB41D0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB4430)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB44C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AB41A0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB4500)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AB4590)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ENDEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB42F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_FINISHEVENTCONTENTCONCENTRATIONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB45D0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB45F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationRewardExcel_TypeDefinitionIndex = 17621;

	class EventContentConcentrationRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationRewardExcel* GetRootAsEventContentConcentrationRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationRewardExcel* GetRootAsEventContentConcentrationRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentConcentrationRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentConcentrationRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ConcentrationRewardType* get_ConcentrationRewardType()
		{
			return (return (::FlatData::ConcentrationRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_CONCENTRATIONREWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_ISLOOP_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentConcentrationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConcentrationRewardType* arg, ::FlatData::Rarity* arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConcentrationRewardType*, ::FlatData::Rarity*, ::System::Int32, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentConcentrationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConcentrationRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConcentrationRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConcentrationRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDCONCENTRATIONREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLoop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDISLOOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentConcentrationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_ENDEVENTCONTENTCONCENTRATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentConcentrationRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_FINISHEVENTCONTENTCONCENTRATIONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentConcentrationRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

