#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class IdCardBackgroundExcel; }
namespace FlatData { class Rarity; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4D230)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETROOTASIDCARDBACKGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4D240)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETROOTASIDCARDBACKGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4D2A0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B4D330)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B4D300)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B4D350)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B4D3A0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B4D3F0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B4D440)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B4D490)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1B4D4E0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B4D520)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B4D540)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1B4D590)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B4D5D0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_CREATEIDCARDBACKGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4D5F0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_STARTIDCARDBACKGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4D940)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B4D7A0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1B4D860)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B4D770)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B4D8C0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B4D890)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDBGPATH_OFFSET UNITYSDK_OFFSET(0x1B4D830)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B4D800)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1B4D7D0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ENDIDCARDBACKGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4D8F0)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_FINISHIDCARDBACKGROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4D960)
#define MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_FINISHSIZEPREFIXEDIDCARDBACKGROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4D980)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int IdCardBackgroundExcel_TypeDefinitionIndex = 18177;

	class IdCardBackgroundExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::IdCardBackgroundExcel* GetRootAsIdCardBackgroundExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::IdCardBackgroundExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETROOTASIDCARDBACKGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::IdCardBackgroundExcel* GetRootAsIdCardBackgroundExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::IdCardBackgroundExcel* arg)
		{
			return (return (::MX::Data::Excel::IdCardBackgroundExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::IdCardBackgroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETROOTASIDCARDBACKGROUNDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::IdCardBackgroundExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::IdCardBackgroundExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::String* get_BgPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_BGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateIdCardBackgroundExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::Rarity* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::Rarity*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_CREATEIDCARDBACKGROUNDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartIdCardBackgroundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_STARTIDCARDBACKGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDISDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndIdCardBackgroundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_ENDIDCARDBACKGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishIdCardBackgroundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_FINISHIDCARDBACKGROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedIdCardBackgroundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IDCARDBACKGROUNDEXCEL_FINISHSIZEPREFIXEDIDCARDBACKGROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

