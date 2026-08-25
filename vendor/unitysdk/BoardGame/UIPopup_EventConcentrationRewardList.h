#pragma once
#include "../unitysdk.h"

class IntTabController;
namespace BoardGame { class UIConcentrationRewardScrollViewController; }
namespace FlatData { class ConcentrationRewardType; }

#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0xE13110)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE134E0)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_SETTABELEMENTS_OFFSET UNITYSDK_OFFSET(0xE13200)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE13500)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xE13580)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE13680)

namespace BoardGame
{
	inline static constexpr unsigned int UIPopup_EventConcentrationRewardList_TypeDefinitionIndex = 10304;

	class UIPopup_EventConcentrationRewardList : public Il2CppObject
	{
	public:
		IntTabController* tabController; // 0xD8
		::BoardGame::UIConcentrationRewardScrollViewController* scrollView; // 0xE0
		::System::Int64 eventContentId; // 0xE8

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTabElements(::FlatData::ConcentrationRewardType* arg)
		{
			((::System::Void(*)(::FlatData::ConcentrationRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_SETTABELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONREWARDLIST_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

