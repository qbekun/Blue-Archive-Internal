#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }
namespace MX::AssetBundles { class LoadedSceneHandle; }
namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS271_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7A0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1DAE7B0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__2_OFFSET UNITYSDK_OFFSET(0x1DAE7F0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__3_OFFSET UNITYSDK_OFFSET(0x1DAE830)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__4_OFFSET UNITYSDK_OFFSET(0x1DAE850)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__5_OFFSET UNITYSDK_OFFSET(0x1DAE8B0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__6_OFFSET UNITYSDK_OFFSET(0x1DAE8F0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__7_OFFSET UNITYSDK_OFFSET(0x1DAE930)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__8_OFFSET UNITYSDK_OFFSET(0x1DAE970)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__9_OFFSET UNITYSDK_OFFSET(0x1DAE9B0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__10_OFFSET UNITYSDK_OFFSET(0x1DAE9F0)
#define <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__11_OFFSET UNITYSDK_OFFSET(0x1DAEAA0)

	inline static constexpr unsigned int <>c__DisplayClass271_0_TypeDefinitionIndex = 20416;

	class <>c__DisplayClass271_0 : public Il2CppObject
	{
	public:
		::MX::MinigameRhythm::MinigameRhythmLogicManager* __4__this; // 0x10
		::System::Boolean loadPreset; // 0x18
		::System::Boolean loadUINotePrefab; // 0x19
		MinigameReplaceResources* replaceResources; // 0x20
		::System::Boolean loadReplaceResources; // 0x28
		::System::Boolean sceneLoaded; // 0x29
		::System::Int32 loadCount; // 0x2C
		::System::Boolean loadCharacter; // 0x30
		::System::Boolean loadUI; // 0x31
		::System::Boolean loadSpine; // 0x32

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _StartRhythmGame_b__1(MinigameRhythmPreset* arg)
		{
			((::System::Void(*)(MinigameRhythmPreset*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__2(MinigameUINoteComponent* arg)
		{
			((::System::Void(*)(MinigameUINoteComponent*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__2_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__3(MinigameReplaceResources* arg)
		{
			((::System::Void(*)(MinigameReplaceResources*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__3_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__4(::MX::AssetBundles::LoadedSceneHandle* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::LoadedSceneHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__4_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__5(MinigameNoteObject* arg)
		{
			((::System::Void(*)(MinigameNoteObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__5_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__6(MinigameNoteObject* arg)
		{
			((::System::Void(*)(MinigameNoteObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__6_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__7(MinigameNoteObject* arg)
		{
			((::System::Void(*)(MinigameNoteObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__7_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__8(MinigameNoteObject* arg)
		{
			((::System::Void(*)(MinigameNoteObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__8_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__9(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__9_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__10(UIMinigameRhythmBattle* arg)
		{
			((::System::Void(*)(UIMinigameRhythmBattle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__10_OFFSET))(arg, nullptr);
		}

		::System::Void _StartRhythmGame_b__11(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS271_0__STARTRHYTHMGAME_B__11_OFFSET))(arg, nullptr);
		}

	};

