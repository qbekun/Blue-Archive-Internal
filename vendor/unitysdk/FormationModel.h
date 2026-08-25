#pragma once
#include "unitysdk.h"

class FormationModel;
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
class From;
class EchelonSlots;
class CharacterObject;
class FormationSupportStatChange;
namespace MX::GameLogic::DBModel { class EchelonDB; }
class EchelonObject;

#define FORMATIONMODEL_CLEARECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x24D8280)
#define FORMATIONMODEL_GET_CURRENTCONTENTISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0x24D82A0)
#define FORMATIONMODEL_GET_SKILLHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x24D82B0)
#define FORMATIONMODEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x24D82C0)
#define FORMATIONMODEL_OPENPOPUPECHELONEDITWARNINGFULLMESSAGE_OFFSET UNITYSDK_OFFSET(0x24D8400)
#define FORMATIONMODEL_GET_CURRENTCONTENTUSEASSIST_OFFSET UNITYSDK_OFFSET(0x24D8530)
#define FORMATIONMODEL_OPENPOPUPECHELONEDITWARNING_OFFSET UNITYSDK_OFFSET(0x24D8550)
#define FORMATIONMODEL_SET_ISSTRIKERMODE_OFFSET UNITYSDK_OFFSET(0x24D8680)
#define FORMATIONMODEL_SETSLOTCARDS_OFFSET UNITYSDK_OFFSET(0x24D8690)
#define FORMATIONMODEL_ISUSING_OFFSET UNITYSDK_OFFSET(0x24D6810)
#define FORMATIONMODEL_TRYGETLONGEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x24D86A0)
#define FORMATIONMODEL_ISINECHELON_OFFSET UNITYSDK_OFFSET(0x24D87D0)
#define FORMATIONMODEL_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x24D8B90)
#define FORMATIONMODEL_GET_SHOWENEMYINFO_OFFSET UNITYSDK_OFFSET(0x24D8BB0)
#define FORMATIONMODEL_ISBLACKLIST_OFFSET UNITYSDK_OFFSET(0x24D68A0)
#define FORMATIONMODEL_ISSAMECHARACTERINECHELON_OFFSET UNITYSDK_OFFSET(0x24D8BE0)
#define FORMATIONMODEL_GETSUPPORTSTATCHANGE_OFFSET UNITYSDK_OFFSET(0x24D8D10)
#define FORMATIONMODEL_GETEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x24D8700)
#define FORMATIONMODEL_ALLOWEDBYPERSONALITY_OFFSET UNITYSDK_OFFSET(0x24D8C10)
#define FORMATIONMODEL_CONTAINSSLOT_OFFSET UNITYSDK_OFFSET(0x24D8D30)
#define FORMATIONMODEL_SET_SKILLHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x24D8EB0)
#define FORMATIONMODEL_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x24D8EC0)
#define FORMATIONMODEL_GET_ISSTRIKERMODE_OFFSET UNITYSDK_OFFSET(0x24D8ED0)
#define FORMATIONMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D8330)
#define FORMATIONMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x24D8EE0)
#define FORMATIONMODEL_ISREADY_OFFSET UNITYSDK_OFFSET(0x24D6CD0)
#define FORMATIONMODEL_ISECHELONSAMEWITHCURRENT_OFFSET UNITYSDK_OFFSET(0x24D8F30)
#define FORMATIONMODEL_GET_CURRENTECHELON_OFFSET UNITYSDK_OFFSET(0x24D9030)

	inline static constexpr unsigned int FormationModel_TypeDefinitionIndex = 5973;

	class FormationModel : public Il2CppObject
	{
	public:
		FormationModel* instance; // 0x0
		::System::Int64 StageId; // 0x10
		::System::Int64 SeasonId; // 0x18
		::FlatData::StageTopography* StageTopography; // 0x20
		::System::Boolean IsPresetVersion; // 0x24
		::System::Boolean IsPracticeBattle; // 0x25
		::FlatData::EchelonType* EchelonType; // 0x28
		::System::Int64 CurrentEchelonId; // 0x30
		::FlatData::EchelonExtensionType* _extensionType; // 0x38
		::System::Int32 _SkillHandSlotCount_k__BackingField; // 0x3C
		::System::Boolean _IsStrikerMode_k__BackingField; // 0x40
		From* CurrentContent; // 0x44
		Il2CppObject* PersonalityIds; // 0x48
		::System::Boolean OpenCharacterDetailOrFormationPopup; // 0x50
		Il2CppObject* DisableCharacters; // 0x58
		Il2CppObject* DisableAssistCharacters; // 0x60
		Il2CppObject* AvailableCharacterIds; // 0x68
		EchelonSlots* echelonSlots; // 0x70
		Il2CppObject* defenseBanCharacterCache; // 0x78

		::System::Void ClearechelonSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_CLEARECHELONSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean get_CurrentContentIsWeekDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_CURRENTCONTENTISWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillHandSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_SKILLHANDSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OpenPopupEchelonEditWarningFullMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_OPENPOPUPECHELONEDITWARNINGFULLMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CurrentContentUseAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_CURRENTCONTENTUSEASSIST_OFFSET))(nullptr);
		}

		::System::Void OpenPopupEchelonEditWarning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_OPENPOPUPECHELONEDITWARNING_OFFSET))(str, nullptr);
		}

		::System::Void set_IsStrikerMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_SET_ISSTRIKERMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSlotCards(EchelonSlots* arg)
		{
			((::System::Void(*)(EchelonSlots*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_SETSLOTCARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUsing(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISUSING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLongEventContentId(int64_t&* arg)
		{
			return ((::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_TRYGETLONGEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInEchelon(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISINECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowEnemyInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_SHOWENEMYINFO_OFFSET))(nullptr);
		}

		::System::Boolean IsBlackList(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISBLACKLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSameCharacterInEchelon(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISSAMECHARACTERINECHELON_OFFSET))(arg, nullptr);
		}

		FormationSupportStatChange* GetSupportStatChange(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((FormationSupportStatChange*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GETSUPPORTSTATCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GETEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean AllowedByPersonality(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ALLOWEDBYPERSONALITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsSlot(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_CONTAINSSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillHandSlotCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_SET_SKILLHANDSLOTCOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStrikerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_ISSTRIKERMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_.CTOR_OFFSET))(nullptr);
		}

		FormationModel* get_Instance()
		{
			return ((FormationModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean IsReady(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISREADY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEchelonSameWithCurrent(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_ISECHELONSAMEWITHCURRENT_OFFSET))(arg, nullptr);
		}

		EchelonObject* get_CurrentEchelon()
		{
			return ((EchelonObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONMODEL_GET_CURRENTECHELON_OFFSET))(nullptr);
		}

	};

