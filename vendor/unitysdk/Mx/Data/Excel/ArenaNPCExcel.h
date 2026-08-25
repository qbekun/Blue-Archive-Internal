#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaNPCExcel; }
namespace FlatData { class Rarity; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D1380)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETROOTASARENANPCEXCEL_OFFSET UNITYSDK_OFFSET(0x19D1390)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETROOTASARENANPCEXCEL_OFFSET UNITYSDK_OFFSET(0x19D13F0)
#define MX_DATA_EXCEL_ARENANPCEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D1480)
#define MX_DATA_EXCEL_ARENANPCEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D1450)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D14A0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19D14F0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x19D1540)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCLEVEL_OFFSET UNITYSDK_OFFSET(0x19D1590)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCLEVELDEVIATION_OFFSET UNITYSDK_OFFSET(0x19D15E0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCSTARGRADE_OFFSET UNITYSDK_OFFSET(0x19D1630)
#define MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONCHARACTERRARITIES_OFFSET UNITYSDK_OFFSET(0x19D1680)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONCHARACTERRARITIESLENGTH_OFFSET UNITYSDK_OFFSET(0x19D16E0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONCHARACTERRARITIESBYTES_OFFSET UNITYSDK_OFFSET(0x19D1720)
#define MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONMAINCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x19D1740)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONMAINCHARACTERIDSLENGTH_OFFSET UNITYSDK_OFFSET(0x19D17A0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONMAINCHARACTERIDSBYTES_OFFSET UNITYSDK_OFFSET(0x19D17E0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x19D1800)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONSUPPORTCHARACTERIDSLENGTH_OFFSET UNITYSDK_OFFSET(0x19D1860)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONSUPPORTCHARACTERIDSBYTES_OFFSET UNITYSDK_OFFSET(0x19D18A0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONTSSIDS_OFFSET UNITYSDK_OFFSET(0x19D18C0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONTSSIDSLENGTH_OFFSET UNITYSDK_OFFSET(0x19D1920)
#define MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONTSSIDSBYTES_OFFSET UNITYSDK_OFFSET(0x19D1960)
#define MX_DATA_EXCEL_ARENANPCEXCEL_CREATEARENANPCEXCEL_OFFSET UNITYSDK_OFFSET(0x19D1980)
#define MX_DATA_EXCEL_ARENANPCEXCEL_STARTARENANPCEXCEL_OFFSET UNITYSDK_OFFSET(0x19D1D80)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D1C40)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDRANK_OFFSET UNITYSDK_OFFSET(0x19D1C10)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x19D1BE0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCLEVEL_OFFSET UNITYSDK_OFFSET(0x19D1BB0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCLEVELDEVIATION_OFFSET UNITYSDK_OFFSET(0x19D1B80)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCSTARGRADE_OFFSET UNITYSDK_OFFSET(0x19D1B50)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONCHARACTERRARITIES_OFFSET UNITYSDK_OFFSET(0x19D1D00)
#define MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONCHARACTERRARITIESVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1DA0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONCHARACTERRARITIESVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1E30)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONMAINCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x19D1CD0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONMAINCHARACTERIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1E70)
#define MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONMAINCHARACTERIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1F00)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONSUPPORTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x19D1CA0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONSUPPORTCHARACTERIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1F40)
#define MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONSUPPORTCHARACTERIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D1FD0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONTSSIDS_OFFSET UNITYSDK_OFFSET(0x19D1C70)
#define MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONTSSIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D2010)
#define MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONTSSIDSVECTOR_OFFSET UNITYSDK_OFFSET(0x19D20A0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_ENDARENANPCEXCEL_OFFSET UNITYSDK_OFFSET(0x19D1D30)
#define MX_DATA_EXCEL_ARENANPCEXCEL_FINISHARENANPCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D20E0)
#define MX_DATA_EXCEL_ARENANPCEXCEL_FINISHSIZEPREFIXEDARENANPCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D2100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaNPCExcel_TypeDefinitionIndex = 16651;

	class ArenaNPCExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaNPCExcel* GetRootAsArenaNPCExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaNPCExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETROOTASARENANPCEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaNPCExcel* GetRootAsArenaNPCExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaNPCExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaNPCExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaNPCExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETROOTASARENANPCEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaNPCExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaNPCExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCAccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCLevelDeviation()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCLEVELDEVIATION_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCStarGrade()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_NPCSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::Rarity* ExceptionCharacterRarities(::System::Int32 arg)
		{
			return (return (::FlatData::Rarity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONCHARACTERRARITIES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExceptionCharacterRaritiesLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONCHARACTERRARITIESLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExceptionCharacterRaritiesBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONCHARACTERRARITIESBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExceptionMainCharacterIds(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONMAINCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExceptionMainCharacterIdsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONMAINCHARACTERIDSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExceptionMainCharacterIdsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONMAINCHARACTERIDSBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExceptionSupportCharacterIds(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExceptionSupportCharacterIdsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONSUPPORTCHARACTERIDSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExceptionSupportCharacterIdsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONSUPPORTCHARACTERIDSBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExceptionTSSIds(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_EXCEPTIONTSSIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExceptionTSSIdsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GET_EXCEPTIONTSSIDSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExceptionTSSIdsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_GETEXCEPTIONTSSIDSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaNPCExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_CREATEARENANPCEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaNPCExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_STARTARENANPCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCLevelDeviation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCLEVELDEVIATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCStarGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDNPCSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExceptionCharacterRarities(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONCHARACTERRARITIES_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExceptionCharacterRaritiesVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONCHARACTERRARITIESVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExceptionCharacterRaritiesVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONCHARACTERRARITIESVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExceptionMainCharacterIds(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONMAINCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExceptionMainCharacterIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONMAINCHARACTERIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExceptionMainCharacterIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONMAINCHARACTERIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExceptionSupportCharacterIds(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONSUPPORTCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExceptionSupportCharacterIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONSUPPORTCHARACTERIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExceptionSupportCharacterIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONSUPPORTCHARACTERIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExceptionTSSIds(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ADDEXCEPTIONTSSIDS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExceptionTSSIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_CREATEEXCEPTIONTSSIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExceptionTSSIdsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_STARTEXCEPTIONTSSIDSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaNPCExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_ENDARENANPCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaNPCExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_FINISHARENANPCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaNPCExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCEL_FINISHSIZEPREFIXEDARENANPCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

