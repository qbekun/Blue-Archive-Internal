#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGItemExcel; }
namespace FlatData { class TBGItemType; }
namespace MX::Data { class LocalizeEtcData; }
namespace FlatData { class TBGItemEffectType; }

#define MX_DATA_TBGITEMINFO_GET_BUFFICONHUDVISIBLE_OFFSET UNITYSDK_OFFSET(0x190BB40)
#define MX_DATA_TBGITEMINFO_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x190BB60)
#define MX_DATA_TBGITEMINFO_GET_BUFFICON_OFFSET UNITYSDK_OFFSET(0x190BB80)
#define MX_DATA_TBGITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190BBA0)
#define MX_DATA_TBGITEMINFO_GET_ENCOUNTERCOUNT_OFFSET UNITYSDK_OFFSET(0x190BBD0)
#define MX_DATA_TBGITEMINFO_GETITEMDESC_OFFSET UNITYSDK_OFFSET(0x190BBF0)
#define MX_DATA_TBGITEMINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x190BD50)
#define MX_DATA_TBGITEMINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190BD90)
#define MX_DATA_TBGITEMINFO_GET_ITEMEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x190BDB0)
#define MX_DATA_TBGITEMINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190BDD0)
#define MX_DATA_TBGITEMINFO_GET_ITEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x190BD70)
#define MX_DATA_TBGITEMINFO_GET_ICON_OFFSET UNITYSDK_OFFSET(0x190BDE0)
#define MX_DATA_TBGITEMINFO_GET_DICEEFFECTANICLIP_OFFSET UNITYSDK_OFFSET(0x190BE00)

namespace MX::Data
{
	inline static constexpr unsigned int TBGItemInfo_TypeDefinitionIndex = 16241;

	class TBGItemInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGItemExcel* _Excel_k__BackingField; // 0x10

		::System::Boolean get_BuffIconHUDVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_BUFFICONHUDVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::TBGItemType* get_ItemType()
		{
			return (return (::FlatData::TBGItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_ITEMTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BuffIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_BUFFICON_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGItemExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EncounterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_ENCOUNTERCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetItemDesc(::MX::Data::LocalizeEtcData* arg)
		{
			return (return (::System::String*(*)(::MX::Data::LocalizeEtcData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GETITEMDESC_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeEtcId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::TBGItemEffectType* get_ItemEffectType()
		{
			return (return (::FlatData::TBGItemEffectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_ITEMEFFECTTYPE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGItemExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGItemExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemParameter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_ITEMPARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_ICON_OFFSET))(nullptr);
		}

		::System::String* get_DiceEffectAniClip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGITEMINFO_GET_DICEEFFECTANICLIP_OFFSET))(nullptr);
		}

	};
}

