#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CVCollectionType; }
namespace FlatData { class CVUnlockScenarioType; }
namespace MX::Data::Excel { class CharacterDialogEmojiExcel; }

#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1837530)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1837540)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1837550)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1837560)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1837570)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1837580)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET__DURATION_OFFSET UNITYSDK_OFFSET(0x1837590)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET__DURATION_OFFSET UNITYSDK_OFFSET(0x18375A0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET__DURATIONKR_OFFSET UNITYSDK_OFFSET(0x18375B0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET__DURATIONKR_OFFSET UNITYSDK_OFFSET(0x18375C0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x18375D0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DURATIONADD_OFFSET UNITYSDK_OFFSET(0x18376A0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DURATIONADD_OFFSET UNITYSDK_OFFSET(0x18376B0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_HIDEUI_OFFSET UNITYSDK_OFFSET(0x18376C0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_HIDEUI_OFFSET UNITYSDK_OFFSET(0x18376D0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_LOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x18376E0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_LOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x18376F0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x1837700)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x1837710)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837720)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837730)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1837740)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1837750)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1837760)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1837770)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1837780)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1837790)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x18377A0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x18377B0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x18377C0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x18377D0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_UNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x18377E0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_UNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x18377F0)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1837800)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1837810)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1837820)
#define MX_DATA_CHARACTERDIALOGEMOJIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1837B90)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogEmojiInfo_TypeDefinitionIndex = 15743;

	class CharacterDialogEmojiInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::System::Int32 _TargetIndex_k__BackingField; // 0x18
		::System::String* _DialogType_k__BackingField; // 0x20
		::System::Single __duration_k__BackingField; // 0x28
		::System::Single __durationKr_k__BackingField; // 0x2C
		::System::Single _DurationAdd_k__BackingField; // 0x30
		::System::Boolean _HideUI_k__BackingField; // 0x34
		::System::String* _LocalizedText_k__BackingField; // 0x38
		Il2CppObject* _VoiceIds_k__BackingField; // 0x40
		::System::Int64 _CharacterId_k__BackingField; // 0x48
		::System::Int64 _DisplayOrder_k__BackingField; // 0x50
		::System::Boolean _CollectionVisible_k__BackingField; // 0x58
		::FlatData::CVCollectionType* _CVCollectionType_k__BackingField; // 0x5C
		::FlatData::CVUnlockScenarioType* _CVUnlockScenarioType_k__BackingField; // 0x60
		::System::Int64 _ScenarioGroupId_k__BackingField; // 0x68
		::System::Int64 _UnlockEventSeason_k__BackingField; // 0x70
		::System::String* _LocalizeCVGroup_k__BackingField; // 0x78

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Void set_TargetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_TARGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_DialogType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DialogType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DIALOGTYPE_OFFSET))(str, nullptr);
		}

		::System::Single get__duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET__DURATION_OFFSET))(nullptr);
		}

		::System::Void set__duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET__DURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get__durationKr()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET__DURATIONKR_OFFSET))(nullptr);
		}

		::System::Void set__durationKr(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET__DURATIONKR_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Single get_DurationAdd()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DURATIONADD_OFFSET))(nullptr);
		}

		::System::Void set_DurationAdd(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DURATIONADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_HIDEUI_OFFSET))(nullptr);
		}

		::System::Void set_HideUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_HIDEUI_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizedText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_LOCALIZEDTEXT_OFFSET))(nullptr);
		}

		::System::Void set_LocalizedText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_LOCALIZEDTEXT_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_VoiceIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_VOICEIDS_OFFSET))(nullptr);
		}

		::System::Void set_VoiceIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_VOICEIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_CollectionVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_COLLECTIONVISIBLE_OFFSET))(arg, nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CVCollectionType(::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CVCOLLECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::CVUnlockScenarioType* get_CVUnlockScenarioType()
		{
			return (return (::FlatData::CVUnlockScenarioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_CVUNLOCKSCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CVUnlockScenarioType(::FlatData::CVUnlockScenarioType* arg)
		{
			((::System::Void(*)(::FlatData::CVUnlockScenarioType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_CVUNLOCKSCENARIOTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_SCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UnlockEventSeason()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_UNLOCKEVENTSEASON_OFFSET))(nullptr);
		}

		::System::Void set_UnlockEventSeason(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_UNLOCKEVENTSEASON_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeCVGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_SET_LOCALIZECVGROUP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterDialogEmojiExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterDialogEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

