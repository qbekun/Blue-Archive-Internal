#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
class UIGrid;
namespace UnityEngine { class GameObject; }
namespace FlatData { class ContentType; }
namespace FlatData { class RaidBossGroupType; }
class SwipeDir;

#define UIPOPUP_BATTLEPLAYGUIDE_SETINDICATOR_OFFSET UNITYSDK_OFFSET(0x2253DF0)
#define UIPOPUP_BATTLEPLAYGUIDE_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x2253FE0)
#define UIPOPUP_BATTLEPLAYGUIDE_CREATEINDICATORS_OFFSET UNITYSDK_OFFSET(0x2254270)
#define UIPOPUP_BATTLEPLAYGUIDE_INDICATOROFF_OFFSET UNITYSDK_OFFSET(0x2253F50)
#define UIPOPUP_BATTLEPLAYGUIDE_SWIPE_OFFSET UNITYSDK_OFFSET(0x22544B0)
#define UIPOPUP_BATTLEPLAYGUIDE_INDICATORON_OFFSET UNITYSDK_OFFSET(0x2253EC0)
#define UIPOPUP_BATTLEPLAYGUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2254520)
#define UIPOPUP_BATTLEPLAYGUIDE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2254600)
#define UIPOPUP_BATTLEPLAYGUIDE_SETRAIDDATA_OFFSET UNITYSDK_OFFSET(0x2254820)
#define UIPOPUP_BATTLEPLAYGUIDE_SETPAGE_OFFSET UNITYSDK_OFFSET(0x2254000)
#define UIPOPUP_BATTLEPLAYGUIDE_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x2254500)
#define UIPOPUP_BATTLEPLAYGUIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2254D30)

	inline static constexpr unsigned int UIPopup_BattlePlayGuide_TypeDefinitionIndex = 4541;

	class UIPopup_BattlePlayGuide : public Il2CppObject
	{
	public:
		UILabel* title; // 0xD8
		UILabel* guide; // 0xE0
		UITexture* texture; // 0xE8
		MXButton* prevButton; // 0xF0
		MXButton* nextButton; // 0xF8
		UIGrid* grid; // 0x100
		::UnityEngine::GameObject* indicator; // 0x108
		Il2CppObject* indicatorList; // 0x110
		Il2CppObject* guideInfoList; // 0x118
		::System::Int32 currentPageIndex; // 0x120
		::System::Int32 pageIndexMax; // 0x124
		::FlatData::ContentType* contentType; // 0x128
		::FlatData::RaidBossGroupType* bossGroupType; // 0x12C

		::System::Void SetIndicator(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_SETINDICATOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void CreateIndicators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_CREATEINDICATORS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* IndicatorOff(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_INDICATOROFF_OFFSET))(arg, nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_SWIPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* IndicatorOn(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_INDICATORON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetRaidData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_SETRAIDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_SETPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLEPLAYGUIDE_AWAKE_OFFSET))(nullptr);
		}

	};

