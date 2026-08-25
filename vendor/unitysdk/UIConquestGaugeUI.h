#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UISprite;
class UILabel;
class UIProgressBar;
class MXButton;
class UIConquest;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UICONQUESTGAUGEUI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2364950)
#define UICONQUESTGAUGEUI_ONCLICKCALCULATEDETAIL_OFFSET UNITYSDK_OFFSET(0x2364960)
#define UICONQUESTGAUGEUI_SETLOCALIZEDDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x2356BA0)
#define UICONQUESTGAUGEUI_REFRESHCALCULATEUI_OFFSET UNITYSDK_OFFSET(0x235C770)
#define UICONQUESTGAUGEUI_REFRESHMATERIALUI_OFFSET UNITYSDK_OFFSET(0x2358150)
#define UICONQUESTGAUGEUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x2364C80)
#define UICONQUESTGAUGEUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x2364C90)
#define UICONQUESTGAUGEUI_REFRESHSUDDENEVENTGAUGE_OFFSET UNITYSDK_OFFSET(0x23580B0)

	inline static constexpr unsigned int UIConquestGaugeUI_TypeDefinitionIndex = 5059;

	class UIConquestGaugeUI : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* suddenEventGaugeRoot; // 0x18
		UISprite* suddenEventGaugeIcon; // 0x20
		UILabel* suddenEventDescriptionText; // 0x28
		UIProgressBar* suddenEventGauge; // 0x30
		UILabel* suddenEventGaugeText; // 0x38
		::UnityEngine::Transform* materialGaugeRoot; // 0x40
		UISprite* materialIcon; // 0x48
		UILabel* materialCount; // 0x50
		UISprite* calculateIcon; // 0x58
		UILabel* calculateDescriptionText; // 0x60
		UIProgressBar* calculateGauge; // 0x68
		UILabel* calculateGaugeText; // 0x70
		MXButton* calculateGaugeDetailButton; // 0x78
		UIConquest* uiConquest; // 0x80

		::System::Void Initialize(UIConquest* arg)
		{
			((::System::Void(*)(UIConquest*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCalculateDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_ONCLICKCALCULATEDETAIL_OFFSET))(nullptr);
		}

		::System::Void SetLocalizedDescriptionText(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_SETLOCALIZEDDESCRIPTIONTEXT_OFFSET))(str, str2, nullptr);
		}

		::System::Void RefreshCalculateUI(::System::Single arg, ::System::String* str, ::MX::GameLogic::Parcel::ParcelInfo* arg2)
		{
			((::System::Void(*)(::System::Single, ::System::String*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_REFRESHCALCULATEUI_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void RefreshMaterialUI(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_REFRESHMATERIALUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshSuddenEventGauge(::System::Boolean arg, ::System::Single arg2, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGAUGEUI_REFRESHSUDDENEVENTGAUGE_OFFSET))(arg, arg2, str, nullptr);
		}

	};

