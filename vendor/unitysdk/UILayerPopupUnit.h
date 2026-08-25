#pragma once
#include "unitysdk.h"

class MXButton;
class UIReddotDecoration;
class OpenConditionButtonController;
namespace UnityEngine { class GameObject; }
class UIOpenerBase;

#define UILAYERPOPUPUNIT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x27041F0)
#define UILAYERPOPUPUNIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2704230)
#define UILAYERPOPUPUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2704890)
#define UILAYERPOPUPUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27049B0)

	inline static constexpr unsigned int UILayerPopupUnit_TypeDefinitionIndex = 7090;

	class UILayerPopupUnit : public Il2CppObject
	{
	public:
		MXButton* unitButton; // 0x18
		::Il2CppArray<::System::Object*>* onOffDisplays; // 0x20
		UIReddotDecoration* reddot; // 0x28
		OpenConditionButtonController* openConditionButtonController; // 0x30
		::UnityEngine::GameObject* ContentsLockObject; // 0x38
		UIOpenerBase* uiOpener; // 0x40
		::System::Boolean isContentsLock; // 0x48

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILAYERPOPUPUNIT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIOpenerBase* arg)
		{
			((::System::Void(*)(UIOpenerBase*, ::PVOID))((::PBYTE)hIl2Cpp + UILAYERPOPUPUNIT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILAYERPOPUPUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILAYERPOPUPUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

