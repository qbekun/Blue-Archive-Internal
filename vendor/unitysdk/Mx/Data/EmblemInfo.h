#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EmblemCategory; }
namespace FlatData { class Rarity; }
namespace FlatData { class EmblemDisplayType; }
namespace FlatData { class EmblemCheckPassType; }
namespace FlatData { class Language; }
namespace MX::Data::Excel { class EmblemExcel; }

#define MX_DATA_EMBLEMINFO_GET_DISPLAYFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x183D610)
#define MX_DATA_EMBLEMINFO_GET_CHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x183D620)
#define MX_DATA_EMBLEMINFO_GETEMBLEMBGPATH_OFFSET UNITYSDK_OFFSET(0x183D630)
#define MX_DATA_EMBLEMINFO_GET_CHECKPASSCOUNT_OFFSET UNITYSDK_OFFSET(0x183D6C0)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_JP_OFFSET UNITYSDK_OFFSET(0x183D6D0)
#define MX_DATA_EMBLEMINFO_SET_DISPLAYFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x183D6E0)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_KR_OFFSET UNITYSDK_OFFSET(0x183D6F0)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x183D700)
#define MX_DATA_EMBLEMINFO_SET_LABELTEXTVISIBLE_OFFSET UNITYSDK_OFFSET(0x183D710)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_TW_OFFSET UNITYSDK_OFFSET(0x183D720)
#define MX_DATA_EMBLEMINFO_SET_DISPLAYENDDATE_OFFSET UNITYSDK_OFFSET(0x183D730)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_TW_OFFSET UNITYSDK_OFFSET(0x183D740)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_TH_OFFSET UNITYSDK_OFFSET(0x183D750)
#define MX_DATA_EMBLEMINFO_GET_LABELTEXTVISIBLE_OFFSET UNITYSDK_OFFSET(0x183D760)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMICONBGPATH_OFFSET UNITYSDK_OFFSET(0x183D770)
#define MX_DATA_EMBLEMINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x183D790)
#define MX_DATA_EMBLEMINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x183D7A0)
#define MX_DATA_EMBLEMINFO_SET_CHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x183D7B0)
#define MX_DATA_EMBLEMINFO_GET_USEATLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x183D7C0)
#define MX_DATA_EMBLEMINFO_SET_CHECKPASSCOUNT_OFFSET UNITYSDK_OFFSET(0x183D7D0)
#define MX_DATA_EMBLEMINFO_SET_USEATLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x183D7E0)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMICONPATH_OFFSET UNITYSDK_OFFSET(0x183D7F0)
#define MX_DATA_EMBLEMINFO_SET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x183D800)
#define MX_DATA_EMBLEMINFO_GET_DISPLAYSTARTDATE_OFFSET UNITYSDK_OFFSET(0x183D810)
#define MX_DATA_EMBLEMINFO_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x183D820)
#define MX_DATA_EMBLEMINFO_GET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x183D830)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_EN_OFFSET UNITYSDK_OFFSET(0x183D840)
#define MX_DATA_EMBLEMINFO_GET_DISPLAYENDDATE_OFFSET UNITYSDK_OFFSET(0x183D850)
#define MX_DATA_EMBLEMINFO_GET_ICONNUMCONTROL_OFFSET UNITYSDK_OFFSET(0x183D860)
#define MX_DATA_EMBLEMINFO_GET_CHECKPASSPARAMETER_OFFSET UNITYSDK_OFFSET(0x183D870)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_TH_OFFSET UNITYSDK_OFFSET(0x183D880)
#define MX_DATA_EMBLEMINFO_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x183D890)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_JP_OFFSET UNITYSDK_OFFSET(0x183D8A0)
#define MX_DATA_EMBLEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183D8B0)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x183DB90)
#define MX_DATA_EMBLEMINFO_GET_EMBLEMICONBGPATH_OFFSET UNITYSDK_OFFSET(0x183DBB0)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMICONPATH_OFFSET UNITYSDK_OFFSET(0x183DBC0)
#define MX_DATA_EMBLEMINFO_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x183DBD0)
#define MX_DATA_EMBLEMINFO_GET_LOCALIZECODEKEY_OFFSET UNITYSDK_OFFSET(0x183DBE0)
#define MX_DATA_EMBLEMINFO_SET_LOCALIZECODEKEY_OFFSET UNITYSDK_OFFSET(0x183DBF0)
#define MX_DATA_EMBLEMINFO_SET_CHECKPASSPARAMETER_OFFSET UNITYSDK_OFFSET(0x183DC00)
#define MX_DATA_EMBLEMINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x183DC10)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_KR_OFFSET UNITYSDK_OFFSET(0x183DC20)
#define MX_DATA_EMBLEMINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x183DC30)
#define MX_DATA_EMBLEMINFO_SET_DISPLAYSTARTDATE_OFFSET UNITYSDK_OFFSET(0x183DC40)
#define MX_DATA_EMBLEMINFO_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x183DC50)
#define MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_EN_OFFSET UNITYSDK_OFFSET(0x183DC60)
#define MX_DATA_EMBLEMINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x183DC70)
#define MX_DATA_EMBLEMINFO_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x183DC80)
#define MX_DATA_EMBLEMINFO_SET_ICONNUMCONTROL_OFFSET UNITYSDK_OFFSET(0x183DC90)

namespace MX::Data
{
	inline static constexpr unsigned int EmblemInfo_TypeDefinitionIndex = 15776;

