#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterDialogBattlePassExcel; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class Language; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class DialogType; }
namespace FlatData { class Nation; }
namespace FlatData { class DialogConditionDetail; }

#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1837250)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1837260)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1837270)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1837280)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_UNLOCKBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1837290)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ISTEEN_OFFSET UNITYSDK_OFFSET(0x18372A0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x18372B0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x18372F0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18373C0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x18373D0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1837410)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1837420)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1837430)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837440)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1837450)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1837460)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_DURATION_OFFSET UNITYSDK_OFFSET(0x1837470)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1837490)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x18374A0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18374D0)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1837510)
#define MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1837520)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogBattlePassInfo_TypeDefinitionIndex = 15742;

	class CharacterDialogBattlePassInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterDialogBattlePassExcel* Excel; // 0x10

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockBattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_UNLOCKBATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTeen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ISTEEN_OFFSET))(nullptr);
		}

		::System::String* Localize(::FlatData::Language* arg)
		{
			return (return (::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_LOCALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VoiceIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_VOICEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_DialogConditionDetailValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITIONDETAILVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Int64 Duration(::FlatData::Nation* arg)
		{
			return (return (::System::Int64(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_DURATION_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogConditionDetail* get_DialogConditionDetail()
		{
			return (return (::FlatData::DialogConditionDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_DIALOGCONDITIONDETAIL_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterDialogBattlePassExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterDialogBattlePassExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGBATTLEPASSINFO_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

	};
}

