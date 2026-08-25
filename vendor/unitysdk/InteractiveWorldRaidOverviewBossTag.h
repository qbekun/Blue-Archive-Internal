#pragma once
#include "unitysdk.h"

class MXButton;
class InteractiveWorldRaidOverviewBossLabel;
class EventDelegate;
class BossAppearState;

#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETBOSSSTORYLABEL_OFFSET UNITYSDK_OFFSET(0x26076E0)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETARTTHEME_OFFSET UNITYSDK_OFFSET(0x2607700)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_REGISTERONCLICKSELECTBOSS_OFFSET UNITYSDK_OFFSET(0x26077F0)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETBOSSLABEL_OFFSET UNITYSDK_OFFSET(0x26078E0)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETALLCLEAR_OFFSET UNITYSDK_OFFSET(0x2607920)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x2607940)

	inline static constexpr unsigned int InteractiveWorldRaidOverviewBossTag_TypeDefinitionIndex = 6480;

	class InteractiveWorldRaidOverviewBossTag : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* bossLabels; // 0x18
		MXButton* SelectButton; // 0x20
		InteractiveWorldRaidOverviewBossLabel* _currentBossLabel; // 0x28
		Il2CppObject* _artLevelToIndex; // 0x30

		::System::Void SetBossStoryLabel(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETBOSSSTORYLABEL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetArtTheme(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETARTTHEME_OFFSET))(str, nullptr);
		}

		::System::Void RegisterOnClickSelectBoss(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_REGISTERONCLICKSELECTBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossLabel(::System::String* str, ::System::Decimal* arg, BossAppearState* arg2, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Decimal*, BossAppearState*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETBOSSLABEL_OFFSET))(str, arg, arg2, str2, nullptr);
		}

		::System::Void SetAllClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_SETALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSTAG_.CTOR_OFFSET))(nullptr);
		}

	};