	class EmblemInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::EmblemCategory* _Category_k__BackingField; // 0x18
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x1C
		::FlatData::EmblemDisplayType* _DisplayType_k__BackingField; // 0x20
		::FlatData::EmblemCheckPassType* _CheckPassType_k__BackingField; // 0x24
		::System::Int64 _CheckPassParameter_k__BackingField; // 0x28
		::System::Int64 _CheckPassCount_k__BackingField; // 0x30
		::System::DateTime* _DisplayStartDate_k__BackingField; // 0x38
		::System::DateTime* _DisplayEndDate_k__BackingField; // 0x40
		::System::UInt32 _LocalizeEtcKey_k__BackingField; // 0x48
		::System::UInt32 _LocalizeCodeKey_k__BackingField; // 0x4C
		::System::Boolean _LabelTextVisible_k__BackingField; // 0x50
		::System::String* _EmblemBGPath_Jp_k__BackingField; // 0x58
		::System::String* _EmblemBGPath_Kr_k__BackingField; // 0x60
		::System::String* _EmblemBGPath_Th_k__BackingField; // 0x68
		::System::String* _EmblemBGPath_Tw_k__BackingField; // 0x70
		::System::String* _EmblemBGPath_En_k__BackingField; // 0x78
		::System::String* _EmblemIconPath_k__BackingField; // 0x80
		::System::String* _EmblemIconBGPath_k__BackingField; // 0x88
		::System::String* _EmblemEffectPath_k__BackingField; // 0x90
		::System::Int64 _UseAtLocalizeId_k__BackingField; // 0x98
		::System::Int64 _DisplayFavorLevel_k__BackingField; // 0xA0
		::System::Int64 _DisplayOrder_k__BackingField; // 0xA8
		::System::Int64 _IconNumControl_k__BackingField; // 0xB0

		::System::Int64 get_DisplayFavorLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_DISPLAYFAVORLEVEL_OFFSET))(nullptr);
		}

		::FlatData::EmblemCheckPassType* get_CheckPassType()
		{
			return (return (::FlatData::EmblemCheckPassType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_CHECKPASSTYPE_OFFSET))(nullptr);
		}

		::System::String* GetEmblemBGPath(::FlatData::Language* arg)
		{
			return (return (::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GETEMBLEMBGPATH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CheckPassCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_CHECKPASSCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPath_Jp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_JP_OFFSET))(nullptr);
		}

		::System::Void set_DisplayFavorLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_DISPLAYFAVORLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_EmblemBGPath_Kr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_KR_OFFSET))(nullptr);
		}

		::System::String* get_EmblemEffectPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMEFFECTPATH_OFFSET))(nullptr);
		}

		::System::Void set_LabelTextVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_LABELTEXTVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemBGPath_Tw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_TW_OFFSET))(str, nullptr);
		}

		::System::Void set_DisplayEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_DISPLAYENDDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_EmblemBGPath_Tw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_TW_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPath_Th()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_TH_OFFSET))(nullptr);
		}

		::System::Boolean get_LabelTextVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_LABELTEXTVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_EmblemIconBGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMICONBGPATH_OFFSET))(str, nullptr);
		}

		::FlatData::EmblemDisplayType* get_DisplayType()
		{
			return (return (::FlatData::EmblemDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_DISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CheckPassType(::FlatData::EmblemCheckPassType* arg)
		{
			((::System::Void(*)(::FlatData::EmblemCheckPassType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_CHECKPASSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UseAtLocalizeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_USEATLOCALIZEID_OFFSET))(nullptr);
		}

		::System::Void set_CheckPassCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_CHECKPASSCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseAtLocalizeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_USEATLOCALIZEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_EmblemIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_LOCALIZEETCKEY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_DisplayStartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_DISPLAYSTARTDATE_OFFSET))(nullptr);
		}

		::FlatData::EmblemCategory* get_Category()
		{
			return (return (::FlatData::EmblemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_LOCALIZEETCKEY_OFFSET))(nullptr);
		}

		::System::String* get_EmblemBGPath_En()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMBGPATH_EN_OFFSET))(nullptr);
		}

		::System::DateTime* get_DisplayEndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_DISPLAYENDDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_IconNumControl()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_ICONNUMCONTROL_OFFSET))(nullptr);
		}

		::System::Int64 get_CheckPassParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_CHECKPASSPARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_EmblemBGPath_Th(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_TH_OFFSET))(str, nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_RARITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemBGPath_Jp(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_JP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EmblemExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EmblemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemEffectPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMEFFECTPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_EmblemIconBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_EMBLEMICONBGPATH_OFFSET))(nullptr);
		}

		::System::Void set_EmblemIconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMICONPATH_OFFSET))(str, nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_RARITY_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_LOCALIZECODEKEY_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeCodeKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_LOCALIZECODEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_CheckPassParameter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_CHECKPASSPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemBGPath_Kr(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_KR_OFFSET))(str, nullptr);
		}

		::System::Void set_DisplayType(::FlatData::EmblemDisplayType* arg)
		{
			((::System::Void(*)(::FlatData::EmblemDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_DISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplayStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_DISPLAYSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemBGPath_En(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_EMBLEMBGPATH_EN_OFFSET))(str, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_Category(::FlatData::EmblemCategory* arg)
		{
			((::System::Void(*)(::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_IconNumControl(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMINFO_SET_ICONNUMCONTROL_OFFSET))(arg, nullptr);
		}

	};
}

