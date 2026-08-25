#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterLevelStatFactorExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2CEB0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GETROOTASCHARACTERLEVELSTATFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1A2CEC0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GETROOTASCHARACTERLEVELSTATFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1A2CF20)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A2CFB0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A2CF80)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2CFD0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_CRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D020)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_STABILITYFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D070)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_DEFENCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D0C0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_ACCURACYFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D110)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_CREATECHARACTERLEVELSTATFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1A2D160)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_STARTCHARACTERLEVELSTATFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1A2D3B0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A2D330)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDCRITICALFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D300)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDSTABILITYFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D2D0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDDEFENCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D2A0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDACCURACYFACTOR_OFFSET UNITYSDK_OFFSET(0x1A2D270)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ENDCHARACTERLEVELSTATFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x1A2D360)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_FINISHCHARACTERLEVELSTATFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2D3D0)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_FINISHSIZEPREFIXEDCHARACTERLEVELSTATFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2D3F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelStatFactorExcel_TypeDefinitionIndex = 17041;

	class CharacterLevelStatFactorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterLevelStatFactorExcel* GetRootAsCharacterLevelStatFactorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelStatFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GETROOTASCHARACTERLEVELSTATFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelStatFactorExcel* GetRootAsCharacterLevelStatFactorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterLevelStatFactorExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelStatFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterLevelStatFactorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GETROOTASCHARACTERLEVELSTATFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelStatFactorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelStatFactorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_CRITICALFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StabilityFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_STABILITYFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenceFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_DEFENCEFACTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AccuracyFactor()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_GET_ACCURACYFACTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterLevelStatFactorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_CREATECHARACTERLEVELSTATFACTOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterLevelStatFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_STARTCHARACTERLEVELSTATFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCriticalFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDCRITICALFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStabilityFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDSTABILITYFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenceFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDDEFENCEFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccuracyFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ADDACCURACYFACTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterLevelStatFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_ENDCHARACTERLEVELSTATFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterLevelStatFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_FINISHCHARACTERLEVELSTATFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterLevelStatFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCEL_FINISHSIZEPREFIXEDCHARACTERLEVELSTATFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

