#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UISprite;
class UIPause_Roomtime;
namespace UnityEngine { class BoxCollider; }
class UIEventTrigger;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class MXBattleTask;
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace FlatData { class StageTopography; }
namespace MX::Logic::Data { class BattleTypes; }
class UIPopup_System;
class UIPause;
class CharacterObject;

#define UIPAUSE_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x26CAAB0)
#define UIPAUSE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26CAB90)
#define UIPAUSE_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0x26CACC0)
#define UIPAUSE_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0x26CAD70)
#define UIPAUSE_ONCLICKBACKTOLOBBY_OFFSET UNITYSDK_OFFSET(0x26CB080)
#define UIPAUSE_HANDLECONTENTSAVEGET_OFFSET UNITYSDK_OFFSET(0x26CB340)
#define UIPAUSE_ONBACK_OFFSET UNITYSDK_OFFSET(0x26CB8A0)
#define UIPAUSE_GET_BUTTONEXITACTIVEBG_OFFSET UNITYSDK_OFFSET(0x26CB9C0)
#define UIPAUSE_SETEXITMESSAGEKEY_OFFSET UNITYSDK_OFFSET(0x26CBA00)
#define UIPAUSE_GETEMOJISPRITENAME_OFFSET UNITYSDK_OFFSET(0x26CBB10)
#define UIPAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26CBBD0)
#define UIPAUSE_GET_BUTTONCONTINUE_OFFSET UNITYSDK_OFFSET(0x26CBC30)
#define UIPAUSE_RETRY_OFFSET UNITYSDK_OFFSET(0x26CBC70)
#define UIPAUSE_ISOPENED_OFFSET UNITYSDK_OFFSET(0x26CC940)
#define UIPAUSE_COEXIT_OFFSET UNITYSDK_OFFSET(0x26CCA30)
#define UIPAUSE__ONCLICKEXIT_B__49_0_OFFSET UNITYSDK_OFFSET(0x26CCAE0)
#define UIPAUSE_CORETRY_OFFSET UNITYSDK_OFFSET(0x26CCBD0)
#define UIPAUSE_GET_BUTTONOPTION_OFFSET UNITYSDK_OFFSET(0x26CCC60)
#define UIPAUSE_OPENASYNC_OFFSET UNITYSDK_OFFSET(0x26CCCA0)
#define UIPAUSE_EXIT_OFFSET UNITYSDK_OFFSET(0x26CCE40)
#define UIPAUSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x26CCF30)
#define UIPAUSE_GET_BUTTONEXITDEACTIVATEBG_OFFSET UNITYSDK_OFFSET(0x26CCFF0)
#define UIPAUSE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x26CB8B0)
#define UIPAUSE_GET_BUTTONEXIT_OFFSET UNITYSDK_OFFSET(0x26CD150)
#define UIPAUSE__RETRY_G__PROCESSRETRY|55_0_OFFSET UNITYSDK_OFFSET(0x26CBE00)
#define UIPAUSE_CLOSEUIBATTLE_OFFSET UNITYSDK_OFFSET(0x26CD030)
#define UIPAUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0x26CD190)
#define UIPAUSE_UNLOADBATTLE_OFFSET UNITYSDK_OFFSET(0x26CB810)
#define UIPAUSE_GET_OFFSET UNITYSDK_OFFSET(0x26CD7D0)
#define UIPAUSE_BACKTOLOBBY_OFFSET UNITYSDK_OFFSET(0x26CD950)
#define UIPAUSE__ONCLICKEXIT_B__49_1_OFFSET UNITYSDK_OFFSET(0x26CE1A0)
#define UIPAUSE__ONOPENED_G__FINDCHARACTER|42_1_OFFSET UNITYSDK_OFFSET(0x26CE7D0)
#define UIPAUSE_SETSTAGELABEL_OFFSET UNITYSDK_OFFSET(0x26CEA90)
#define UIPAUSE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26D0750)

	inline static constexpr unsigned int UIPause_TypeDefinitionIndex = 7023;

	class UIPause : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* EmptyList; // 0xD8
		::UnityEngine::GameObject* NormalSet; // 0xE0
		UILabel* EmptyLabel; // 0xE8
		::Il2CppArray<::System::Object*>* CharacterEmptyRoot; // 0xF0
		::Il2CppArray<::System::Object*>* CharacterCards; // 0xF8
		::Il2CppArray<::System::Object*>* HpSliders; // 0x100
		::Il2CppArray<::System::Object*>* BuffIconsPauseds; // 0x108
		::Il2CppArray<::System::Object*>* CharacterEmojis; // 0x110
		::Il2CppArray<::System::Object*>* SupporterEmptyRoot; // 0x118
		::Il2CppArray<::System::Object*>* SupportCharacterCards; // 0x120
		::Il2CppArray<::System::Object*>* SupporterBuffIconsPauseds; // 0x128
		::Il2CppArray<::System::Object*>* SupportCharacterEmojis; // 0x130
		MXButton* ButtonX; // 0x138
		::Il2CppArray<::System::Object*>* NormalAndRaidButtonGroup; // 0x140
		::Il2CppArray<::System::Object*>* ButtonContinueBind; // 0x148
		::Il2CppArray<::System::Object*>* ButtonExitBind; // 0x150
		::Il2CppArray<::System::Object*>* ButtonExitActiveBGBind; // 0x158
		::Il2CppArray<::System::Object*>* ButtonExitDeActivateBGBind; // 0x160
		::Il2CppArray<::System::Object*>* ButtonOptionBind; // 0x168
		MXButton* ButtonRetry; // 0x170
		MXButton* ButtonBackToLobby; // 0x178
		UILabel* StageNumLabel; // 0x180
		UILabel* StageNameLabel; // 0x188
		UISprite* stageNameBarSprite; // 0x190
		UISprite* ThemeSprite; // 0x198
		UIPause_Roomtime* RoomTime; // 0x1A0
		::UnityEngine::BoxCollider* buttonExitBoxCollider; // 0x1A8
		::System::String* exitMessageKey; // 0x1B0
		UIEventTrigger* triggerForCheat; // 0x1B8
		::System::Int32 retryFlag; // 0x1C0
		::System::Boolean retryCalled; // 0x1C4

		::System::Void OnClickExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLICKEXIT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLICKOPTION_OFFSET))(nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Void OnClickBackToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLICKBACKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Boolean HandleContentSaveGet(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_HANDLECONTENTSAVEGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONBACK_OFFSET))(nullptr);
		}

		UISprite* get_ButtonExitActiveBG()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_BUTTONEXITACTIVEBG_OFFSET))(nullptr);
		}

		::System::Void SetExitMessageKey(MXBattleTask* arg)
		{
			((::System::Void(*)(MXBattleTask*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_SETEXITMESSAGEKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetEmojiSpriteName(::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg, ::FlatData::StageTopography* arg2)
		{
			return ((::System::String*(*)(::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GETEMOJISPRITENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_.CTOR_OFFSET))(nullptr);
		}

		MXButton* get_ButtonContinue()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_BUTTONCONTINUE_OFFSET))(nullptr);
		}

		::System::Void Retry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_RETRY_OFFSET))(nullptr);
		}

		::System::Boolean IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ISOPENED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExit(::System::Int64 arg, ::MX::Logic::Data::BattleTypes* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_COEXIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickExit_b__49_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE__ONCLICKEXIT_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRetry()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_CORETRY_OFFSET))(nullptr);
		}

		MXButton* get_ButtonOption()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_BUTTONOPTION_OFFSET))(nullptr);
		}

		::System::Void OpenAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPENASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Exit(::System::Int64 arg, ::MX::Logic::Data::BattleTypes* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_EXIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_CLOSE_OFFSET))(nullptr);
		}

		UISprite* get_ButtonExitDeActivateBG()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_BUTTONEXITDEACTIVATEBG_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		MXButton* get_ButtonExit()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_BUTTONEXIT_OFFSET))(nullptr);
		}

		::System::Void _Retry_g__ProcessRetry|55_0(<>c__DisplayClass55_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass55_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE__RETRY_G__PROCESSRETRY|55_0_OFFSET))(arg, nullptr);
		}

		::System::Void CloseUIBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_CLOSEUIBATTLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UnloadBattle(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_UNLOADBATTLE_OFFSET))(arg, arg2, nullptr);
		}

		UIPause* Get()
		{
			return ((UIPause*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_GET_OFFSET))(nullptr);
		}

		::System::Void BackToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_BACKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void _OnClickExit_b__49_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE__ONCLICKEXIT_B__49_1_OFFSET))(nullptr);
		}

		CharacterObject* _OnOpened_g__FindCharacter|42_1(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			return ((CharacterObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE__ONOPENED_G__FINDCHARACTER|42_1_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetStageLabel(MXBattleTask* arg)
		{
			((::System::Void(*)(MXBattleTask*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_SETSTAGELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

