#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGRewardCardRateExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA0350)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GETROOTASMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA0360)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GETROOTASMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA03C0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA0450)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA0420)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_RARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA0470)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_CARDRARITY_OFFSET UNITYSDK_OFFSET(0x1BA04C0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_RATE_OFFSET UNITYSDK_OFFSET(0x1BA0510)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_CREATEMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA0560)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_STARTMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA0700)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDRARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA0620)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDCARDRARITY_OFFSET UNITYSDK_OFFSET(0x1BA0680)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1BA0650)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ENDMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA06B0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_FINISHMINIGAMECCGREWARDCARDRATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA0720)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDCARDRATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA0740)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardCardRateExcel_TypeDefinitionIndex = 18537;

	class MinigameCCGRewardCardRateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardRateExcel* GetRootAsMinigameCCGRewardCardRateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardRateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GETROOTASMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardRateExcel* GetRootAsMinigameCCGRewardCardRateExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGRewardCardRateExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardRateExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGRewardCardRateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GETROOTASMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardRateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardRateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RarityGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_RARITYGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardRarity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_CARDRARITY_OFFSET))(nullptr);
		}

		::System::Int32 get_Rate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_GET_RATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGRewardCardRateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_CREATEMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGRewardCardRateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_STARTMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRarityGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDRARITYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardRarity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDCARDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ADDRATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGRewardCardRateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_ENDMINIGAMECCGREWARDCARDRATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGRewardCardRateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_FINISHMINIGAMECCGREWARDCARDRATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGRewardCardRateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDCARDRATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

