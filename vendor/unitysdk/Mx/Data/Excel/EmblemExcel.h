#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EmblemExcel; }
namespace FlatData { class EmblemCategory; }
namespace FlatData { class Rarity; }
namespace FlatData { class EmblemDisplayType; }
namespace FlatData { class EmblemCheckPassType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A89F90)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETROOTASEMBLEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1A89FA0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETROOTASEMBLEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8A000)
#define MX_DATA_EXCEL_EMBLEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A8A090)
#define MX_DATA_EXCEL_EMBLEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A8A060)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A8A0B0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8A100)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A8A150)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A8A1A0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A8A1F0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A8A240)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_USEATLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A8A290)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMTEXTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8A2E0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A8A330)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A370)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1A8A390)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A3D0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONNUMCONTROL_OFFSET UNITYSDK_OFFSET(0x1A8A3F0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONBGPATH_OFFSET UNITYSDK_OFFSET(0x1A8A440)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMICONBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A480)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHJP_OFFSET UNITYSDK_OFFSET(0x1A8A4A0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A4E0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHKR_OFFSET UNITYSDK_OFFSET(0x1A8A500)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A540)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHTH_OFFSET UNITYSDK_OFFSET(0x1A8A560)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A5A0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHTW_OFFSET UNITYSDK_OFFSET(0x1A8A5C0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A600)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHEN_OFFSET UNITYSDK_OFFSET(0x1A8A620)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A660)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1A8A680)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMEFFECTPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A6C0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1A8A6E0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A8A730)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETDISPLAYSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A770)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYENDDATE_OFFSET UNITYSDK_OFFSET(0x1A8A790)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GETDISPLAYENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A8A7D0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISLPAYFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8A7F0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_CHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x1A8A840)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A8A890)
#define MX_DATA_EXCEL_EMBLEMEXCEL_GET_CHECKPASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8A8E0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_CREATEEMBLEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8A930)
#define MX_DATA_EXCEL_EMBLEMEXCEL_STARTEMBLEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8B270)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A8AE30)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8B1C0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A8B190)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A8AE00)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A8B160)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A8B130)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDUSEATLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A8ADD0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMTEXTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8B1F0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1A8B100)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1A8B0D0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONNUMCONTROL_OFFSET UNITYSDK_OFFSET(0x1A8B0A0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONBGPATH_OFFSET UNITYSDK_OFFSET(0x1A8B070)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHJP_OFFSET UNITYSDK_OFFSET(0x1A8B040)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHKR_OFFSET UNITYSDK_OFFSET(0x1A8B010)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHTH_OFFSET UNITYSDK_OFFSET(0x1A8AFE0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHTW_OFFSET UNITYSDK_OFFSET(0x1A8AFB0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHEN_OFFSET UNITYSDK_OFFSET(0x1A8AF80)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1A8AF50)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1A8AF20)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A8AEF0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYENDDATE_OFFSET UNITYSDK_OFFSET(0x1A8AEC0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISLPAYFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8AE90)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDCHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x1A8AE60)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A8ADA0)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ADDCHECKPASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8AD70)
#define MX_DATA_EXCEL_EMBLEMEXCEL_ENDEMBLEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8B220)
#define MX_DATA_EXCEL_EMBLEMEXCEL_FINISHEMBLEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8B290)
#define MX_DATA_EXCEL_EMBLEMEXCEL_FINISHSIZEPREFIXEDEMBLEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8B2B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EmblemExcel_TypeDefinitionIndex = 17427;

	class EmblemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EmblemExcel* GetRootAsEmblemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EmblemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETROOTASEMBLEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EmblemExcel* GetRootAsEmblemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EmblemExcel* arg)
		{
			return (return (::MX::Data::Excel::EmblemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EmblemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETROOTASEMBLEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EmblemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EmblemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::EmblemCategory* get_Category()
		{
			return (return (::FlatData::EmblemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UseAtLocalizeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_USEATLOCALIZEID_OFFSET))(nullptr);
		}

		::System::Boolean get_EmblemTextVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMTEXTVISIBLE_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_EmblemIconNumControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONNUMCONTROL_OFFSET))(nullptr);
		}

		::System::String* get_EmblemIconBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMICONBGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemIconBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMICONBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPathJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemBGPathJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemBGPathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemBGPathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemBGPathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMBGPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemBGPathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMBGPATHENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EmblemEffectPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMEFFECTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemEffectPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETEMBLEMEFFECTPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EmblemDisplayType* get_DisplayType()
		{
			return (return (::FlatData::EmblemDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_DisplayStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDisplayStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETDISPLAYSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DisplayEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISPLAYENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDisplayEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GETDISPLAYENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_DislpayFavorLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_DISLPAYFAVORLEVEL_OFFSET))(nullptr);
		}

		::FlatData::EmblemCheckPassType* get_CheckPassType()
		{
			return (return (::FlatData::EmblemCheckPassType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_CHECKPASSTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EmblemParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_EMBLEMPARAMETER_OFFSET))(nullptr);
		}

		::System::Int64 get_CheckPassCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_GET_CHECKPASSCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEmblemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EmblemCategory* arg, ::FlatData::Rarity* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EmblemDisplayType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatData::EmblemCheckPassType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EmblemCategory*, ::FlatData::Rarity*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::EmblemDisplayType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatData::EmblemCheckPassType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_CREATEEMBLEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEmblemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_STARTEMBLEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmblemCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseAtLocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDUSEATLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemTextVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMTEXTVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemIconNumControl(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONNUMCONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemIconBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMICONBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemBGPathJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemBGPathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemBGPathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemBGPathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemBGPathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMBGPATHEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemEffectPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMEFFECTPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmblemDisplayType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmblemDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISPLAYENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDislpayFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDDISLPAYFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCheckPassType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmblemCheckPassType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmblemCheckPassType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDCHECKPASSTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemParameter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDEMBLEMPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCheckPassCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ADDCHECKPASSCOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEmblemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_ENDEMBLEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEmblemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_FINISHEMBLEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEmblemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMEXCEL_FINISHSIZEPREFIXEDEMBLEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

