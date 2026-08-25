#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGStartDeckCardExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA3B30)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GETROOTASMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA3B40)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GETROOTASMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA3BA0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA3C30)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA3C00)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA3C50)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1BA3CA0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_CREATEMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA3CF0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_STARTMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA3E30)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1BA3DB0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ADDCARDID_OFFSET UNITYSDK_OFFSET(0x1BA3D80)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ENDMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA3DE0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_FINISHMINIGAMECCGSTARTDECKCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA3E50)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSTARTDECKCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA3E70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGStartDeckCardExcel_TypeDefinitionIndex = 18558;

	class MinigameCCGStartDeckCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCardExcel* GetRootAsMinigameCCGStartDeckCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GETROOTASMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCardExcel* GetRootAsMinigameCCGStartDeckCardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGStartDeckCardExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGStartDeckCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GETROOTASMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGStartDeckCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGStartDeckCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_GET_CARDID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGStartDeckCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_CREATEMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGStartDeckCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_STARTMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ADDCARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGStartDeckCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_ENDMINIGAMECCGSTARTDECKCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGStartDeckCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_FINISHMINIGAMECCGSTARTDECKCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGStartDeckCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSTARTDECKCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

