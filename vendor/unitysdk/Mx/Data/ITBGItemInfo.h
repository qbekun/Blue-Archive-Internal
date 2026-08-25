#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGItemType; }
namespace FlatData { class TBGItemEffectType; }
namespace MX::Data { class LocalizeEtcData; }

#define MX_DATA_ITBGITEMINFO_GET_BUFFICONHUDVISIBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_ITEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_ICON_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_BUFFICON_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_ITEMEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_ENCOUNTERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_DICEEFFECTANICLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGITEMINFO_GETITEMDESC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGItemInfo_TypeDefinitionIndex = 16232;

	class ITBGItemInfo : public Il2CppObject
	{
	public:
		::System::Boolean get_BuffIconHUDVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_BUFFICONHUDVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::TBGItemType* get_ItemType()
		{
			return (return (::FlatData::TBGItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_ITEMTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemParameter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_ITEMPARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_ICON_OFFSET))(nullptr);
		}

		::System::String* get_BuffIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_BUFFICON_OFFSET))(nullptr);
		}

		::FlatData::TBGItemEffectType* get_ItemEffectType()
		{
			return (return (::FlatData::TBGItemEffectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_ITEMEFFECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEtcId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int32 get_EncounterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_ENCOUNTERCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_DiceEffectAniClip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_DICEEFFECTANICLIP_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* GetItemDesc(::MX::Data::LocalizeEtcData* arg)
		{
			return (return (::System::String*(*)(::MX::Data::LocalizeEtcData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGITEMINFO_GETITEMDESC_OFFSET))(arg, nullptr);
		}

	};
}

