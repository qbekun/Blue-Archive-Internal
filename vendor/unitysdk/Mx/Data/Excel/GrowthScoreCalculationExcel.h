#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GrowthScoreCalculationExcel; }
namespace FlatData { class GrowthFactor; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B43E40)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GETROOTASGROWTHSCORECALCULATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B43E50)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GETROOTASGROWTHSCORECALCULATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B43EB0)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B43F40)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B43F10)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B43F60)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_INCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B43FB0)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_CONVERSIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1B44000)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_CREATEGROWTHSCORECALCULATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B44050)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_STARTGROWTHSCORECALCULATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B441F0)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B44140)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDINCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B44170)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDCONVERSIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1B44110)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ENDGROWTHSCORECALCULATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B441A0)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_FINISHGROWTHSCORECALCULATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B44210)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_FINISHSIZEPREFIXEDGROWTHSCORECALCULATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B44230)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GrowthScoreCalculationExcel_TypeDefinitionIndex = 18135;

	class GrowthScoreCalculationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GrowthScoreCalculationExcel* GetRootAsGrowthScoreCalculationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GrowthScoreCalculationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GETROOTASGROWTHSCORECALCULATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GrowthScoreCalculationExcel* GetRootAsGrowthScoreCalculationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GrowthScoreCalculationExcel* arg)
		{
			return (return (::MX::Data::Excel::GrowthScoreCalculationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GrowthScoreCalculationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GETROOTASGROWTHSCORECALCULATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GrowthScoreCalculationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GrowthScoreCalculationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::GrowthFactor* get_IncludeGrowthFactor()
		{
			return (return (::FlatData::GrowthFactor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_INCLUDEGROWTHFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ConversionCoefficient()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_GET_CONVERSIONCOEFFICIENT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGrowthScoreCalculationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::GrowthFactor* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::GrowthFactor*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_CREATEGROWTHSCORECALCULATIONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGrowthScoreCalculationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_STARTGROWTHSCORECALCULATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIncludeGrowthFactor(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GrowthFactor* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GrowthFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDINCLUDEGROWTHFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConversionCoefficient(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ADDCONVERSIONCOEFFICIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGrowthScoreCalculationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_ENDGROWTHSCORECALCULATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGrowthScoreCalculationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_FINISHGROWTHSCORECALCULATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGrowthScoreCalculationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCEL_FINISHSIZEPREFIXEDGROWTHSCORECALCULATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

