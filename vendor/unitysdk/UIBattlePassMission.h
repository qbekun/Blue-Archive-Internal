#pragma once
#include "unitysdk.h"

class MXButton;
class UIBattlePassMissionScroll;
class UIBattlePassMissionSpineHandler;
class UIBattlePassLevelInfo;
class UITopResourceDisplay;
class MissionListResponseMessage;
class BattlePassMissionRewardResponseMessage;
class BattlePassTask;
class CurrencyUpdateMessage;
class MoveToNewUIWithShortcutMessage;

#define UIBATTLEPASSMISSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2246220)
#define UIBATTLEPASSMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2246580)
#define UIBATTLEPASSMISSION_OPEN_OFFSET UNITYSDK_OFFSET(0x2246600)
#define UIBATTLEPASSMISSION_HANDLEBATTLEPASSMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2246640)
#define UIBATTLEPASSMISSION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x2246680)
#define UIBATTLEPASSMISSION_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22468A0)
#define UIBATTLEPASSMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x22468C0)
#define UIBATTLEPASSMISSION_REFRESH_OFFSET UNITYSDK_OFFSET(0x22465C0)
#define UIBATTLEPASSMISSION_EXIT_OFFSET UNITYSDK_OFFSET(0x2246910)
#define UIBATTLEPASSMISSION_GET_TASK_OFFSET UNITYSDK_OFFSET(0x22463E0)
#define UIBATTLEPASSMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2246960)
#define UIBATTLEPASSMISSION_ONCURRENCYUPDATE_OFFSET UNITYSDK_OFFSET(0x2246BA0)
#define UIBATTLEPASSMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2246C40)
#define UIBATTLEPASSMISSION_ONMOVETONEWUIWITHSHORTCUTMESSAGE_OFFSET UNITYSDK_OFFSET(0x2246EF0)
#define UIBATTLEPASSMISSION_ONCLICKMAINLOBBYBUTTON_OFFSET UNITYSDK_OFFSET(0x2246FA0)

	inline static constexpr unsigned int UIBattlePassMission_TypeDefinitionIndex = 4501;

	class UIBattlePassMission : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0x18
		MXButton* lobbyButton; // 0x20
		UIBattlePassMissionScroll* ScrollController; // 0x28
		UIBattlePassMissionSpineHandler* SpineHandler; // 0x30
		UIBattlePassLevelInfo* LevelInfo; // 0x38
		UITopResourceDisplay* GemResourceDisplay; // 0x40
		::System::Action* onClickBattlePassLobby; // 0x48

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONOPENED_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(MissionListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(MissionListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_OPEN_OFFSET))(nullptr);
		}

		::System::Boolean HandleBattlePassMissionRewardResponseMessage(BattlePassMissionRewardResponseMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassMissionRewardResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_HANDLEBATTLEPASSMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAwake(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_EXIT_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean OnCurrencyUpdate(CurrencyUpdateMessage* arg)
		{
			return ((::System::Boolean(*)(CurrencyUpdateMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONCURRENCYUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean OnMoveToNewUIWithShortcutMessage(MoveToNewUIWithShortcutMessage* arg)
		{
			return ((::System::Boolean(*)(MoveToNewUIWithShortcutMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONMOVETONEWUIWITHSHORTCUTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMainLobbyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSION_ONCLICKMAINLOBBYBUTTON_OFFSET))(nullptr);
		}

	};

