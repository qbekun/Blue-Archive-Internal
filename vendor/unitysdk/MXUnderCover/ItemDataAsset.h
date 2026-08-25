#pragma once
#include "../unitysdk.h"

namespace FlatData { class UnderCoverItemCategory; }
namespace MXUnderCover { class UCSkillLogic; }
class UIButtonBindType;
class UIItemQuickSlotBindType;
class UCPersonalityType;

#define MXUNDERCOVER_ITEMDATAASSET_SET_ITEMINFOHASH_OFFSET UNITYSDK_OFFSET(0xDA7800)
#define MXUNDERCOVER_ITEMDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7810)
#define MXUNDERCOVER_ITEMDATAASSET_PREPROCESSING_OFFSET UNITYSDK_OFFSET(0xDA7890)
#define MXUNDERCOVER_ITEMDATAASSET_GET_SKILLBUTTONICONPATH_OFFSET UNITYSDK_OFFSET(0xDA78B0)
#define MXUNDERCOVER_ITEMDATAASSET_SETCATEGORY_OFFSET UNITYSDK_OFFSET(0xDA78D0)
#define MXUNDERCOVER_ITEMDATAASSET_GET_ITEMINFOHASH_OFFSET UNITYSDK_OFFSET(0xDA78E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int ItemDataAsset_TypeDefinitionIndex = 9871;

	class ItemDataAsset : public Il2CppObject
	{
	public:
		::FlatData::UnderCoverItemCategory* Category; // 0x18
		::MXUnderCover::UCSkillLogic* SkillLogic; // 0x20
		UIButtonBindType* ButtonBindType; // 0x28
		UIItemQuickSlotBindType* QuickSlotBindType; // 0x2C
		UCPersonalityType* ItemUseOwnerType; // 0x30
		::System::String* ItemTexturePath; // 0x38
		::System::String* SkillIconTexturePath; // 0x40
		::System::String* SkillSubIconTexturePath; // 0x48
		::System::String* ItemInfoLocalizeEtcKey; // 0x50
		::System::String* EffectLocalizeKey; // 0x58
		::System::String* ItemId; // 0x60
		::System::UInt32 _ItemInfoHash_k__BackingField; // 0x68

		::System::Void set_ItemInfoHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_SET_ITEMINFOHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreProcessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_PREPROCESSING_OFFSET))(nullptr);
		}

		::System::String* get_SkillButtonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_GET_SKILLBUTTONICONPATH_OFFSET))(nullptr);
		}

		::System::Void SetCategory(::FlatData::UnderCoverItemCategory* arg)
		{
			((::System::Void(*)(::FlatData::UnderCoverItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_SETCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ItemInfoHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMDATAASSET_GET_ITEMINFOHASH_OFFSET))(nullptr);
		}

	};
}

