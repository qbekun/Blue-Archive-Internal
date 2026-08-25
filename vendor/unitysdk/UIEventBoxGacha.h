#pragma once
#include "unitysdk.h"

class EventBoxGachaScrollController;
class SpineChatDialogContainerEvent;
class UITexture;
class UILabel;
class UISprite;
class EventBoxGachaClaimButton;
class ButtonActivator;
namespace UnityEngine { class GameObject; }
class UIEventBoxGachaResult;
class MXButton;
namespace UnityEngine { class Transform; }
namespace MX::Data { class EventContentSeasonInfo; }
class EventContentBoxGachaProgress;
namespace MX::Data { class BGMPlayInfo; }
class UIPopup_System;

#define UIEVENTBOXGACHA_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x247D300)
#define UIEVENTBOXGACHA_GET_MULTIPICKCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x247D310)
#define UIEVENTBOXGACHA_SET_MULTIPICKCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x247D320)
#define UIEVENTBOXGACHA_AWAKE_OFFSET UNITYSDK_OFFSET(0x247D330)
#define UIEVENTBOXGACHA_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x247D550)
#define UIEVENTBOXGACHA_SETDATA_OFFSET UNITYSDK_OFFSET(0x247D5E0)
#define UIEVENTBOXGACHA_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x247D750)
#define UIEVENTBOXGACHA_ONOPENED_OFFSET UNITYSDK_OFFSET(0x247D780)
#define UIEVENTBOXGACHA_PLAYDIALOGDELAYED_OFFSET UNITYSDK_OFFSET(0x247D950)
#define UIEVENTBOXGACHA_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x247DE00)
#define UIEVENTBOXGACHA_REFRESH_OFFSET UNITYSDK_OFFSET(0x247D9C0)
#define UIEVENTBOXGACHA_SETCLAIMBUTTONS_OFFSET UNITYSDK_OFFSET(0x247E440)
#define UIEVENTBOXGACHA_SETCLAIMBUTTONS_OFFSET UNITYSDK_OFFSET(0x247E380)
#define UIEVENTBOXGACHA_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x247E3F0)
#define UIEVENTBOXGACHA_COLOADSPINE_OFFSET UNITYSDK_OFFSET(0x247E4B0)
#define UIEVENTBOXGACHA_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x247E540)
#define UIEVENTBOXGACHA_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0x247E650)
#define UIEVENTBOXGACHA_CONFIRMREFRESH_OFFSET UNITYSDK_OFFSET(0x247E700)
#define UIEVENTBOXGACHA_CLOSERESULT_OFFSET UNITYSDK_OFFSET(0x247E040)
#define UIEVENTBOXGACHA_ONRECEIVERESULT_OFFSET UNITYSDK_OFFSET(0x247E7B0)
#define UIEVENTBOXGACHA_SKIPTOEND_OFFSET UNITYSDK_OFFSET(0x247DED0)
#define UIEVENTBOXGACHA_COOPENTHIS_OFFSET UNITYSDK_OFFSET(0x247ED60)
#define UIEVENTBOXGACHA_COSTARTRESULT_OFFSET UNITYSDK_OFFSET(0x247EE00)
#define UIEVENTBOXGACHA_COOPENRESULT_OFFSET UNITYSDK_OFFSET(0x247EEA0)
#define UIEVENTBOXGACHA_COSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x247EF30)
#define UIEVENTBOXGACHA_COSHOWRESULTALL_OFFSET UNITYSDK_OFFSET(0x247EFC0)
#define UIEVENTBOXGACHA_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0x247F050)
#define UIEVENTBOXGACHA_ONCLICKCLAIMERROR_OFFSET UNITYSDK_OFFSET(0x247F0B0)
#define UIEVENTBOXGACHA_.CTOR_OFFSET UNITYSDK_OFFSET(0x247F1A0)
#define UIEVENTBOXGACHA___N__0_OFFSET UNITYSDK_OFFSET(0x247F1C0)
#define UIEVENTBOXGACHA__ONCLICKREFRESH_B__37_0_OFFSET UNITYSDK_OFFSET(0x247F1D0)
#define UIEVENTBOXGACHA__CLOSERESULT_B__40_0_OFFSET UNITYSDK_OFFSET(0x247F270)
#define UIEVENTBOXGACHA__CLOSERESULT_B__40_1_OFFSET UNITYSDK_OFFSET(0x247F300)
#define UIEVENTBOXGACHA__CLOSERESULT_B__40_2_OFFSET UNITYSDK_OFFSET(0x247F360)

	inline static constexpr unsigned int UIEventBoxGacha_TypeDefinitionIndex = 5685;

	class UIEventBoxGacha : public Il2CppObject
	{
	public:
		EventBoxGachaScrollController* scrollController; // 0xD8
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0xE0
		UITexture* bgTexture; // 0xE8
		UILabel* boxCountLabel; // 0xF0
		UILabel* gachaCountLabel; // 0xF8
		UISprite* currencyImage; // 0x100
		UILabel* currencyLabel; // 0x108
		EventBoxGachaClaimButton* claimOnceButton; // 0x110
		EventBoxGachaClaimButton* claimTenTimesButton; // 0x118
		ButtonActivator* refreshButton; // 0x120
		::UnityEngine::GameObject* soldOut; // 0x128
		UIEventBoxGachaResult* resultUI; // 0x130
		MXButton* optionButton; // 0x138
		::UnityEngine::Transform* spineOffsetTransform; // 0x140
		::UnityEngine::Transform* dialogOffsetTransform; // 0x148
		::UnityEngine::GameObject* targetTalkStartObj; // 0x150
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x158
		EventContentBoxGachaProgress* progress; // 0x160
		::System::Boolean hasDefaultClip; // 0x168
		::System::Int32 _multiPickCountMax_k__BackingField; // 0x16C

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_multiPickCountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_GET_MULTIPICKCOUNTMAX_OFFSET))(nullptr);
		}

		::System::Void set_multiPickCountMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_SET_MULTIPICKCOUNTMAX_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_SETDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayDialogDelayed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_PLAYDIALOGDELAYED_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void SetClaimButtons(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_SETCLAIMBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetClaimButtons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_SETCLAIMBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_REFRESHLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COLOADSPINE_OFFSET))(nullptr);
		}

		::System::Void OnClickRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONCLICKREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONCLICKOPTION_OFFSET))(nullptr);
		}

		::System::Void ConfirmRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_CONFIRMREFRESH_OFFSET))(nullptr);
		}

		::System::Void CloseResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_CLOSERESULT_OFFSET))(nullptr);
		}

		::System::Void OnReceiveResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONRECEIVERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void SkipToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_SKIPTOEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenThis(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COOPENTHIS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStartResult(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COSTARTRESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenResult()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COOPENRESULT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowResult()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COSHOWRESULT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowResultAll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_COSHOWRESULTALL_OFFSET))(nullptr);
		}

		::System::Void OnClickRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONCLICKRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClaimError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_ONCLICKCLAIMERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickRefresh_b__37_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA__ONCLICKREFRESH_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CloseResult_b__40_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA__CLOSERESULT_B__40_0_OFFSET))(nullptr);
		}

		::System::Void _CloseResult_b__40_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA__CLOSERESULT_B__40_1_OFFSET))(nullptr);
		}

		::System::Void _CloseResult_b__40_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHA__CLOSERESULT_B__40_2_OFFSET))(nullptr);
		}

	};

