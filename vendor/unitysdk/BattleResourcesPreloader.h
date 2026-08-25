#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }
class BattleResourcesPreloader;
class LoadClassType;
namespace MX::Logic::Data { class TeamSetting; }
class EntityVisual;
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
class UIBattle;
class UIDamageFloater;
class UIHPBar;
namespace UnityEngine::Playables { class PlayableAsset; }

#define BATTLERESOURCESPRELOADER_GET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x20F4580)
#define BATTLERESOURCESPRELOADER_SET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x20F4590)
#define BATTLERESOURCESPRELOADER_GET_LOADCOUNT_OFFSET UNITYSDK_OFFSET(0x20F45A0)
#define BATTLERESOURCESPRELOADER_SET_LOADCOUNT_OFFSET UNITYSDK_OFFSET(0x20F45B0)
#define BATTLERESOURCESPRELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F45C0)
#define BATTLERESOURCESPRELOADER_START_OFFSET UNITYSDK_OFFSET(0x20F4740)
#define BATTLERESOURCESPRELOADER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x20F4D40)
#define BATTLERESOURCESPRELOADER_COLOADFORTUTORIAL_OFFSET UNITYSDK_OFFSET(0x20F4C00)
#define BATTLERESOURCESPRELOADER_COLOADFORLOWDEVICE_OFFSET UNITYSDK_OFFSET(0x20F4B60)
#define BATTLERESOURCESPRELOADER_COLOAD_OFFSET UNITYSDK_OFFSET(0x20F4CA0)
#define BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET UNITYSDK_OFFSET(0x20F4E50)
#define BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET UNITYSDK_OFFSET(0x20F50E0)
#define BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET UNITYSDK_OFFSET(0x20F4FF0)
#define BATTLERESOURCESPRELOADER_CO_NOWAITPRELOAD_OFFSET UNITYSDK_OFFSET(0x20F52C0)
#define BATTLERESOURCESPRELOADER_LOADUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define BATTLERESOURCESPRELOADER_DONTRELEASEBATTLERESOURCEPRELOAD_OFFSET UNITYSDK_OFFSET(0x20F5350)
#define BATTLERESOURCESPRELOADER_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define BATTLERESOURCESPRELOADER_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define BATTLERESOURCESPRELOADER_LOADCOMMONEFFECT_OFFSET UNITYSDK_OFFSET(0x20F54D0)
#define BATTLERESOURCESPRELOADER_LOADVICTORYTIMELINE_OFFSET UNITYSDK_OFFSET(0x20F56E0)
#define BATTLERESOURCESPRELOADER_LOADTEAM_OFFSET UNITYSDK_OFFSET(0x20F5770)
#define BATTLERESOURCESPRELOADER_LOADCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x20F8460)
#define BATTLERESOURCESPRELOADER_LOADCHARACTER_OFFSET UNITYSDK_OFFSET(0x20F7150)
#define BATTLERESOURCESPRELOADER_LOADSKILLENTITYDATAVISUAL_OFFSET UNITYSDK_OFFSET(0x20F8AE0)
#define BATTLERESOURCESPRELOADER_COLLECTSKILLVISUALDATA_OFFSET UNITYSDK_OFFSET(0x20F9470)
#define BATTLERESOURCESPRELOADER_LOADSKILLVISUAL_OFFSET UNITYSDK_OFFSET(0x20FAD50)
#define BATTLERESOURCESPRELOADER_LOADSKILLLOGICEFFECTASSET_OFFSET UNITYSDK_OFFSET(0x20FE780)
#define BATTLERESOURCESPRELOADER_LOADGROUNDCHARACTER_OFFSET UNITYSDK_OFFSET(0x20FED00)
#define BATTLERESOURCESPRELOADER_LOADGROUNDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x20FEDB0)
#define BATTLERESOURCESPRELOADER_LOADGROUND_OFFSET UNITYSDK_OFFSET(0x20FEE30)
#define BATTLERESOURCESPRELOADER_GETGROUNDPRELOADTABLE_OFFSET UNITYSDK_OFFSET(0x20F4A70)
#define BATTLERESOURCESPRELOADER__COLOAD_B__24_0_OFFSET UNITYSDK_OFFSET(0x20FEEB0)
#define BATTLERESOURCESPRELOADER__COLOAD_B__24_1_OFFSET UNITYSDK_OFFSET(0x20FEEC0)
#define BATTLERESOURCESPRELOADER__COLOAD_B__24_2_OFFSET UNITYSDK_OFFSET(0x20FEED0)
#define BATTLERESOURCESPRELOADER__LOADUI_B__29_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define BATTLERESOURCESPRELOADER__LOADASYNC_B__31_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define BATTLERESOURCESPRELOADER__LOADCUTINTIMELINE_B__36_0_OFFSET UNITYSDK_OFFSET(0x20FEEE0)
#define BATTLERESOURCESPRELOADER__LOADCUTINTIMELINE_B__36_1_OFFSET UNITYSDK_OFFSET(0x20FEEF0)

	inline static constexpr unsigned int BattleResourcesPreloader_TypeDefinitionIndex = 3849;

	class BattleResourcesPreloader : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleSetting* _BattleSetting_k__BackingField; // 0x10
		::System::Int32 _LoadCount_k__BackingField; // 0x18
		Il2CppObject* alreadyLoadedSkillEntityList; // 0x20
		BattleResourcesPreloader* instance; // 0x0
		Il2CppObject* alreadies; // 0x28
		Il2CppObject* loadDatas; // 0x30
		Il2CppObject* skillListDatas; // 0x38
		Il2CppObject* skillListExcelDatas; // 0x40
		Il2CppObject* logicEffectGroupIds; // 0x48

		::MX::Logic::Data::BattleSetting* get_BattleSetting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_GET_BATTLESETTING_OFFSET))(nullptr);
		}

		::System::Void set_BattleSetting(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_SET_BATTLESETTING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_GET_LOADCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LoadCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_SET_LOADCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start(::MX::Logic::Data::BattleSetting* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_START_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Preload(::MX::Logic::Data::BattleSetting* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_PRELOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadForTutorial(::System::Action* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_COLOADFORTUTORIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadForLowDevice(::System::Action* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_COLOADFORLOWDEVICE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoLoad(::System::Action* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_COLOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnqueueLoadData(::System::String* str, ::MX::AppData::DAO::Battle::VisualEffectDAO&* arg, LoadClassType* arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::AppData::DAO::Battle::VisualEffectDAO&*, LoadClassType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void EnqueueLoadData(::System::String* str, ::MX::AppData::DAO::Battle::ParticleEffectDAO&* arg, LoadClassType* arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::AppData::DAO::Battle::ParticleEffectDAO&*, LoadClassType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void EnqueueLoadData(::System::String* str, LoadClassType* arg)
		{
			((::System::Void(*)(::System::String*, LoadClassType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_ENQUEUELOADDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* co_NoWaitPreLoad()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_CO_NOWAITPRELOAD_OFFSET))(nullptr);
		}

		::System::Void LoadUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADUI_OFFSET))(nullptr);
		}

		::System::Void DontReleaseBattleResourcePreLoad(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_DONTRELEASEBATTLERESOURCEPRELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void LoadAsync(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADASYNC_OFFSET))(str, nullptr);
		}

		::System::Void LoadAsync(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadCommoneffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADCOMMONEFFECT_OFFSET))(nullptr);
		}

		::System::Void LoadVictoryTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADVICTORYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void LoadTeam(::MX::Logic::Data::TeamSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADTEAM_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCutInTimeline(EntityVisual* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(EntityVisual*, ::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADCUTINTIMELINE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void LoadCharacter(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, str, nullptr);
		}

		::System::Void LoadSkillEntityDataVisual(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADSKILLENTITYDATAVISUAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CollectSkillVisualData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_COLLECTSKILLVISUALDATA_OFFSET))(nullptr);
		}

		::System::Void LoadSkillVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADSKILLVISUAL_OFFSET))(nullptr);
		}

		::System::Void LoadSkillLogicEffectAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADSKILLLOGICEFFECTASSET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LoadGroundCharacter(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADGROUNDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadGroundObstacle(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADGROUNDOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadGround(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_LOADGROUND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGroundPreloadTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER_GETGROUNDPRELOADTABLE_OFFSET))(nullptr);
		}

		::System::Void _CoLoad_b__24_0(UIBattle* arg)
		{
			((::System::Void(*)(UIBattle*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__COLOAD_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CoLoad_b__24_1(UIDamageFloater* arg)
		{
			((::System::Void(*)(UIDamageFloater*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__COLOAD_B__24_1_OFFSET))(arg, nullptr);
		}

		::System::Void _CoLoad_b__24_2(UIHPBar* arg)
		{
			((::System::Void(*)(UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__COLOAD_B__24_2_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadUI_b__29_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__LOADUI_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadAsync_b__31_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__LOADASYNC_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadCutInTimeline_b__36_0(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__LOADCUTINTIMELINE_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadCutInTimeline_b__36_1(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLERESOURCESPRELOADER__LOADCUTINTIMELINE_B__36_1_OFFSET))(arg, nullptr);
		}

	};

