#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LevelExpMasterCoinExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B743F0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GETROOTASLEVELEXPMASTERCOINEXCEL_OFFSET UNITYSDK_OFFSET(0x1B74400)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GETROOTASLEVELEXPMASTERCOINEXCEL_OFFSET UNITYSDK_OFFSET(0x1B74460)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B744F0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B744C0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B74510)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_MINLEVEL_OFFSET UNITYSDK_OFFSET(0x1B74560)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B745B0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1B74600)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_CREATELEVELEXPMASTERCOINEXCEL_OFFSET UNITYSDK_OFFSET(0x1B74650)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_STARTLEVELEXPMASTERCOINEXCEL_OFFSET UNITYSDK_OFFSET(0x1B74840)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B74730)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDMINLEVEL_OFFSET UNITYSDK_OFFSET(0x1B747C0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B74790)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDRATIO_OFFSET UNITYSDK_OFFSET(0x1B74760)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ENDLEVELEXPMASTERCOINEXCEL_OFFSET UNITYSDK_OFFSET(0x1B747F0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_FINISHLEVELEXPMASTERCOINEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B74860)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_FINISHSIZEPREFIXEDLEVELEXPMASTERCOINEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B74880)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LevelExpMasterCoinExcel_TypeDefinitionIndex = 18339;

	class LevelExpMasterCoinExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LevelExpMasterCoinExcel* GetRootAsLevelExpMasterCoinExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LevelExpMasterCoinExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GETROOTASLEVELEXPMASTERCOINEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LevelExpMasterCoinExcel* GetRootAsLevelExpMasterCoinExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LevelExpMasterCoinExcel* arg)
		{
			return (return (::MX::Data::Excel::LevelExpMasterCoinExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LevelExpMasterCoinExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GETROOTASLEVELEXPMASTERCOINEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LevelExpMasterCoinExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LevelExpMasterCoinExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_MinLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_MINLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Ratio()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_GET_RATIO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLevelExpMasterCoinExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_CREATELEVELEXPMASTERCOINEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLevelExpMasterCoinExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_STARTLEVELEXPMASTERCOINEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDMINLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ADDRATIO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLevelExpMasterCoinExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_ENDLEVELEXPMASTERCOINEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLevelExpMasterCoinExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_FINISHLEVELEXPMASTERCOINEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLevelExpMasterCoinExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCEL_FINISHSIZEPREFIXEDLEVELEXPMASTERCOINEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

