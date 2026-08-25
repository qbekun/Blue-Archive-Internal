#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassFlavorTextExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3600)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GETROOTASBATTLEPASSFLAVORTEXTEXCEL_OFFSET UNITYSDK_OFFSET(0x19E3610)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GETROOTASBATTLEPASSFLAVORTEXTEXCEL_OFFSET UNITYSDK_OFFSET(0x19E3670)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E3700)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E36D0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19E3720)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19E3770)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_TEXTGROUP_OFFSET UNITYSDK_OFFSET(0x19E37C0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x19E3810)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_SORT_OFFSET UNITYSDK_OFFSET(0x19E3860)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_CREATEBATTLEPASSFLAVORTEXTEXCEL_OFFSET UNITYSDK_OFFSET(0x19E38B0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_STARTBATTLEPASSFLAVORTEXTEXCEL_OFFSET UNITYSDK_OFFSET(0x19E3AF0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x19E3A40)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19E3A10)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDTEXTGROUP_OFFSET UNITYSDK_OFFSET(0x19E39E0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x19E3A70)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDSORT_OFFSET UNITYSDK_OFFSET(0x19E39B0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ENDBATTLEPASSFLAVORTEXTEXCEL_OFFSET UNITYSDK_OFFSET(0x19E3AA0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_FINISHBATTLEPASSFLAVORTEXTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3B10)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_FINISHSIZEPREFIXEDBATTLEPASSFLAVORTEXTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassFlavorTextExcel_TypeDefinitionIndex = 16741;

	class BattlePassFlavorTextExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassFlavorTextExcel* GetRootAsBattlePassFlavorTextExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassFlavorTextExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GETROOTASBATTLEPASSFLAVORTEXTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassFlavorTextExcel* GetRootAsBattlePassFlavorTextExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassFlavorTextExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassFlavorTextExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassFlavorTextExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GETROOTASBATTLEPASSFLAVORTEXTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassFlavorTextExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassFlavorTextExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_TextGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_TEXTGROUP_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Sort()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_GET_SORT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassFlavorTextExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_CREATEBATTLEPASSFLAVORTEXTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassFlavorTextExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_STARTBATTLEPASSFLAVORTEXTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDTEXTGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSort(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ADDSORT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassFlavorTextExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_ENDBATTLEPASSFLAVORTEXTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassFlavorTextExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_FINISHBATTLEPASSFLAVORTEXTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassFlavorTextExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCEL_FINISHSIZEPREFIXEDBATTLEPASSFLAVORTEXTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

