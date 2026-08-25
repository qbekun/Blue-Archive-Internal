#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StickerGroupExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C94250)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETROOTASSTICKERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C94260)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETROOTASSTICKERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C942C0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C94350)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C94320)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C94370)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1C943C0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETLAYOUTBYTES_OFFSET UNITYSDK_OFFSET(0x1C94400)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_UNIQUELAYOUTPATH_OFFSET UNITYSDK_OFFSET(0x1C94420)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETUNIQUELAYOUTPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C94460)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_STICKERGROUPICONPATH_OFFSET UNITYSDK_OFFSET(0x1C94480)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETSTICKERGROUPICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C944C0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x1C944E0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C94530)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C94580)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C945D0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1C94620)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LOCALIZEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C94670)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_STICKERGROUPCOVERPATH_OFFSET UNITYSDK_OFFSET(0x1C946C0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_GETSTICKERGROUPCOVERPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C94700)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_CREATESTICKERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C94720)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_STARTSTICKERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C94B70)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C94970)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C94AF0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDUNIQUELAYOUTPATH_OFFSET UNITYSDK_OFFSET(0x1C94AC0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDSTICKERGROUPICONPATH_OFFSET UNITYSDK_OFFSET(0x1C94A90)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x1C94940)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C94A60)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C94910)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C94A30)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1C94A00)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLOCALIZEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C949D0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDSTICKERGROUPCOVERPATH_OFFSET UNITYSDK_OFFSET(0x1C949A0)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_ENDSTICKERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C94B20)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_FINISHSTICKERGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C94B90)
#define MX_DATA_EXCEL_STICKERGROUPEXCEL_FINISHSIZEPREFIXEDSTICKERGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C94BB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StickerGroupExcel_TypeDefinitionIndex = 19537;

	class StickerGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StickerGroupExcel* GetRootAsStickerGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StickerGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETROOTASSTICKERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StickerGroupExcel* GetRootAsStickerGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StickerGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::StickerGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StickerGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETROOTASSTICKERGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StickerGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StickerGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LAYOUT_OFFSET))(nullptr);
		}

		Il2CppObject* GetLayoutBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETLAYOUTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_UniqueLayoutPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_UNIQUELAYOUTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUniqueLayoutPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETUNIQUELAYOUTPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StickerGroupIconpath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_STICKERGROUPICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerGroupIconpathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETSTICKERGROUPICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_PageCompleteSlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETESLOT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_PageCompleteRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_PageCompleteRewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_PageCompleteRewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_PAGECOMPLETEREWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LOCALIZETITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_LOCALIZEDESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_StickerGroupCoverpath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GET_STICKERGROUPCOVERPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerGroupCoverpathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_GETSTICKERGROUPCOVERPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStickerGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_CREATESTICKERGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartStickerGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_STARTSTICKERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLayout(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueLayoutPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDUNIQUELAYOUTPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGroupIconpath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDSTICKERGROUPICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageCompleteSlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETESLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageCompleteRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageCompleteRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageCompleteRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDPAGECOMPLETEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLOCALIZETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDLOCALIZEDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGroupCoverpath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ADDSTICKERGROUPCOVERPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStickerGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_ENDSTICKERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStickerGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_FINISHSTICKERGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStickerGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPEXCEL_FINISHSIZEPREFIXEDSTICKERGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

