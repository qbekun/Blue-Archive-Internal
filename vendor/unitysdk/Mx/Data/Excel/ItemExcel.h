#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ItemExcel; }
namespace FlatData { class Rarity; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class ItemCategory; }
namespace FlatData { class ParcelType; }
namespace FlatData { class MailType; }
namespace FlatData { class Tag; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class GachaTicketType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ITEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B68E90)
#define MX_DATA_EXCEL_ITEMEXCEL_GETROOTASITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1B68EA0)
#define MX_DATA_EXCEL_ITEMEXCEL_GETROOTASITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1B68F00)
#define MX_DATA_EXCEL_ITEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B68F90)
#define MX_DATA_EXCEL_ITEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B68F60)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B68FB0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B69000)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B69050)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B690A0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B690F0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B69140)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1B69190)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1B691E0)
#define MX_DATA_EXCEL_ITEMEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B69220)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x1B69240)
#define MX_DATA_EXCEL_ITEMEXCEL_GETSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B69280)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_STACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1B692A0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_STACKABLEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B692F0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_IMMEDIATEUSE_OFFSET UNITYSDK_OFFSET(0x1B69340)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B69390)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTID_OFFSET UNITYSDK_OFFSET(0x1B693E0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B69430)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1B69480)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B694D0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEID_OFFSET UNITYSDK_OFFSET(0x1B69520)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B69570)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_CANTIERUPGRADE_OFFSET UNITYSDK_OFFSET(0x1B695C0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_TIERUPGRADERECIPECRAFTID_OFFSET UNITYSDK_OFFSET(0x1B69610)
#define MX_DATA_EXCEL_ITEMEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1B69660)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B696C0)
#define MX_DATA_EXCEL_ITEMEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B69700)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ISCOLLABORATION_OFFSET UNITYSDK_OFFSET(0x1B69720)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1B69770)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1B697C0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1B69810)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1B69860)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_MAXGIFTTAGS_OFFSET UNITYSDK_OFFSET(0x1B698B0)
#define MX_DATA_EXCEL_ITEMEXCEL_SHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B69900)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_SHOPCATEGORYLENGTH_OFFSET UNITYSDK_OFFSET(0x1B69960)
#define MX_DATA_EXCEL_ITEMEXCEL_GETSHOPCATEGORYBYTES_OFFSET UNITYSDK_OFFSET(0x1B699A0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1B699C0)
#define MX_DATA_EXCEL_ITEMEXCEL_GETEXPIRATIONDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B69A00)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRATIONNOTIFYDATEIN_OFFSET UNITYSDK_OFFSET(0x1B69A20)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ISOVERRIDEEXPIRATION_OFFSET UNITYSDK_OFFSET(0x1B69A70)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_SHORTCUTTYPEID_OFFSET UNITYSDK_OFFSET(0x1B69AC0)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_GACHATICKET_OFFSET UNITYSDK_OFFSET(0x1B69B10)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_ALERTPOPUPID_OFFSET UNITYSDK_OFFSET(0x1B69B60)
#define MX_DATA_EXCEL_ITEMEXCEL_GET_SHIFTINGCRAFTRECIPE_OFFSET UNITYSDK_OFFSET(0x1B69BB0)
#define MX_DATA_EXCEL_ITEMEXCEL_CREATEITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1B69C00)
#define MX_DATA_EXCEL_ITEMEXCEL_STARTITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6A950)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B6A4E0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B6A4B0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1B6A810)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B6A7E0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B6A7B0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B6A780)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDQUALITY_OFFSET UNITYSDK_OFFSET(0x1B6A480)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1B6A750)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1B6A720)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSTACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1B6A6F0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSTACKABLEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B6A6C0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDIMMEDIATEUSE_OFFSET UNITYSDK_OFFSET(0x1B6A8D0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B6A690)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTID_OFFSET UNITYSDK_OFFSET(0x1B6A450)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B6A420)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDMAILTYPE_OFFSET UNITYSDK_OFFSET(0x1B6A660)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B6A630)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEID_OFFSET UNITYSDK_OFFSET(0x1B6A3F0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B6A3C0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDCANTIERUPGRADE_OFFSET UNITYSDK_OFFSET(0x1B6A8A0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDTIERUPGRADERECIPECRAFTID_OFFSET UNITYSDK_OFFSET(0x1B6A390)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1B6A600)
#define MX_DATA_EXCEL_ITEMEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6A970)
#define MX_DATA_EXCEL_ITEMEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6AA00)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDISCOLLABORATION_OFFSET UNITYSDK_OFFSET(0x1B6A870)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1B6A360)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1B6A330)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1B6A300)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1B6A2D0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDMAXGIFTTAGS_OFFSET UNITYSDK_OFFSET(0x1B6A5D0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B6A5A0)
#define MX_DATA_EXCEL_ITEMEXCEL_CREATESHOPCATEGORYVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6AA40)
#define MX_DATA_EXCEL_ITEMEXCEL_STARTSHOPCATEGORYVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6AAD0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1B6A570)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRATIONNOTIFYDATEIN_OFFSET UNITYSDK_OFFSET(0x1B6A540)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDISOVERRIDEEXPIRATION_OFFSET UNITYSDK_OFFSET(0x1B6A840)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSHORTCUTTYPEID_OFFSET UNITYSDK_OFFSET(0x1B6A2A0)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDGACHATICKET_OFFSET UNITYSDK_OFFSET(0x1B6A510)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDALERTPOPUPID_OFFSET UNITYSDK_OFFSET(0x1B6A270)
#define MX_DATA_EXCEL_ITEMEXCEL_ADDSHIFTINGCRAFTRECIPE_OFFSET UNITYSDK_OFFSET(0x1B6A240)
#define MX_DATA_EXCEL_ITEMEXCEL_ENDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6A900)
#define MX_DATA_EXCEL_ITEMEXCEL_FINISHITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6AB10)
#define MX_DATA_EXCEL_ITEMEXCEL_FINISHSIZEPREFIXEDITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6AB30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ItemExcel_TypeDefinitionIndex = 18283;

	class ItemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ItemExcel* GetRootAsItemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETROOTASITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ItemExcel* GetRootAsItemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ItemExcel* arg)
		{
			return (return (::MX::Data::Excel::ItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETROOTASITEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ItemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ItemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::ItemCategory* get_ItemCategory()
		{
			return (return (::FlatData::ItemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ITEMCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_Quality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_QUALITY_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_SPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StackableMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_STACKABLEMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_StackableFunction()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_STACKABLEFUNCTION_OFFSET))(nullptr);
		}

		::System::Boolean get_ImmediateUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_IMMEDIATEUSE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_UsingResultParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UsingResultId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UsingResultAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_USINGRESULTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return (return (::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ExpiryChangeParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryChangeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryChangeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRYCHANGEAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTierUpgrade()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_CANTIERUPGRADE_OFFSET))(nullptr);
		}

		::System::Int64 get_TierUpgradeRecipeCraftId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_TIERUPGRADERECIPECRAFTID_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCollaboration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ISCOLLABORATION_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier0()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER0_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier1()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER1_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier2()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_CRAFTQUALITYTIER2_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftingCraftQuality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxGiftTags()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_MAXGIFTTAGS_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* ShopCategory(::System::Int32 arg)
		{
			return (return (::FlatData::ShopCategoryType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_SHOPCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopCategoryLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_SHOPCATEGORYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopCategoryBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETSHOPCATEGORYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExpirationDateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRATIONDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpirationDateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GETEXPIRATIONDATETIMEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_ExpirationNotifyDateIn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_EXPIRATIONNOTIFYDATEIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOverrideExpiration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ISOVERRIDEEXPIRATION_OFFSET))(nullptr);
		}

		::System::Int64 get_ShortcutTypeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_SHORTCUTTYPEID_OFFSET))(nullptr);
		}

		::FlatData::GachaTicketType* get_GachaTicket()
		{
			return (return (::FlatData::GachaTicketType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_GACHATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_AlertPopupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_ALERTPOPUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftingCraftRecipe()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_GET_SHIFTINGCRAFTRECIPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateItemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::Rarity* arg, ::FlatData::ProductionStep* arg, ::System::UInt32 arg, ::FlatData::ItemCategory* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MailType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::GachaTicketType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::Rarity*, ::FlatData::ProductionStep*, ::System::UInt32, ::FlatData::ItemCategory*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Boolean, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::MailType*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Boolean, ::System::Int64, ::FlatData::GachaTicketType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_CREATEITEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_STARTITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ItemCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDITEMCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddQuality(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackableMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSTACKABLEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackableFunction(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSTACKABLEFUNCTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImmediateUse(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDIMMEDIATEUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsingResultParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsingResultId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsingResultAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDUSINGRESULTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMailType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDMAILTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRYCHANGEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanTierUpgrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDCANTIERUPGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTierUpgradeRecipeCraftId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDTIERUPGRADERECIPECRAFTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsCollaboration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDISCOLLABORATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier0(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier2(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDCRAFTQUALITYTIER2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftingCraftQuality(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxGiftTags(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDMAXGIFTTAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSHOPCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShopCategoryVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_CREATESHOPCATEGORYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShopCategoryVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_STARTSHOPCATEGORYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpirationDateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRATIONDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpirationNotifyDateIn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDEXPIRATIONNOTIFYDATEIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsOverrideExpiration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDISOVERRIDEEXPIRATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutTypeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSHORTCUTTYPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaTicket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GachaTicketType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDGACHATICKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAlertPopupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDALERTPOPUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftingCraftRecipe(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ADDSHIFTINGCRAFTRECIPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_ENDITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_FINISHITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ITEMEXCEL_FINISHSIZEPREFIXEDITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

