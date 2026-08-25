#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterDialogEventExcel; }
namespace FlatData { class CVUnlockScenarioType; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class Nation; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class DialogType; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace FlatData { class DialogConditionDetail; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class Language; }

#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x1837BE0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_UNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x1837BF0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1837C00)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837C10)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x1837C50)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1837D20)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1837D30)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1837D40)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1837D50)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1837D60)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1837D90)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_DURATION_OFFSET UNITYSDK_OFFSET(0x1837DA0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1837DC0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1837DD0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1837DE0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1837DF0)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837E00)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1837E10)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_SCENARIOCHARACTERSHAPES_OFFSET UNITYSDK_OFFSET(0x1837E20)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1837E30)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1837E40)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1837E50)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1837E60)
#define MX_DATA_CHARACTERDIALOGEVENTINFO_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1837EA0)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogEventInfo_TypeDefinitionIndex = 15745;

	class CharacterDialogEventInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterDialogEventExcel* Excel; // 0x10

		::FlatData::CVUnlockScenarioType* get_CVUnlockScenarioType()
		{
			return (return (::FlatData::CVUnlockScenarioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CVUNLOCKSCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockEventSeason()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_UNLOCKEVENTSEASON_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_VoiceIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_VOICEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_DialogConditionDetailValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITIONDETAILVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterDialogEventExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterDialogEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Int64 Duration(::FlatData::Nation* arg)
		{
			return (return (::System::Int64(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterShapes* get_ScenarioCharacterShapes()
		{
			return (return (::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_SCENARIOCHARACTERSHAPES_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::DialogConditionDetail* get_DialogConditionDetail()
		{
			return (return (::FlatData::DialogConditionDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_DIALOGCONDITIONDETAIL_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::String* Localize(::FlatData::Language* arg)
		{
			return (return (::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_LOCALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEVENTINFO_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

	};
}

