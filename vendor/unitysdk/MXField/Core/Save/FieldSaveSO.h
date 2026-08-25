#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::Save { class FieldClientSaveData; }
namespace MXField::Actions { class FieldActionPlayer; }
namespace MXField::Shared::Model { class FieldMasteryDB; }
namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }
namespace MXField::Shared::Model { class FieldSnapshot; }
namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Shared::Model { class FieldQuestDB; }
namespace MXField::Shared::Model { class FieldDateHistoryDB; }

#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xEE1B60)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEE1B70)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISREPLAYDATA_OFFSET UNITYSDK_OFFSET(0xEE1BB0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0xEE1BD0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISNARRATIVEMODE_OFFSET UNITYSDK_OFFSET(0xED52C0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SET_ISNARRATIVEMODE_OFFSET UNITYSDK_OFFSET(0xEE1BF0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xED5B60)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xEE1AF0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SCENEID_OFFSET UNITYSDK_OFFSET(0xED9120)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xEE1C10)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_INTERACTIONDBS_OFFSET UNITYSDK_OFFSET(0xED5CB0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ENDDATEIDS_OFFSET UNITYSDK_OFFSET(0xEE16C0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_CLEARQUESTDBS_OFFSET UNITYSDK_OFFSET(0xEE1C30)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_DAILYQUESTDBS_OFFSET UNITYSDK_OFFSET(0xEE1C50)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xEE1C70)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEE1CA0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_EXP_OFFSET UNITYSDK_OFFSET(0xEE1D20)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_MASTERYDB_OFFSET UNITYSDK_OFFSET(0xEE1DB0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ENTEREDWORLDMAPIDS_OFFSET UNITYSDK_OFFSET(0xEE1DE0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xEE1E00)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SET_ACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xEE1E10)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_CLEAR_OFFSET UNITYSDK_OFFSET(0xEE0E20)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_RESETTEST_OFFSET UNITYSDK_OFFSET(0xEE1E50)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_CREATEREPLAYSAVEDATA_OFFSET UNITYSDK_OFFSET(0xEE16E0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_CREATEFREEMODESAVEDATA_OFFSET UNITYSDK_OFFSET(0xEE1190)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE11B0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE1A70)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESCENEDATA_OFFSET UNITYSDK_OFFSET(0xED8540)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEINTERACTION_OFFSET UNITYSDK_OFFSET(0xED5DF0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVECLEARQUEST_OFFSET UNITYSDK_OFFSET(0xEE2010)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEENDDATE_OFFSET UNITYSDK_OFFSET(0xEE2050)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESTAGEHISTORIES_OFFSET UNITYSDK_OFFSET(0xED4000)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEMASTERY_OFFSET UNITYSDK_OFFSET(0xED70B0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESCENARIO_OFFSET UNITYSDK_OFFSET(0xEE2090)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVETIMELINE_OFFSET UNITYSDK_OFFSET(0xEE20D0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEENTEREDWORLDMAP_OFFSET UNITYSDK_OFFSET(0xEE2110)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_ISALREADYENTEREDWORLDMAP_OFFSET UNITYSDK_OFFSET(0xEE22E0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xEE1E20)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xEE2410)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEASSET_OFFSET UNITYSDK_OFFSET(0xEE25B0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEWITHOUTACTION_OFFSET UNITYSDK_OFFSET(0xEE25C0)
#define MXFIELD_CORE_SAVE_FIELDSAVESO_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE2670)
#define MXFIELD_CORE_SAVE_FIELDSAVESO__SAVEWITHOUTACTION_G__CREATEDIRECTORY|61_0_OFFSET UNITYSDK_OFFSET(0xEE26E0)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldSaveSO_TypeDefinitionIndex = 11002;

	class FieldSaveSO : public Il2CppObject
	{
	public:
		::MXField::Core::Save::FieldClientSaveData* saveData; // 0x18
		::MXField::Actions::FieldActionPlayer* _ActionPlayer_k__BackingField; // 0x20

		::MXField::Core::Save::FieldClientSaveData* get_SaveData()
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SAVEDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReplayData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISREPLAYDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISFREEMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNarrativeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ISNARRATIVEMODE_OFFSET))(nullptr);
		}

		::System::Void set_IsNarrativeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SET_ISNARRATIVEMODE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_SceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_SCENEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_OPENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_InteractionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_INTERACTIONDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EndDateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ENDDATEIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClearQuestDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_CLEARQUESTDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DailyQuestDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_DAILYQUESTDBS_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_EXP_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldMasteryDB* get_MasteryDB()
		{
			return ((::MXField::Shared::Model::FieldMasteryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_MASTERYDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_EnteredWorldMapIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ENTEREDWORLDMAPIDS_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldActionPlayer* get_ActionPlayer()
		{
			return ((::MXField::Actions::FieldActionPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_GET_ACTIONPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_ActionPlayer(::MXField::Actions::FieldActionPlayer* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldActionPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SET_ACTIONPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ResetTest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_RESETTEST_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* CreateReplaySaveData(::System::Int64 arg)
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_CREATEREPLAYSAVEDATA_OFFSET))(arg, nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* CreateFreeModeSaveData(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg)
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_CREATEFREEMODESAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXField::Core::Save::FieldClientSaveData* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldClientSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXField::Shared::Model::FieldSnapshot* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldSnapshot*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveSceneData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESCENEDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SaveInteraction(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SaveClearQuest(::MXField::Shared::Model::FieldQuestDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldQuestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVECLEARQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SaveEndDate(::MXField::Shared::Model::FieldDateHistoryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldDateHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveStageHistories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESTAGEHISTORIES_OFFSET))(nullptr);
		}

		::System::Void SaveMastery(::MXField::Shared::Model::FieldMasteryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldMasteryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEMASTERY_OFFSET))(arg, nullptr);
		}

		::System::Void SaveScenario(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void SaveTimeline(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVETIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveEnteredWorldMap(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEENTEREDWORLDMAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAlreadyEnteredWorldMap(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_ISALREADYENTEREDWORLDMAP_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SETDIRTY_OFFSET))(nullptr);
		}

		::System::Void SaveToLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVETOLOCAL_OFFSET))(nullptr);
		}

		::System::Void SaveAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEASSET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SaveWithoutAction(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_SAVEWITHOUTACTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SaveWithoutAction_g__CreateDirectory|61_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVESO__SAVEWITHOUTACTION_G__CREATEDIRECTORY|61_0_OFFSET))(nullptr);
		}

	};
}

