#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidStageSeasonRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4CA00)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETROOTASRAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4CA10)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETROOTASRAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4CA70)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C4CB00)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C4CAD0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4CB20)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4CB70)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C4CBD0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C4CC10)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C4CC30)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4CC90)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C4CCD0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4CCF0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4CD50)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C4CD90)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4CDB0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTRAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4CFA0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4CE90)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4CF20)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4CFC0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4D050)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C4CEF0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4D090)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4D120)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4CEC0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4D160)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4D1F0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ENDRAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4CF50)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_FINISHRAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4D230)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_FINISHSIZEPREFIXEDRAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4D250)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageSeasonRewardExcel_TypeDefinitionIndex = 19196;

	class RaidStageSeasonRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidStageSeasonRewardExcel* GetRootAsRaidStageSeasonRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageSeasonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETROOTASRAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidStageSeasonRewardExcel* GetRootAsRaidStageSeasonRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidStageSeasonRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidStageSeasonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidStageSeasonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETROOTASRAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidStageSeasonRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageSeasonRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* SeasonRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_SEASONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTRAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_ENDRAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidStageSeasonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_FINISHRAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidStageSeasonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCEL_FINISHSIZEPREFIXEDRAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

