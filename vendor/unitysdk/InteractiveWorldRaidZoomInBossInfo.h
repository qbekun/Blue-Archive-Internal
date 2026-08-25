#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIWidget;
namespace UnityEngine { class Transform; }
class PortraitSpineCharacter;
class UITexture;
class UISlider;
class UILabel;
namespace UnityEngine { class Color; }
class EventDelegate;
class BossAppearState;

#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_REFRESHMOSTPARTICIPATED_OFFSET UNITYSDK_OFFSET(0x2607A40)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_UPDATEPERCENTAGELABEL_OFFSET UNITYSDK_OFFSET(0x2607A60)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETALLCLEAR_OFFSET UNITYSDK_OFFSET(0x2607CE0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_REGISTERONCLICKBOSSENTER_OFFSET UNITYSDK_OFFSET(0x2607DA0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETSPINEBACKGROUNDDECO_OFFSET UNITYSDK_OFFSET(0x2607E90)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETBOSSSPINE_OFFSET UNITYSDK_OFFSET(0x2607EB0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2608220)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETBOSSSPINEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x26082A0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETUIVALUES_OFFSET UNITYSDK_OFFSET(0x26083A0)

	inline static constexpr unsigned int InteractiveWorldRaidZoomInBossInfo_TypeDefinitionIndex = 6482;

	class InteractiveWorldRaidZoomInBossInfo : public Il2CppObject
	{
	public:
		MXButton* bossEnterButton; // 0x18
		::UnityEngine::GameObject* spineBackgroundDeco; // 0x20
		UIWidget* SpineRenderQueue; // 0x28
		::UnityEngine::Transform* SpinePosRoot; // 0x30
		Il2CppObject* _bossSpineDictionary; // 0x38
		PortraitSpineCharacter* _bossSpine; // 0x40
		UITexture* bossNameTexture; // 0x48
		::UnityEngine::GameObject* mostParticipatedMark; // 0x50
		::UnityEngine::GameObject* storySpineBackgroundObject; // 0x58
		::UnityEngine::GameObject* rageTag; // 0x60
		::UnityEngine::GameObject* bossSpineBackgroundObject; // 0x68
		::UnityEngine::GameObject* bossSpineBackgroundEffect; // 0x70
		UISlider* bossHPSlider; // 0x78
		UILabel* bossHPPercentLabel; // 0x80
		::UnityEngine::Color* leadingZeroTextColor; // 0x88
		::Il2CppArray<::System::Object*>* byConditionObjects; // 0x98
		::UnityEngine::GameObject* hpBarRoot; // 0xA0
		::UnityEngine::GameObject* finalRoot; // 0xA8
		::UnityEngine::GameObject* clearRoot; // 0xB0
		::UnityEngine::GameObject* allClearRoot; // 0xB8
		::UnityEngine::GameObject* extraRoot; // 0xC0

		::System::Void RefreshMostParticipated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_REFRESHMOSTPARTICIPATED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePercentageLabel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_UPDATEPERCENTAGELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void RegisterOnClickBossEnter(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_REGISTERONCLICKBOSSENTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpineBackgroundDeco(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETSPINEBACKGROUNDDECO_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossSpine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETBOSSSPINE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBossSpineBackground(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETBOSSSPINEBACKGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetUIValues(::System::String* str, ::System::Decimal* arg, BossAppearState* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Decimal*, BossAppearState*, ::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFO_SETUIVALUES_OFFSET))(str, arg, arg2, arg3, arg4, str2, nullptr);
		}

	};

