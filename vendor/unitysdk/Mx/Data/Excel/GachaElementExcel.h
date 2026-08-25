#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaElementExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class Rarity; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B34B30)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GETROOTASGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B34B40)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GETROOTASGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B34BA0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B34C30)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B34C00)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B34C50)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B34CA0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B34CF0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1B34D40)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B34D90)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1B34DE0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1B34E30)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1B34E80)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B34ED0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_CREATEGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B34F20)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_STARTGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B352C0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B35120)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B350F0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B35240)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B350C0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1B35210)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1B351E0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1B351B0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1B35180)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDSTATE_OFFSET UNITYSDK_OFFSET(0x1B35150)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_ENDGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B35270)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_FINISHGACHAELEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B352E0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCEL_FINISHSIZEPREFIXEDGACHAELEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B35300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementExcel_TypeDefinitionIndex = 18073;

	class GachaElementExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaElementExcel* GetRootAsGachaElementExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GETROOTASGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaElementExcel* GetRootAsGachaElementExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaElementExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaElementExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GETROOTASGACHAELEMENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaElementExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaElementExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GachaGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int32 get_ParcelAmountMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_ParcelAmountMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PARCELAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_State()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_GET_STATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatData::Rarity* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::FlatData::Rarity*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_CREATEGACHAELEMENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_STARTGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELAMOUNTMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPARCELAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddState(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ADDSTATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_ENDGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaElementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_FINISHGACHAELEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaElementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCEL_FINISHSIZEPREFIXEDGACHAELEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

