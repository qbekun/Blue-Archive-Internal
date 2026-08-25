#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaCraftNodeExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B31410)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETROOTASGACHACRAFTNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B31420)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETROOTASGACHACRAFTNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B31480)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B31510)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B314E0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B31530)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1B31580)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_QUICKCRAFTNODEDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B315D0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_NODEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B31620)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1B31670)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B316B0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_LOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B316D0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1B31720)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_CREATEGACHACRAFTNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B31770)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_STARTGACHACRAFTNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B31A60)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B31950)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDTIER_OFFSET UNITYSDK_OFFSET(0x1B31920)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDQUICKCRAFTNODEDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B319E0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDNODEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B318F0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1B319B0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B31980)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B318C0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ENDGACHACRAFTNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B31A10)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_FINISHGACHACRAFTNODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B31A80)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_FINISHSIZEPREFIXEDGACHACRAFTNODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B31AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeExcel_TypeDefinitionIndex = 18052;

	class GachaCraftNodeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeExcel* GetRootAsGachaCraftNodeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETROOTASGACHACRAFTNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeExcel* GetRootAsGachaCraftNodeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaCraftNodeExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaCraftNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETROOTASGACHACRAFTNODEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Tier()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_TIER_OFFSET))(nullptr);
		}

		::System::Int32 get_QuickCraftNodeDisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_QUICKCRAFTNODEDISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeQuality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_NODEQUALITY_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_LOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_Property()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_GET_PROPERTY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaCraftNodeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_CREATEGACHACRAFTNODEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaCraftNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_STARTGACHACRAFTNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddQuickCraftNodeDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDQUICKCRAFTNODEDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNodeQuality(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDNODEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProperty(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ADDPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaCraftNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_ENDGACHACRAFTNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaCraftNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_FINISHGACHACRAFTNODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaCraftNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCEL_FINISHSIZEPREFIXEDGACHACRAFTNODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

