#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidStageSeasonRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A88A10)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETROOTASELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A88A20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETROOTASELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A88A80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A88B10)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A88AE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A88B30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A88B80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A88BE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A88C20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A88C40)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A88CA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A88CE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A88D00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A88D60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A88DA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATEELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A88DC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A88FB0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A88EA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A88F30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A88FD0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A89060)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A88F00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A890A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A89130)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A88ED0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A89170)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A89200)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ENDELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A88F60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_FINISHELIMINATERAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A89240)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A89260)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageSeasonRewardExcel_TypeDefinitionIndex = 17420;

	class EliminateRaidStageSeasonRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel* GetRootAsEliminateRaidStageSeasonRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETROOTASELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel* GetRootAsEliminateRaidStageSeasonRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETROOTASELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* SeasonRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SeasonRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_SEASONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SeasonRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GET_SEASONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_GETSEASONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATEELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ADDSEASONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSeasonRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_CREATESEASONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSeasonRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_STARTSEASONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidStageSeasonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_ENDELIMINATERAIDSTAGESEASONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidStageSeasonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_FINISHELIMINATERAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidStageSeasonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGESEASONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

