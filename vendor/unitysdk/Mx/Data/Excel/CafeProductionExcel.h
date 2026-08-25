#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CafeProductionExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19FA0A0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GETROOTASCAFEPRODUCTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19FA0B0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GETROOTASCAFEPRODUCTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19FA110)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19FA1A0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19FA170)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FA1C0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19FA210)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEPRODUCTIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19FA260)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEPRODUCTIONPARCELID_OFFSET UNITYSDK_OFFSET(0x19FA2B0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELPRODUCTIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x19FA300)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELPRODUCTIONCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x19FA350)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELSTORAGEMAX_OFFSET UNITYSDK_OFFSET(0x19FA3A0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_CREATECAFEPRODUCTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19FA3F0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_STARTCAFEPRODUCTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19FA6E0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEID_OFFSET UNITYSDK_OFFSET(0x19FA630)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDRANK_OFFSET UNITYSDK_OFFSET(0x19FA600)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEPRODUCTIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19FA660)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEPRODUCTIONPARCELID_OFFSET UNITYSDK_OFFSET(0x19FA5D0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELPRODUCTIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x19FA5A0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELPRODUCTIONCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x19FA570)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELSTORAGEMAX_OFFSET UNITYSDK_OFFSET(0x19FA540)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ENDCAFEPRODUCTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19FA690)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_FINISHCAFEPRODUCTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FA700)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_FINISHSIZEPREFIXEDCAFEPRODUCTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FA720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeProductionExcel_TypeDefinitionIndex = 16847;

	class CafeProductionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CafeProductionExcel* GetRootAsCafeProductionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeProductionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GETROOTASCAFEPRODUCTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CafeProductionExcel* GetRootAsCafeProductionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CafeProductionExcel* arg)
		{
			return (return (::MX::Data::Excel::CafeProductionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CafeProductionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GETROOTASCAFEPRODUCTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CafeProductionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeProductionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_RANK_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_CafeProductionParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEPRODUCTIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeProductionParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_CAFEPRODUCTIONPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelProductionCoefficient()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELPRODUCTIONCOEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelProductionCorrectionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELPRODUCTIONCORRECTIONVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelStorageMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_GET_PARCELSTORAGEMAX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCafeProductionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_CREATECAFEPRODUCTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCafeProductionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_STARTCAFEPRODUCTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCafeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeProductionParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEPRODUCTIONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeProductionParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDCAFEPRODUCTIONPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelProductionCoefficient(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELPRODUCTIONCOEFFICIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelProductionCorrectionValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELPRODUCTIONCORRECTIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelStorageMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ADDPARCELSTORAGEMAX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCafeProductionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_ENDCAFEPRODUCTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCafeProductionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_FINISHCAFEPRODUCTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCafeProductionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCEL_FINISHSIZEPREFIXEDCAFEPRODUCTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

