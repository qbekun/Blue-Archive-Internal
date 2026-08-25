#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaElementRecursiveExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B36C00)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GETROOTASGACHAELEMENTRECURSIVEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B36C10)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GETROOTASGACHAELEMENTRECURSIVEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B36C70)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B36D00)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B36CD0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B36D20)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B36D70)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B36DC0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1B36E10)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1B36E60)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1B36EB0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1B36F00)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B36F50)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_CREATEGACHAELEMENTRECURSIVEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B36FA0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_STARTGACHAELEMENTRECURSIVEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B372F0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B37180)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B37150)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B37270)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B37120)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1B37240)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1B37210)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1B371E0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDSTATE_OFFSET UNITYSDK_OFFSET(0x1B371B0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ENDGACHAELEMENTRECURSIVEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B372A0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_FINISHGACHAELEMENTRECURSIVEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B37310)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_FINISHSIZEPREFIXEDGACHAELEMENTRECURSIVEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B37330)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementRecursiveExcel_TypeDefinitionIndex = 18083;

	class GachaElementRecursiveExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaElementRecursiveExcel* GetRootAsGachaElementRecursiveExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaElementRecursiveExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GETROOTASGACHAELEMENTRECURSIVEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaElementRecursiveExcel* GetRootAsGachaElementRecursiveExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaElementRecursiveExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaElementRecursiveExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaElementRecursiveExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GETROOTASGACHAELEMENTRECURSIVEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaElementRecursiveExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaElementRecursiveExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GachaGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_ParcelAmountMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_ParcelAmountMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PARCELAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_State()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_GET_STATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaElementRecursiveExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_CREATEGACHAELEMENTRECURSIVEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaElementRecursiveExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_STARTGACHAELEMENTRECURSIVEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELAMOUNTMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPARCELAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddState(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ADDSTATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaElementRecursiveExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_ENDGACHAELEMENTRECURSIVEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaElementRecursiveExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_FINISHGACHAELEMENTRECURSIVEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaElementRecursiveExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCEL_FINISHSIZEPREFIXEDGACHAELEMENTRECURSIVEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

