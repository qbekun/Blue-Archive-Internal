#pragma once
#include "unitysdk.h"

class CharacterHPBar;
class Emoji;
class BossHPBar;
class RaidBossHPBar;
class TacticSupportSystemHPBar;
class SimpleHPBar;
class SpeechBubble;
class DialogBubble;
class BossLevelWidget;
class ArenaHPBar;
class InvisibleFlag;
class CharacterVisual;
class TSSVisual;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class HPWidgetBase;

#define UIHPBAR_GET_BOSSLEVELWIDGET_OFFSET UNITYSDK_OFFSET(0x25FC5F0)
#define UIHPBAR_GET_NEEDSORT_OFFSET UNITYSDK_OFFSET(0x25FC600)
#define UIHPBAR_SET_NEEDSORT_OFFSET UNITYSDK_OFFSET(0x25FC610)
#define UIHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x25FC620)
#define UIHPBAR_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25FC9B0)
#define UIHPBAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25FCA50)
#define UIHPBAR_SORT_OFFSET UNITYSDK_OFFSET(0x25FCCA0)
#define UIHPBAR_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x25FDF20)
#define UIHPBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25FE5C0)
#define UIHPBAR_PLAYTERRAINADAPTION_OFFSET UNITYSDK_OFFSET(0x25FE7D0)
#define UIHPBAR_SHOWHPUI_OFFSET UNITYSDK_OFFSET(0x25FD410)
#define UIHPBAR_SHOWEMOJIUI_OFFSET UNITYSDK_OFFSET(0x25FDBD0)
#define UIHPBAR_SHOWSPEECHBUBBLEUI_OFFSET UNITYSDK_OFFSET(0x25FDDE0)
#define UIHPBAR_LOADCHARACTERHPBAR_OFFSET UNITYSDK_OFFSET(0x25FE940)
#define UIHPBAR_LOADEXCLUSIVEHPBAR_OFFSET UNITYSDK_OFFSET(0x25FEA70)
#define UIHPBAR_LOADTACTICSUPPORTHPBAR_OFFSET UNITYSDK_OFFSET(0x25FEB80)
#define UIHPBAR_LOADSIMPLEHPBAR_OFFSET UNITYSDK_OFFSET(0x25FECB0)
#define UIHPBAR_LOADRAIDBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x25FEDE0)
#define UIHPBAR_LOADBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x25FEE70)
#define UIHPBAR_LOADEMOJI_OFFSET UNITYSDK_OFFSET(0x25FF110)
#define UIHPBAR_LOADEMOJI_OFFSET UNITYSDK_OFFSET(0x25FF240)
#define UIHPBAR_LOADSPEECHBUBBLE_OFFSET UNITYSDK_OFFSET(0x25FF360)
#define UIHPBAR_LOADDIALOGBUBBLE_OFFSET UNITYSDK_OFFSET(0x25FF470)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25EFAC0)
#define UIHPBAR_SHOWWARNINGUI_OFFSET UNITYSDK_OFFSET(0x25FEF10)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FF590)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FF710)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FF870)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FF7F0)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FF950)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25F2560)
#define UIHPBAR_UNLOADWIDGET_OFFSET UNITYSDK_OFFSET(0x25FFA30)
#define UIHPBAR_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x25FDF40)
#define UIHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FFB10)

	inline static constexpr unsigned int UIHPBar_TypeDefinitionIndex = 6462;

	class UIHPBar : public Il2CppObject
	{
	public:
		::System::Int32 StartDepth; // 0x0
		::System::Int32 DepthStep; // 0x0
		CharacterHPBar* characterHpBar; // 0xD8
		Emoji* emoji; // 0xE0
		BossHPBar* bossHpBar; // 0xE8
		RaidBossHPBar* raidBossHpBar; // 0xF0
		TacticSupportSystemHPBar* tssHpBar; // 0xF8
		SimpleHPBar* simpleHpBar; // 0x100
		SpeechBubble* speechBubble; // 0x108
		DialogBubble* dialogBubble; // 0x110
		BossLevelWidget* bossLevelWidget; // 0x118
		Il2CppObject* characterHpBarPool; // 0x120
		Il2CppObject* tssHpBarPool; // 0x128
		Il2CppObject* simpleHpBarPool; // 0x130
		Il2CppObject* emojiPool; // 0x138
		Il2CppObject* speechBubblePool; // 0x140
		Il2CppObject* dialogBubblePool; // 0x148
		Il2CppObject* characterHpBars; // 0x150
		Il2CppObject* tssHpBars; // 0x158
		Il2CppObject* simpleHpBars; // 0x160
		Il2CppObject* exclusiveHPBars; // 0x168
		Il2CppObject* emojis; // 0x170
		Il2CppObject* speechBubbles; // 0x178
		Il2CppObject* dialogBubbles; // 0x180
		::System::Boolean _NeedSort_k__BackingField; // 0x188
		::System::Boolean CheckHpShow; // 0x189
		::System::Boolean CheckSpeechBubbleShow; // 0x18A
		::System::Boolean CheckEmojiShow; // 0x18B
		::System::Boolean ShowHp; // 0x18C
		::System::Boolean ShowSpeechBubble; // 0x18D
		::System::Boolean ShowEmoji; // 0x18E
		::System::Boolean IsBossHPBarSet; // 0x18F
		::System::Boolean IsRaidBossHPBarSet; // 0x190
		::System::Boolean IsArenaHPSet; // 0x191
		ArenaHPBar* arenaHPBar; // 0x198
		InvisibleFlag* HPBarInvisibleFlag; // 0x1A0
		InvisibleFlag* EmojiInvisibleFlag; // 0x1A4

		BossLevelWidget* get_BossLevelWidget()
		{
			return ((BossLevelWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_GET_BOSSLEVELWIDGET_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_GET_NEEDSORT_OFFSET))(nullptr);
		}

		::System::Void set_NeedSort(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SET_NEEDSORT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SORT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void PlayTerrainAdaption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_PLAYTERRAINADAPTION_OFFSET))(nullptr);
		}

		::System::Void ShowHpUI(::System::Boolean arg, InvisibleFlag* arg2)
		{
			((::System::Void(*)(::System::Boolean, InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SHOWHPUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowEmojiUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SHOWEMOJIUI_OFFSET))(arg, nullptr);
		}

		::System::Void ShowSpeechBubbleUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SHOWSPEECHBUBBLEUI_OFFSET))(arg, nullptr);
		}

		CharacterHPBar* LoadCharacterHpBar(CharacterVisual* arg)
		{
			return ((CharacterHPBar*(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADCHARACTERHPBAR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadExclusiveHPBar(CharacterVisual* arg, ::System::String* str, ::System::Threading::CancellationToken* arg2)
		{
			return ((Il2CppObject*(*)(CharacterVisual*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADEXCLUSIVEHPBAR_OFFSET))(arg, str, arg2, nullptr);
		}

		TacticSupportSystemHPBar* LoadTacticSupportHpBar(TSSVisual* arg)
		{
			return ((TacticSupportSystemHPBar*(*)(TSSVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADTACTICSUPPORTHPBAR_OFFSET))(arg, nullptr);
		}

		SimpleHPBar* LoadSimpleHpBar(CharacterVisual* arg)
		{
			return ((SimpleHPBar*(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADSIMPLEHPBAR_OFFSET))(arg, nullptr);
		}

		RaidBossHPBar* LoadRaidBossHpBar(CharacterVisual* arg)
		{
			return ((RaidBossHPBar*(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADRAIDBOSSHPBAR_OFFSET))(arg, nullptr);
		}

		BossHPBar* LoadBossHpBar(CharacterVisual* arg)
		{
			return ((BossHPBar*(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADBOSSHPBAR_OFFSET))(arg, nullptr);
		}

		Emoji* LoadEmoji(CharacterVisual* arg)
		{
			return ((Emoji*(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADEMOJI_OFFSET))(arg, nullptr);
		}

		Emoji* LoadEmoji()
		{
			return ((Emoji*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADEMOJI_OFFSET))(nullptr);
		}

		SpeechBubble* LoadSpeechBubble(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((SpeechBubble*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADSPEECHBUBBLE_OFFSET))(arg, arg2, nullptr);
		}

		DialogBubble* LoadDialogBubble(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((DialogBubble*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_LOADDIALOGBUBBLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnloadWidget(HPWidgetBase* arg)
		{
			((::System::Void(*)(HPWidgetBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void ShowWarningUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_SHOWWARNINGUI_OFFSET))(nullptr);
		}

		::System::Void UnloadWidget(CharacterHPBar* arg)
		{
			((::System::Void(*)(CharacterHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(TacticSupportSystemHPBar* arg)
		{
			((::System::Void(*)(TacticSupportSystemHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(SimpleHPBar* arg)
		{
			((::System::Void(*)(SimpleHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(BossHPBar* arg)
		{
			((::System::Void(*)(BossHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(Emoji* arg)
		{
			((::System::Void(*)(Emoji*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(SpeechBubble* arg)
		{
			((::System::Void(*)(SpeechBubble*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadWidget(DialogBubble* arg)
		{
			((::System::Void(*)(DialogBubble*, ::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_UNLOADALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

