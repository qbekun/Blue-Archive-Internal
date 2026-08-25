#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;
class UICardGame_IntroDialog;
namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
class MinigameCCGObject;

#define UICARDGAME_BATTLEINTRO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26F6880)
#define UICARDGAME_BATTLEINTRO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26F6970)
#define UICARDGAME_BATTLEINTRO_PLAYCHARACTERANIMATION_OFFSET UNITYSDK_OFFSET(0x26F7B70)
#define UICARDGAME_BATTLEINTRO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F8030)
#define UICARDGAME_BATTLEINTRO_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0x26F6900)
#define UICARDGAME_BATTLEINTRO_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x26F7AF0)

	inline static constexpr unsigned int UICardGame_BattleIntro_TypeDefinitionIndex = 444;

	class UICardGame_BattleIntro : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		Il2CppObject* enemyStrikers; // 0xE0
		Il2CppObject* enemySpecials; // 0xE8
		Il2CppObject* playerStrikers; // 0xF0
		Il2CppObject* playerSpecials; // 0xF8
		UILabel* enemyGroupName; // 0x100
		UILabel* playerName; // 0x108
		UILabel* stageName; // 0x110
		UICardGame_IntroDialog* introDialog; // 0x118
		Il2CppObject* positionXByCharacterSlot; // 0x120
		Il2CppObject* characterSlot; // 0x128
		Il2CppObject* enemyGroup; // 0x130
		::System::Int32 enemyStrikerCount; // 0x138
		::System::Int32 enemySpecialCount; // 0x13C
		::System::String* aiDataPath; // 0x140
		::System::Int64 enemyGroupId; // 0x148
		Il2CppObject* openDialogExcels; // 0x150
		::System::String* openAnimationClipName; // 0x158
		::System::String* introPlayerCardAnimationClipName; // 0x160
		::System::String* introEnemyCardAnimationClipName; // 0x168

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCharacterAnimation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_PLAYCHARACTERANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Directing()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_CO_DIRECTING_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_BATTLEINTRO_GET_CCGOBJECT_OFFSET))(nullptr);
		}

	};

