#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamEndingRewardExcel; }
namespace FlatData { class DreamMakerEndingRewardType; }
namespace FlatData { class DreamMakerEndingType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB17F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETROOTASMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB1800)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETROOTASMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB1860)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BB18F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BB18C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB1910)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB1960)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB19B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_DREAMMAKERENDINGREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1A00)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_DREAMMAKERENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1A50)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1AA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1B00)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BB1B40)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BB1B60)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1BC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BB1C00)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BB1C20)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1C80)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BB1CC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB1CE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB2030)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB1E90)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB1E60)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB1FB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDDREAMMAKERENDINGREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1F80)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDDREAMMAKERENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1F50)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB1F20)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB2050)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB20E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BB1EF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB2120)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB21B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BB1EC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB21F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB2280)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ENDMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB1FE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_FINISHMINIGAMEDREAMENDINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB22C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMENDINGREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB22E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamEndingRewardExcel_TypeDefinitionIndex = 18627;

	class MiniGameDreamEndingRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingRewardExcel* GetRootAsMiniGameDreamEndingRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETROOTASMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingRewardExcel* GetRootAsMiniGameDreamEndingRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamEndingRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamEndingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETROOTASMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EndingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_ENDINGID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingRewardType* get_DreamMakerEndingRewardType()
		{
			return (return (::FlatData::DreamMakerEndingRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_DREAMMAKERENDINGREWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingType* get_DreamMakerEndingType()
		{
			return (return (::FlatData::DreamMakerEndingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_DREAMMAKERENDINGTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamEndingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatData::DreamMakerEndingRewardType* arg, ::FlatData::DreamMakerEndingType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatData::DreamMakerEndingRewardType*, ::FlatData::DreamMakerEndingType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamEndingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndingId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDENDINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerEndingRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerEndingRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerEndingRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDDREAMMAKERENDINGREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerEndingType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerEndingType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerEndingType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDDREAMMAKERENDINGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamEndingRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_ENDMINIGAMEDREAMENDINGREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamEndingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_FINISHMINIGAMEDREAMENDINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamEndingRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMENDINGREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

