#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class EquipmentCategory; }
namespace FlatData { class Rarity; }
namespace FlatData { class Tag; }
namespace FlatData { class ShopCategoryType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8EB50)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETROOTASEQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8EB60)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETROOTASEQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8EBC0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A8EC50)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A8EC20)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A8EC70)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_EQUIPMENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8ECC0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A8ED10)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A8ED60)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_WEAR_OFFSET UNITYSDK_OFFSET(0x1A8EDB0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8EE00)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1A8EE50)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_TIERINIT_OFFSET UNITYSDK_OFFSET(0x1A8EEA0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_NEXTTIEREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A8EEF0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_STACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1A8EF40)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1A8EF90)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1A8EFD0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_IMAGENAME_OFFSET UNITYSDK_OFFSET(0x1A8EFF0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETIMAGENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A8F030)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1A8F050)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A8F0B0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A8F0F0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1A8F110)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1A8F160)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1A8F1B0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1A8F200)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_SHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8F250)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHOPCATEGORYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A8F2B0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GETSHOPCATEGORYBYTES_OFFSET UNITYSDK_OFFSET(0x1A8F2F0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHORTCUTTYPEID_OFFSET UNITYSDK_OFFSET(0x1A8F310)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_REDIRECTITEMID_OFFSET UNITYSDK_OFFSET(0x1A8F360)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATEEQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8F3B0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTEQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8FB30)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A8F8A0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDEQUIPMENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8FA80)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A8FA50)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A8FA20)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDWEAR_OFFSET UNITYSDK_OFFSET(0x1A8FAB0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A8F9F0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x1A8F9C0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDTIERINIT_OFFSET UNITYSDK_OFFSET(0x1A8F870)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDNEXTTIEREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A8F840)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSTACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1A8F990)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1A8F960)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDIMAGENAME_OFFSET UNITYSDK_OFFSET(0x1A8F930)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1A8F900)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A8FB50)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A8FBE0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1A8F810)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1A8F7E0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1A8F7B0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1A8F780)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A8F8D0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATESHOPCATEGORYVECTOR_OFFSET UNITYSDK_OFFSET(0x1A8FC20)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTSHOPCATEGORYVECTOR_OFFSET UNITYSDK_OFFSET(0x1A8FCB0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHORTCUTTYPEID_OFFSET UNITYSDK_OFFSET(0x1A8F750)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDREDIRECTITEMID_OFFSET UNITYSDK_OFFSET(0x1A8F720)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_ENDEQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8FAE0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_FINISHEQUIPMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8FCF0)
#define MX_DATA_EXCEL_EQUIPMENTEXCEL_FINISHSIZEPREFIXEDEQUIPMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8FD10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentExcel_TypeDefinitionIndex = 17447;

	class EquipmentExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* GetRootAsEquipmentExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETROOTASEQUIPMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* GetRootAsEquipmentExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EquipmentExcel* arg)
		{
			return (return (::MX::Data::Excel::EquipmentExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETROOTASEQUIPMENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::EquipmentCategory* get_EquipmentCategory()
		{
			return (return (::FlatData::EquipmentCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_EQUIPMENTCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Boolean get_Wear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_WEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_RecipeId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_TierInit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_TIERINIT_OFFSET))(nullptr);
		}

		::System::Int64 get_NextTierEquipment()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_NEXTTIEREQUIPMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_StackableMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_STACKABLEMAX_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_IMAGENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetImageNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETIMAGENAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier0()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER0_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier1()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER1_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier2()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_CRAFTQUALITYTIER2_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftingCraftQuality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* ShopCategory(::System::Int32 arg)
		{
			return (return (::FlatData::ShopCategoryType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_SHOPCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopCategoryLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHOPCATEGORYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopCategoryBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GETSHOPCATEGORYBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ShortcutTypeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_SHORTCUTTYPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RedirectItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_GET_REDIRECTITEMID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEquipmentExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EquipmentCategory* arg, ::FlatData::Rarity* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EquipmentCategory*, ::FlatData::Rarity*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATEEQUIPMENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEquipmentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTEQUIPMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipmentCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EquipmentCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDEQUIPMENTCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDWEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTierInit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDTIERINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextTierEquipment(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDNEXTTIEREQUIPMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackableMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSTACKABLEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImageName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDIMAGENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier0(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier2(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDCRAFTQUALITYTIER2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftingCraftQuality(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHOPCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShopCategoryVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_CREATESHOPCATEGORYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShopCategoryVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_STARTSHOPCATEGORYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutTypeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDSHORTCUTTYPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRedirectItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ADDREDIRECTITEMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEquipmentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_ENDEQUIPMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEquipmentExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_FINISHEQUIPMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEquipmentExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCEL_FINISHSIZEPREFIXEDEQUIPMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

