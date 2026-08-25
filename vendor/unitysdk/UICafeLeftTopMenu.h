#pragma once
#include "unitysdk.h"

class UICafeMoveButton;
class MXButton;
class UICafe;
class UIPopup_System;
class RequestTravelCafeMessage;

#define UICAFELEFTTOPMENU__ONCLICKTRAVELRANDOM_B__11_0_OFFSET UNITYSDK_OFFSET(0x227FC80)
#define UICAFELEFTTOPMENU__ONCLICKTRAVELRANDOM_B__11_1_OFFSET UNITYSDK_OFFSET(0x227FD70)
#define UICAFELEFTTOPMENU_REQUESTTRAVELCAFE_OFFSET UNITYSDK_OFFSET(0x227FD90)
#define UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__CO_ONCLICKTRAVELSOCIAL|10_0_OFFSET UNITYSDK_OFFSET(0x227FFA0)
#define UICAFELEFTTOPMENU_REFRESH_OFFSET UNITYSDK_OFFSET(0x22745D0)
#define UICAFELEFTTOPMENU_ONCLICKTRAVELRANDOM_OFFSET UNITYSDK_OFFSET(0x22801C0)
#define UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__ISCLANMEMBERLISTSYNCTIME|10_2_OFFSET UNITYSDK_OFFSET(0x22802A0)
#define UICAFELEFTTOPMENU_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2280480)
#define UICAFELEFTTOPMENU_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2275290)
#define UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__ISFRIENDLISTSYNCTIME|10_1_OFFSET UNITYSDK_OFFSET(0x2280550)
#define UICAFELEFTTOPMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0x2280730)
#define UICAFELEFTTOPMENU_ONCLICKTRAVELRETURN_OFFSET UNITYSDK_OFFSET(0x2280740)
#define UICAFELEFTTOPMENU_ONCLICKTRAVELSOCIAL_OFFSET UNITYSDK_OFFSET(0x2280940)
#define UICAFELEFTTOPMENU_RESET_OFFSET UNITYSDK_OFFSET(0x22766F0)
#define UICAFELEFTTOPMENU_ONREQUESTTRAVELCAFE_OFFSET UNITYSDK_OFFSET(0x22809B0)
#define UICAFELEFTTOPMENU_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2280A20)

	inline static constexpr unsigned int UICafeLeftTopMenu_TypeDefinitionIndex = 4662;

	class UICafeLeftTopMenu : public Il2CppObject
	{
	public:
		UICafeMoveButton* MoveCafeButton; // 0x18
		MXButton* TravelSocialButton; // 0x20
		MXButton* TravelRandomButton; // 0x28
		MXButton* TravelReturnButton; // 0x30
		UICafe* uiCafe; // 0x38

		::System::Void _OnClickTravelRandom_b__11_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU__ONCLICKTRAVELRANDOM_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickTravelRandom_b__11_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU__ONCLICKTRAVELRANDOM_B__11_1_OFFSET))(nullptr);
		}

		::System::Void RequestTravelCafe(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_REQUESTTRAVELCAFE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnClickTravelSocial_g__Co_OnClickTravelSocial|10_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__CO_ONCLICKTRAVELSOCIAL|10_0_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickTravelRandom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONCLICKTRAVELRANDOM_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickTravelSocial_g__IsClanMemberListSyncTime|10_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__ISCLANMEMBERLISTSYNCTIME|10_2_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UICafe* arg)
		{
			((::System::Void(*)(UICafe*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnClickTravelSocial_g__IsFriendListSyncTime|10_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU__ONCLICKTRAVELSOCIAL_G__ISFRIENDLISTSYNCTIME|10_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickTravelReturn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONCLICKTRAVELRETURN_OFFSET))(nullptr);
		}

		::System::Void OnClickTravelSocial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONCLICKTRAVELSOCIAL_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_RESET_OFFSET))(nullptr);
		}

		::System::Boolean OnRequestTravelCafe(RequestTravelCafeMessage* arg)
		{
			return ((::System::Boolean(*)(RequestTravelCafeMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONREQUESTTRAVELCAFE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFELEFTTOPMENU_ONDISABLE_OFFSET))(nullptr);
		}

	};

