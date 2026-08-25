#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGEncounterRewardExcel; }
namespace FlatData { class TBGOptionSuccessType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C04FF0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GETROOTASMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C05000)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GETROOTASMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C05060)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C050F0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C050C0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C05110)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C05160)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_TBGOPTIONSUCCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C051B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PAREMETER_OFFSET UNITYSDK_OFFSET(0x1C05200)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C05250)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C052A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1C052F0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1C05340)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_CREATEMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C05390)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_STARTMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C056E0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C055D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C055A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDTBGOPTIONSUCCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C05660)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPAREMETER_OFFSET UNITYSDK_OFFSET(0x1C05570)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C05630)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C05540)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C05510)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1C05600)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ENDMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C05690)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_FINISHMINIGAMETBGENCOUNTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C05700)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C05720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterRewardExcel_TypeDefinitionIndex = 18880;

	class MinigameTBGEncounterRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterRewardExcel* GetRootAsMinigameTBGEncounterRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GETROOTASMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterRewardExcel* GetRootAsMinigameTBGEncounterRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGEncounterRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGEncounterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GETROOTASMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::TBGOptionSuccessType* get_TBGOptionSuccessType()
		{
			return (return (::FlatData::TBGOptionSuccessType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_TBGOPTIONSUCCESSTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Paremeter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PAREMETER_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGEncounterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::TBGOptionSuccessType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::TBGOptionSuccessType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_CREATEMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGEncounterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_STARTMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTBGOptionSuccessType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGOptionSuccessType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGOptionSuccessType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDTBGOPTIONSUCCESSTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParemeter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPAREMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGEncounterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_ENDMINIGAMETBGENCOUNTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGEncounterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_FINISHMINIGAMETBGENCOUNTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGEncounterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

