#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
class WidgetCharacterDialogEmojiElementAudioSetting;
class UIPanel;
class Input;
namespace UnityEngine { class Transform; }

#define WIDGETCHARACTERDIALOGEMOJI_CO_PLAY_OFFSET UNITYSDK_OFFSET(0xC24250)
#define WIDGETCHARACTERDIALOGEMOJI_STOP_OFFSET UNITYSDK_OFFSET(0xC24320)
#define WIDGETCHARACTERDIALOGEMOJI_STOPIFTARGETISNULL_OFFSET UNITYSDK_OFFSET(0xC24550)
#define WIDGETCHARACTERDIALOGEMOJI_ISPLAYINGEMOJI_OFFSET UNITYSDK_OFFSET(0xC247A0)
#define WIDGETCHARACTERDIALOGEMOJI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC24BA0)
#define WIDGETCHARACTERDIALOGEMOJI_SORTELEMENTS_OFFSET UNITYSDK_OFFSET(0xC252B0)
#define WIDGETCHARACTERDIALOGEMOJI_ISPLAYINGDIALOG_OFFSET UNITYSDK_OFFSET(0xC25800)
#define WIDGETCHARACTERDIALOGEMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0xC25B90)
#define WIDGETCHARACTERDIALOGEMOJI_AWAKE_OFFSET UNITYSDK_OFFSET(0xC25C10)
#define WIDGETCHARACTERDIALOGEMOJI_STOPALL_OFFSET UNITYSDK_OFFSET(0xC24BB0)
#define WIDGETCHARACTERDIALOGEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0xC25D90)
#define WIDGETCHARACTERDIALOGEMOJI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC260E0)

	inline static constexpr unsigned int WidgetCharacterDialogEmoji_TypeDefinitionIndex = 8894;

	class WidgetCharacterDialogEmoji : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* prefabs; // 0x18
		::UnityEngine::Vector3* dampSmoothTime; // 0x20
		WidgetCharacterDialogEmojiElementAudioSetting* elementAudioSetting; // 0x30
		UIPanel* panel; // 0x38
		Il2CppObject* typeToPrefab; // 0x40
		Il2CppObject* activeCoroutines; // 0x48
		Il2CppObject* activeElementUIs; // 0x50
		Il2CppObject* activeCancellationToken; // 0x58
		Il2CppObject* activeHideUI; // 0x60

		::System::Collections::IEnumerator* co_Play(Input* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Input*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_CO_PLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Stop(Input* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Input*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_STOP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopIfTargetIsNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_STOPIFTARGETISNULL_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingEmoji(::UnityEngine::Transform* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_ISPLAYINGEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SortElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_SORTELEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingDialog(::UnityEngine::Transform* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_ISPLAYINGDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void Play(Input* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(Input*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_PLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void StopAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_STOPALL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJI_LATEUPDATE_OFFSET))(nullptr);
		}

	};

