#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TerrainAdaptationFactorExcel; }
namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9E1B0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETROOTASTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9E1C0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETROOTASTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9E220)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C9E2B0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C9E280)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9E2D0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9E320)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_SHOTFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E370)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_BLOCKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E3C0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_ACCURACYFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E410)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_DODGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E460)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_ATTACKPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4B0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINFACTORDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C9E500)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETTERRAINFACTORDESCRIPTIONBYTES_OFFSET UNITYSDK_OFFSET(0x1C9E540)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_CREATETERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9E560)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_STARTTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9E8B0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9E830)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9E800)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDSHOTFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E7A0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDBLOCKFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E770)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDACCURACYFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E740)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDDODGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E710)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDATTACKPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x1C9E6E0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINFACTORDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C9E7D0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ENDTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9E860)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_FINISHTERRAINADAPTATIONFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9E8D0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_FINISHSIZEPREFIXEDTERRAINADAPTATIONFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9E8F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TerrainAdaptationFactorExcel_TypeDefinitionIndex = 19586;

	class TerrainAdaptationFactorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TerrainAdaptationFactorExcel* GetRootAsTerrainAdaptationFactorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TerrainAdaptationFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETROOTASTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TerrainAdaptationFactorExcel* GetRootAsTerrainAdaptationFactorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TerrainAdaptationFactorExcel* arg)
		{
			return (return (::MX::Data::Excel::TerrainAdaptationFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TerrainAdaptationFactorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETROOTASTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TerrainAdaptationFactorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TerrainAdaptationFactorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::StageTopography* get_TerrainAdaptation()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_TerrainAdaptationStat()
		{
			return (return (::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINADAPTATIONSTAT_OFFSET))(nullptr);
		}

		::System::Int64 get_ShotFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_SHOTFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BlockFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_BLOCKFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AccuracyFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_ACCURACYFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_DodgeFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_DODGEFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackPowerFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_ATTACKPOWERFACTOR_OFFSET))(nullptr);
		}

		::System::String* get_TerrainFactorDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GET_TERRAINFACTORDESCRIPTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetTerrainFactorDescriptionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_GETTERRAINFACTORDESCRIPTIONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTerrainAdaptationFactorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg, ::FlatData::TerrainAdaptationStat* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_CREATETERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTerrainAdaptationFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_STARTTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTerrainAdaptation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINADAPTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTerrainAdaptationStat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TerrainAdaptationStat* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINADAPTATIONSTAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShotFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDSHOTFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBlockFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDBLOCKFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccuracyFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDACCURACYFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDodgeFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDDODGEFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackPowerFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDATTACKPOWERFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTerrainFactorDescription(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ADDTERRAINFACTORDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTerrainAdaptationFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_ENDTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTerrainAdaptationFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_FINISHTERRAINADAPTATIONFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTerrainAdaptationFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCEL_FINISHSIZEPREFIXEDTERRAINADAPTATIONFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

