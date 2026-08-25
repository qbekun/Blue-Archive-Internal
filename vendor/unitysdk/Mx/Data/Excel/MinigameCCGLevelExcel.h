#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B95760)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETROOTASMINIGAMECCGLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B95770)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETROOTASMINIGAMECCGLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B957D0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B95860)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B95830)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B95880)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1B958D0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_FLOORINDEX_OFFSET UNITYSDK_OFFSET(0x1B95920)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1B95970)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETBACKGROUNDPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B959B0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1B959D0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_CREATEMINIGAMECCGLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B95A20)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_STARTMINIGAMECCGLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B95C60)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDLEVELID_OFFSET UNITYSDK_OFFSET(0x1B95B80)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1B95B50)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x1B95BE0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDBACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1B95BB0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1B95B20)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ENDMINIGAMECCGLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B95C10)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_FINISHMINIGAMECCGLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B95C80)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B95CA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelExcel_TypeDefinitionIndex = 18482;

	class MinigameCCGLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelExcel* GetRootAsMinigameCCGLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETROOTASMINIGAMECCGLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelExcel* GetRootAsMinigameCCGLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETROOTASMINIGAMECCGLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int32 get_FloorIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_FLOORINDEX_OFFSET))(nullptr);
		}

		::System::String* get_BackgroundPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BACKGROUNDPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackgroundPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GETBACKGROUNDPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_CREATEMINIGAMECCGLEVELEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_STARTMINIGAMECCGLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDLEVELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDFLOORINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackgroundPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDBACKGROUNDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_ENDMINIGAMECCGLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_FINISHMINIGAMECCGLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

