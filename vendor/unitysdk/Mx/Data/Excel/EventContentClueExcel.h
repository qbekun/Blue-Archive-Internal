#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentClueExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA6450)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETROOTASEVENTCONTENTCLUEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA6460)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETROOTASEVENTCONTENTCLUEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA64C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA6550)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA6520)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA6570)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA65C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AA6610)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_SLOTCLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA6660)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETSLOTCLUEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AA66A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_CLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA66C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETCLUEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AA6700)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AA6720)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AA6780)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA67C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AA67E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AA6840)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AA6880)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA68A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AA6900)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AA6940)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_HINTUSE_OFFSET UNITYSDK_OFFSET(0x1AA6960)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_HINTLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AA69B0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEEVENTCONTENTCLUEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA6A00)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTEVENTCONTENTCLUEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA6E00)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA6C00)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDCLUEID_OFFSET UNITYSDK_OFFSET(0x1AA6BD0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AA6D50)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDSLOTCLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA6D20)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDCLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA6CF0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AA6CC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA6E20)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA6EB0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AA6C90)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA6EF0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA6F80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6C60)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA6FC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA7050)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDHINTUSE_OFFSET UNITYSDK_OFFSET(0x1AA6D80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDHINTLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AA6C30)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ENDEVENTCONTENTCLUEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA6DB0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_FINISHEVENTCONTENTCLUEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA7090)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA70B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueExcel_TypeDefinitionIndex = 17560;

	class EventContentClueExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentClueExcel* GetRootAsEventContentClueExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETROOTASEVENTCONTENTCLUEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueExcel* GetRootAsEventContentClueExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentClueExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentClueExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETROOTASEVENTCONTENTCLUEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_CLUEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SlotClueImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_SLOTCLUEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSlotClueImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETSLOTCLUEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ClueImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_CLUEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClueImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETCLUEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HintUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_HINTUSE_OFFSET))(nullptr);
		}

		::System::UInt32 get_Hintlocalizeid()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_GET_HINTLOCALIZEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentClueExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEEVENTCONTENTCLUEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentClueExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTEVENTCONTENTCLUEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDCLUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotClueImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDSLOTCLUEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDCLUEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHintUse(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDHINTUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHintlocalizeid(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ADDHINTLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentClueExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_ENDEVENTCONTENTCLUEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentClueExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_FINISHEVENTCONTENTCLUEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentClueExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

