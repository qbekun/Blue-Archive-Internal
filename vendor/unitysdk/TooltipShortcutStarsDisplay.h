#pragma once
#include "unitysdk.h"

class CampaignStageUIOpener;
class EventStageUIOpener;
class WeekDungeonStageUIOpener;
class SchoolDungeonStageUIOpener;

#define TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x274ABA0)
#define TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x274AD60)
#define TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x274AF40)
#define TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x274B230)
#define TOOLTIPSHORTCUTSTARSDISPLAY_INACTIVATEALL_OFFSET UNITYSDK_OFFSET(0x274B770)
#define TOOLTIPSHORTCUTSTARSDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x274B890)

	inline static constexpr unsigned int TooltipShortcutStarsDisplay_TypeDefinitionIndex = 7242;

	class TooltipShortcutStarsDisplay : public Il2CppObject
	{
	public:
		Il2CppObject* stars; // 0x18

		::System::Void Initialize(CampaignStageUIOpener* arg)
		{
			((::System::Void(*)(CampaignStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(EventStageUIOpener* arg)
		{
			((::System::Void(*)(EventStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(WeekDungeonStageUIOpener* arg)
		{
			((::System::Void(*)(WeekDungeonStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(SchoolDungeonStageUIOpener* arg)
		{
			((::System::Void(*)(SchoolDungeonStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void InactivateAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_INACTIVATEALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSTARSDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

