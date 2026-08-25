#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BGMRaidExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BGMRAIDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19EF8A0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_GETROOTASBGMRAIDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EF8B0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_GETROOTASBGMRAIDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EF910)
#define MX_DATA_EXCEL_BGMRAIDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19EF9A0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19EF970)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19EF9C0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19EFA10)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x19EFA60)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_CREATEBGMRAIDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EFAB0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_STARTBGMRAIDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EFC50)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_ADDSTAGEID_OFFSET UNITYSDK_OFFSET(0x19EFBD0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_ADDPHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19EFBA0)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x19EFB70)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_ENDBGMRAIDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EFC00)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_FINISHBGMRAIDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EFC70)
#define MX_DATA_EXCEL_BGMRAIDEXCEL_FINISHSIZEPREFIXEDBGMRAIDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EFC90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMRaidExcel_TypeDefinitionIndex = 16795;

	class BGMRaidExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BGMRaidExcel* GetRootAsBGMRaidExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMRaidExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GETROOTASBGMRAIDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BGMRaidExcel* GetRootAsBGMRaidExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BGMRaidExcel* arg)
		{
			return (return (::MX::Data::Excel::BGMRaidExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BGMRaidExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GETROOTASBGMRAIDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BGMRaidExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMRaidExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GET_PHASEINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBGMRaidExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_CREATEBGMRAIDEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBGMRaidExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_STARTBGMRAIDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_ADDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_ADDPHASEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBGMRaidExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_ENDBGMRAIDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBGMRaidExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_FINISHBGMRAIDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBGMRaidExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCEL_FINISHSIZEPREFIXEDBGMRAIDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

