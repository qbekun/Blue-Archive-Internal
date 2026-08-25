#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidStageLimitedRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A86180)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETROOTASELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A86190)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETROOTASELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A861F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A86280)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A86250)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A862A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A862F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A86350)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A86390)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A863B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A86410)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A86450)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A86470)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A864D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A86510)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATEELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A86530)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A86720)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A86610)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A866A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A86740)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A867D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A86670)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A86810)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A868A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A86640)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A868E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A86970)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ENDELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A866D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_FINISHELIMINATERAIDSTAGELIMITEDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A869B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGELIMITEDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A869D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageLimitedRewardExcel_TypeDefinitionIndex = 17406;

	class EliminateRaidStageLimitedRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel* GetRootAsEliminateRaidStageLimitedRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETROOTASELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel* GetRootAsEliminateRaidStageLimitedRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETROOTASELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_LimitedRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* LimitedRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LimitedRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitedRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 LimitedRewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LimitedRewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitedRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 LimitedRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_LIMITEDREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LimitedRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GET_LIMITEDREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitedRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_GETLIMITEDREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidStageLimitedRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATEELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidStageLimitedRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLimitedRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLimitedRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLimitedRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLimitedRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLimitedRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitedRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ADDLIMITEDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLimitedRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_CREATELIMITEDREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLimitedRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_STARTLIMITEDREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidStageLimitedRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_ENDELIMINATERAIDSTAGELIMITEDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidStageLimitedRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_FINISHELIMINATERAIDSTAGELIMITEDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidStageLimitedRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGELIMITEDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

