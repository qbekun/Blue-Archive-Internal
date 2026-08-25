#pragma once
#include "unitysdk.h"

class EventBoxGachaOptionTabContoller;
class MXButton;

#define UIEVENTBOXGACHAOPTIONPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2480BE0)
#define UIEVENTBOXGACHAOPTIONPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2480BF0)
#define UIEVENTBOXGACHAOPTIONPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2480C00)
#define UIEVENTBOXGACHAOPTIONPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2481080)
#define UIEVENTBOXGACHAOPTIONPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2481300)

	inline static constexpr unsigned int UIEventBoxGachaOptionPopup_TypeDefinitionIndex = 5686;

	class UIEventBoxGachaOptionPopup : public Il2CppObject
	{
	public:
		EventBoxGachaOptionTabContoller* tabController; // 0xD8
		MXButton* cancel; // 0xE0
		MXButton* confirm; // 0xE8

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHAOPTIONPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHAOPTIONPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHAOPTIONPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHAOPTIONPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHAOPTIONPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

	};

