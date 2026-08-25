#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterStatsTransExcel; }
namespace FlatData { class StatType; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class StatTransType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3E100)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GETROOTASCHARACTERSTATSTRANSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3E110)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GETROOTASCHARACTERSTATSTRANSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3E170)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A3E200)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A3E1D0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_TRANSSUPPORTSTATS_OFFSET UNITYSDK_OFFSET(0x1A3E220)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E270)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_TRANSSUPPORTSTATSFACTOR_OFFSET UNITYSDK_OFFSET(0x1A3E2C0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_STATTRANSTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E310)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_CREATECHARACTERSTATSTRANSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3E360)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_STARTCHARACTERSTATSTRANSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3E550)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDTRANSSUPPORTSTATS_OFFSET UNITYSDK_OFFSET(0x1A3E4D0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E4A0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDTRANSSUPPORTSTATSFACTOR_OFFSET UNITYSDK_OFFSET(0x1A3E470)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDSTATTRANSTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E440)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ENDCHARACTERSTATSTRANSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3E500)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_FINISHCHARACTERSTATSTRANSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3E570)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATSTRANSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3E590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatsTransExcel_TypeDefinitionIndex = 17103;

	class CharacterStatsTransExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterStatsTransExcel* GetRootAsCharacterStatsTransExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsTransExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GETROOTASCHARACTERSTATSTRANSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatsTransExcel* GetRootAsCharacterStatsTransExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterStatsTransExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsTransExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterStatsTransExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GETROOTASCHARACTERSTATSTRANSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatsTransExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsTransExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::StatType* get_TransSupportStats()
		{
			return (return (::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_TRANSSUPPORTSTATS_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_TransSupportStatsFactor()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_TRANSSUPPORTSTATSFACTOR_OFFSET))(nullptr);
		}

		::FlatData::StatTransType* get_StatTransType()
		{
			return (return (::FlatData::StatTransType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_GET_STATTRANSTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterStatsTransExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatType* arg, ::FlatData::EchelonExtensionType* arg, ::System::Int32 arg, ::FlatData::StatTransType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::FlatData::StatTransType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_CREATECHARACTERSTATSTRANSEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterStatsTransExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_STARTCHARACTERSTATSTRANSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTransSupportStats(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDTRANSSUPPORTSTATS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransSupportStatsFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDTRANSSUPPORTSTATSFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatTransType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatTransType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatTransType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ADDSTATTRANSTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterStatsTransExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_ENDCHARACTERSTATSTRANSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterStatsTransExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_FINISHCHARACTERSTATSTRANSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterStatsTransExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATSTRANSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

