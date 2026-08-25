#pragma once
#include "unitysdk.h"

class UIDreammaker_ParameterDisplay;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class ButtonActivator;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }
namespace UnityEngine { class Coroutine; }

#define UIPOPUP_DREAMMAKER_START_ONPRESSINCREASE_OFFSET UNITYSDK_OFFSET(0xD0E5B0)
#define UIPOPUP_DREAMMAKER_START_SETCOSTUIFORCONTINUE_OFFSET UNITYSDK_OFFSET(0xD0E6D0)
#define UIPOPUP_DREAMMAKER_START_ONCLICKDECREASEONE_OFFSET UNITYSDK_OFFSET(0xD0ED60)
#define UIPOPUP_DREAMMAKER_START_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0EDA0)
#define UIPOPUP_DREAMMAKER_START_SETDATAFORNEWSTART_OFFSET UNITYSDK_OFFSET(0xD0CE50)
#define UIPOPUP_DREAMMAKER_START_GET_ACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD0EA10)
#define UIPOPUP_DREAMMAKER_START_SETPARAMETERUI_OFFSET UNITYSDK_OFFSET(0xD0F4E0)
#define UIPOPUP_DREAMMAKER_START_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xD0F540)
#define UIPOPUP_DREAMMAKER_START_.CTOR_OFFSET UNITYSDK_OFFSET(0xD0F550)
#define UIPOPUP_DREAMMAKER_START_ONCLICKINCREASEONE_OFFSET UNITYSDK_OFFSET(0xD0F580)
#define UIPOPUP_DREAMMAKER_START_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xD0F5B0)
#define UIPOPUP_DREAMMAKER_START_SETCOSTUIFORSTART_OFFSET UNITYSDK_OFFSET(0xD0F510)
#define UIPOPUP_DREAMMAKER_START_SETDATAFORCONTINUE_OFFSET UNITYSDK_OFFSET(0xD0F5D0)
#define UIPOPUP_DREAMMAKER_START_GET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0xD0E980)
#define UIPOPUP_DREAMMAKER_START_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xD0E8A0)
#define UIPOPUP_DREAMMAKER_START_ONCLICKENTERDREAMMAKER_OFFSET UNITYSDK_OFFSET(0xD0FB80)
#define UIPOPUP_DREAMMAKER_START_REFRESHCOSTPERACTIONANDTOTAL_OFFSET UNITYSDK_OFFSET(0xD0EAA0)
#define UIPOPUP_DREAMMAKER_START_COONMULTIPLIERBUTTON_OFFSET UNITYSDK_OFFSET(0xD0E650)
#define UIPOPUP_DREAMMAKER_START_SETMULTIPLIERDECO_OFFSET UNITYSDK_OFFSET(0xD0F410)
#define UIPOPUP_DREAMMAKER_START_REFRESHMULTIPLIERANDCOSTONCHANGE_OFFSET UNITYSDK_OFFSET(0xD0ED90)
#define UIPOPUP_DREAMMAKER_START_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xD0F340)
#define UIPOPUP_DREAMMAKER_START_ONPRESSDECREASE_OFFSET UNITYSDK_OFFSET(0xD10150)

	inline static constexpr unsigned int UIPopup_DreamMaker_Start_TypeDefinitionIndex = 626;

	class UIPopup_DreamMaker_Start : public Il2CppObject
	{
	public:
		UIDreammaker_ParameterDisplay* parameterDisplay; // 0xD8
		MXButton* enterButton; // 0xE0
		MXButton* closeButton; // 0xE8
		UILabel* titleText; // 0xF0
		UILabel* dreamMakerRemainingDayText; // 0xF8
		UILabel* dreamMakerRemainingActionText; // 0x100
		UILabel* dreamMakerCurrentRoundText; // 0x108
		UILabel* parameterDescriptionDecoText; // 0x110
		::UnityEngine::GameObject* multiplierOnRoot; // 0x118
		::UnityEngine::GameObject* multiplierOffRoot; // 0x120
		UILabel* multiplierOnValueText; // 0x128
		UILabel* costPerTurnText; // 0x130
		UILabel* costForEndingText; // 0x138
		UISprite* costPerTurnIcon; // 0x140
		UISprite* costForEndingIcon; // 0x148
		UILabel* newGameMultiplierText; // 0x150
		UILabel* continueMultiplierText; // 0x158
		::UnityEngine::GameObject* multiplierLock; // 0x160
		UILabel* multiplierLockLabel; // 0x168
		ButtonActivator* decreaseOne; // 0x170
		ButtonActivator* increaseOne; // 0x178
		::UnityEngine::GameObject* newGameStartRoot; // 0x180
		::UnityEngine::GameObject* continueRoot; // 0x188
		::System::Single multiplierCountAccumSpeed; // 0x190
		::System::Boolean isNewStart; // 0x194
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x198
		::MX::Data::Excel::MiniGameDreamInfoExcel* infoExcel; // 0x1A0
		::System::Int64 multiplier; // 0x1B0
		::System::Int64 multiplierMax; // 0x1B8
		::UnityEngine::Coroutine* longPressCoroutine; // 0x1C0

		::System::Void OnPressIncrease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONPRESSINCREASE_OFFSET))(nullptr);
		}

		::System::Void SetCostUIForContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETCOSTUIFORCONTINUE_OFFSET))(nullptr);
		}

		::System::Void OnClickDecreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONCLICKDECREASEONE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDataForNewStart(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETDATAFORNEWSTART_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_actionCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_GET_ACTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetParameterUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETPARAMETERUI_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Multiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_GET_MULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickIncreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONCLICKINCREASEONE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetCostUIForStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETCOSTUIFORSTART_OFFSET))(nullptr);
		}

		::System::Void SetDataForContinue(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETDATAFORCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_dayCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_GET_DAYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Multiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnterDreamMaker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONCLICKENTERDREAMMAKER_OFFSET))(nullptr);
		}

		::System::Void RefreshCostPerActionAndTotal(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_REFRESHCOSTPERACTIONANDTOTAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoOnMultiplierButton(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_COONMULTIPLIERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetMultiplierDeco()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETMULTIPLIERDECO_OFFSET))(nullptr);
		}

		::System::Void RefreshMultiplierAndCostOnChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_REFRESHMULTIPLIERANDCOSTONCHANGE_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressDecrease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_START_ONPRESSDECREASE_OFFSET))(nullptr);
		}

	};

