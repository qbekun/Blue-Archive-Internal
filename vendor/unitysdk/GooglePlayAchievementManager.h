#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
class PlatformService;
class MXAccount;
namespace FlatData { class ConditionType; }
namespace MX::Logic::Battles { class PlayerSkillCardUsedEventArgs; }

#define GOOGLEPLAYACHIEVEMENTMANAGER_ONCAFEPRESETSAVED_OFFSET UNITYSDK_OFFSET(0xC5BE20)
#define GOOGLEPLAYACHIEVEMENTMANAGER_LOGTUTORIALCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0xC5C390)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONPICKUPGACHAFIRSTGET_OFFSET UNITYSDK_OFFSET(0xC5C3D0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLECLEAREDWITHINFRAME_OFFSET UNITYSDK_OFFSET(0xC5C840)
#define GOOGLEPLAYACHIEVEMENTMANAGER_UNLOCKCOMPLETEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC5CCD0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_TRYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC5C340)
#define GOOGLEPLAYACHIEVEMENTMANAGER_TRYBACKFILLACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xC5D200)
#define GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLUNLOCKEDWEAPON_OFFSET UNITYSDK_OFFSET(0xC5E1F0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONTUTORIALDATALOADED_OFFSET UNITYSDK_OFFSET(0xC5E640)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONMOMOTALKHISTORYUPDATED_OFFSET UNITYSDK_OFFSET(0xC5D8A0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONGEAREQUIPPED_OFFSET UNITYSDK_OFFSET(0xC5D440)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONMEMORIALLOBBYSCREENSHOTEXITED_OFFSET UNITYSDK_OFFSET(0xC5E6A0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLMAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0xC5E100)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONSEASONBIRTHDAYPLAYERDIALOGOPENED_OFFSET UNITYSDK_OFFSET(0xC5EBB0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONASSISTUSEDBYOTHER_OFFSET UNITYSDK_OFFSET(0xC5F020)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONMEMORIALLOBBYSCREENSHOTENTERED_OFFSET UNITYSDK_OFFSET(0xC5F490)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONACHIEVEMENTDATALOADED_OFFSET UNITYSDK_OFFSET(0xC5F500)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONTRANSCENDENCEMAXREACHED_OFFSET UNITYSDK_OFFSET(0xC5F560)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONWEAPONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC5F9D0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLCOMPLETEDSCENARIO_OFFSET UNITYSDK_OFFSET(0xC5DD00)
#define GOOGLEPLAYACHIEVEMENTMANAGER_UNLOCKALLBYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC5E280)
#define GOOGLEPLAYACHIEVEMENTMANAGER_GETVALIDPLATFORMSERVICE_OFFSET UNITYSDK_OFFSET(0xC5C290)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONPLAYERSKILLCARDUSED_OFFSET UNITYSDK_OFFSET(0xC5FE40)
#define GOOGLEPLAYACHIEVEMENTMANAGER_LOGBACKFILLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xC60390)
#define GOOGLEPLAYACHIEVEMENTMANAGER_LOGTEMP_OFFSET UNITYSDK_OFFSET(0xC607A0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC607B0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONACCOUNTSYNCCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC60860)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLESTARTED_OFFSET UNITYSDK_OFFSET(0xC608B0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONACCOUNTSYNCSTARTED_OFFSET UNITYSDK_OFFSET(0xC60AA0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLEENDED_OFFSET UNITYSDK_OFFSET(0xC60AF0)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONTUTORIALCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC60C90)
#define GOOGLEPLAYACHIEVEMENTMANAGER_ONSCENARIOCLEARED_OFFSET UNITYSDK_OFFSET(0xC60E50)

	inline static constexpr unsigned int GooglePlayAchievementManager_TypeDefinitionIndex = 8958;

	class GooglePlayAchievementManager : public Il2CppObject
	{
	public:
		::System::Boolean s_accountSynced; // 0x0
		::MX::Logic::Battles::Battle* s_currentBattle; // 0x8
		Il2CppObject* s_exSkillUsageCounts; // 0x10
		::System::Single s_memorialLobbyScreenshotEnterTime; // 0x18

		::System::Void OnCafePresetSaved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONCAFEPRESETSAVED_OFFSET))(nullptr);
		}

		::System::Void LogTutorialCompletionIds(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_LOGTUTORIALCOMPLETIONIDS_OFFSET))(str, nullptr);
		}

		::System::Void OnPickupGachaFirstGet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONPICKUPGACHAFIRSTGET_OFFSET))(nullptr);
		}

		::System::Void OnBattleClearedWithinFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLECLEAREDWITHINFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void UnlockCompletedTutorial(PlatformService* arg, MXAccount* arg2)
		{
			((::System::Void(*)(PlatformService*, MXAccount*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_UNLOCKCOMPLETEDTUTORIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TryUnlock(PlatformService* arg, ::System::String* str)
		{
			((::System::Void(*)(PlatformService*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_TRYUNLOCK_OFFSET))(arg, str, nullptr);
		}

		::System::Void TryBackfillAchievements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_TRYBACKFILLACHIEVEMENTS_OFFSET))(nullptr);
		}

		::System::Void BackfillUnlockedWeapon(PlatformService* arg, MXAccount* arg2)
		{
			((::System::Void(*)(PlatformService*, MXAccount*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLUNLOCKEDWEAPON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTutorialDataLoaded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONTUTORIALDATALOADED_OFFSET))(nullptr);
		}

		::System::Void OnMomotalkHistoryUpdated(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONMOMOTALKHISTORYUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnGearEquipped(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONGEAREQUIPPED_OFFSET))(arg, nullptr);
		}

		::System::Void OnMemorialLobbyScreenshotExited()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONMEMORIALLOBBYSCREENSHOTEXITED_OFFSET))(nullptr);
		}

		::System::Void BackfillMaxStarGrade(PlatformService* arg, MXAccount* arg2)
		{
			((::System::Void(*)(PlatformService*, MXAccount*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLMAXSTARGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSeasonBirthdayPlayerDialogOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONSEASONBIRTHDAYPLAYERDIALOGOPENED_OFFSET))(nullptr);
		}

		::System::Void OnAssistUsedByOther()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONASSISTUSEDBYOTHER_OFFSET))(nullptr);
		}

		::System::Void OnMemorialLobbyScreenshotEntered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONMEMORIALLOBBYSCREENSHOTENTERED_OFFSET))(nullptr);
		}

		::System::Void OnAchievementDataLoaded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONACHIEVEMENTDATALOADED_OFFSET))(nullptr);
		}

		::System::Void OnTranscendenceMaxReached()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONTRANSCENDENCEMAXREACHED_OFFSET))(nullptr);
		}

		::System::Void OnWeaponUnlocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONWEAPONUNLOCKED_OFFSET))(nullptr);
		}

		::System::Void BackfillCompletedScenario(PlatformService* arg, MXAccount* arg2)
		{
			((::System::Void(*)(PlatformService*, MXAccount*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_BACKFILLCOMPLETEDSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnlockAllByConditionType(PlatformService* arg, ::FlatData::ConditionType* arg2)
		{
			((::System::Void(*)(PlatformService*, ::FlatData::ConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_UNLOCKALLBYCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		PlatformService* GetValidPlatformService()
		{
			return ((PlatformService*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_GETVALIDPLATFORMSERVICE_OFFSET))(nullptr);
		}

		::System::Void OnPlayerSkillCardUsed(::System::Object* arg, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONPLAYERSKILLCARDUSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogBackfillSnapshot(MXAccount* arg, PlatformService* arg2)
		{
			((::System::Void(*)(MXAccount*, PlatformService*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_LOGBACKFILLSNAPSHOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogTemp(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_LOGTEMP_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnAccountSyncCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONACCOUNTSYNCCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnBattleStarted(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLESTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAccountSyncStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONACCOUNTSYNCSTARTED_OFFSET))(nullptr);
		}

		::System::Void OnBattleEnded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONBATTLEENDED_OFFSET))(nullptr);
		}

		::System::Void OnTutorialCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONTUTORIALCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnScenarioCleared(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GOOGLEPLAYACHIEVEMENTMANAGER_ONSCENARIOCLEARED_OFFSET))(arg, nullptr);
		}

	};

