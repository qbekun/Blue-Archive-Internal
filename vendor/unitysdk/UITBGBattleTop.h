#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Transform; }
class UILabel;
class TweenAlpha;
class TweenPosition;
class TweenScale;
namespace UnityEngine { class GameObject; }
class MXButton;
class TBGUnitVisual;
class TBGEncounterVisual;
class TBGTileVisual;
namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
namespace MX::TableBoard { class TBGFacilityEncounterDB; }
namespace MX::TableBoard { class TBGDiceRollResult; }
class UITBGHeart;

#define UITBGBATTLETOP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB40C60)
#define UITBGBATTLETOP_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB40E40)
#define UITBGBATTLETOP_SETBG_OFFSET UNITYSDK_OFFSET(0xB3B9E0)
#define UITBGBATTLETOP_SETPLAYERUNITVISUAL_OFFSET UNITYSDK_OFFSET(0xB3BC20)
#define UITBGBATTLETOP_SETENEMYUNITVISUAL_OFFSET UNITYSDK_OFFSET(0xB3C060)
#define UITBGBATTLETOP_SETENCOUNTERVISUAL_OFFSET UNITYSDK_OFFSET(0xB3BCB0)
#define UITBGBATTLETOP_SETPLAYERTILEVISUAL_OFFSET UNITYSDK_OFFSET(0xB3BD40)
#define UITBGBATTLETOP_SETTARGETTILEVISUAL_OFFSET UNITYSDK_OFFSET(0xB3BED0)
#define UITBGBATTLETOP_COSETPLAYERUNITVISUAL_OFFSET UNITYSDK_OFFSET(0xB40E60)
#define UITBGBATTLETOP_COSETENEMYUNITVISUAL_OFFSET UNITYSDK_OFFSET(0xB40F00)
#define UITBGBATTLETOP_COSETENCOUNTERVISUAL_OFFSET UNITYSDK_OFFSET(0xB40FA0)
#define UITBGBATTLETOP_PLAYRESULT_OFFSET UNITYSDK_OFFSET(0xB410C0)
#define UITBGBATTLETOP_PLAYRESULT_OFFSET UNITYSDK_OFFSET(0xB3A9D0)
#define UITBGBATTLETOP_COPLAYFACILITYRESULT_OFFSET UNITYSDK_OFFSET(0xB41370)
#define UITBGBATTLETOP_COPLAYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xB41230)
#define UITBGBATTLETOP_COPLAYALLYATTACK_OFFSET UNITYSDK_OFFSET(0xB41450)
#define UITBGBATTLETOP_COPLAYENEMYATTACK_OFFSET UNITYSDK_OFFSET(0xB41500)
#define UITBGBATTLETOP_COPLAYENEMYDEATH_OFFSET UNITYSDK_OFFSET(0xB415B0)
#define UITBGBATTLETOP_COPLAYPLAYERPANIC_OFFSET UNITYSDK_OFFSET(0xB41660)
#define UITBGBATTLETOP_COPLAYRANDOMRESULT_OFFSET UNITYSDK_OFFSET(0xB412D0)
#define UITBGBATTLETOP_COPLAYLOG_OFFSET UNITYSDK_OFFSET(0xB41730)
#define UITBGBATTLETOP_PUSHINITIALLOG_OFFSET UNITYSDK_OFFSET(0xB38E40)
#define UITBGBATTLETOP_PUSHLOG_OFFSET UNITYSDK_OFFSET(0xB417F0)
#define UITBGBATTLETOP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB3A780)
#define UITBGBATTLETOP_REFRESHHEALTH_OFFSET UNITYSDK_OFFSET(0xB38980)
#define UITBGBATTLETOP_REFRESHALLYHEALTHWITHFX_OFFSET UNITYSDK_OFFSET(0xB3A3E0)
#define UITBGBATTLETOP_RESETHEALTH_OFFSET UNITYSDK_OFFSET(0xB41840)
#define UITBGBATTLETOP_PLAYRECOVERYFX_OFFSET UNITYSDK_OFFSET(0xB3AAE0)
#define UITBGBATTLETOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB41B60)
#define UITBGBATTLETOP__REFRESHHEALTH_B__52_0_OFFSET UNITYSDK_OFFSET(0xB41B70)

	inline static constexpr unsigned int UITBGBattleTop_TypeDefinitionIndex = 8356;

	class UITBGBattleTop : public Il2CppObject
	{
	public:
		UITexture* BG; // 0x18
		::UnityEngine::Transform* PlayerPos; // 0x20
		::UnityEngine::Transform* EnemyPos; // 0x28
		::UnityEngine::Transform* PlayerTilePos; // 0x30
		::UnityEngine::Transform* TargetTilePos; // 0x38
		::UnityEngine::Transform* TargetEncounterPos; // 0x40
		UILabel* Log1; // 0x48
		UILabel* Log2; // 0x50
		UILabel* Log3; // 0x58
		TweenAlpha* Tween1; // 0x60
		TweenPosition* Tween2; // 0x68
		TweenAlpha* Tween3; // 0x70
		TweenScale* Tween4; // 0x78
		Il2CppObject* AllyHearts; // 0x80
		Il2CppObject* EnemyHearts; // 0x88
		Il2CppObject* HeartGrids; // 0x90
		::UnityEngine::GameObject* UpperHeartRoot; // 0x98
		MXButton* skipButton; // 0xA0
		TBGUnitVisual* playerVisual; // 0xA8
		TBGUnitVisual* enemyVisual; // 0xB0
		::System::String* currentEncounterModelName; // 0xB8
		TBGEncounterVisual* encounterVisual; // 0xC0
		TBGTileVisual* playerTileVisual; // 0xC8
		TBGTileVisual* targetTileVisual; // 0xD0
		::System::Int32 playerMaxHealthCache; // 0xD8
		::System::Int32 playerHitPointCache; // 0xDC
		::System::Int32 playingHeartFxCount; // 0xE0
		::System::Boolean skipToEnd; // 0xE4

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnSkipButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_ONSKIPBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetBG(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETBG_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayerUnitVisual(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETPLAYERUNITVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetEnemyUnitVisual(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETENEMYUNITVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetEncounterVisual(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETENCOUNTERVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetPlayerTileVisual(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETPLAYERTILEVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTargetTileVisual(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_SETTARGETTILEVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoSetPlayerUnitVisual(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COSETPLAYERUNITVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoSetEnemyUnitVisual(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COSETENEMYUNITVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoSetEncounterVisual(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COSETENCOUNTERVISUAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void PlayResult(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_PLAYRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayResult(::MX::TableBoard::TBGFacilityEncounterDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGFacilityEncounterDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_PLAYRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayFacilityResult(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYFACILITYRESULT_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayBattleResult(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYBATTLERESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAllyAttack(::System::String* str, ::MX::TableBoard::TBGDiceRollResult* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::MX::TableBoard::TBGDiceRollResult*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYALLYATTACK_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEnemyAttack(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYENEMYATTACK_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEnemyDeath(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYENEMYDEATH_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayPlayerPanic(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYPLAYERPANIC_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRandomResult(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYRANDOMRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayLog(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_COPLAYLOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void PushInitialLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_PUSHINITIALLOG_OFFSET))(str, nullptr);
		}

		::System::Void PushLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_PUSHLOG_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_CLEAR_OFFSET))(nullptr);
		}

		::System::Void RefreshHealth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_REFRESHHEALTH_OFFSET))(nullptr);
		}

		::System::Void RefreshAllyHealthWithFx(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_REFRESHALLYHEALTHWITHFX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetHealth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_RESETHEALTH_OFFSET))(nullptr);
		}

		::System::Void PlayRecoveryFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_PLAYRECOVERYFX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RefreshHealth_b__52_0(UITBGHeart* arg)
		{
			((::System::Void(*)(UITBGHeart*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLETOP__REFRESHHEALTH_B__52_0_OFFSET))(arg, nullptr);
		}

	};

