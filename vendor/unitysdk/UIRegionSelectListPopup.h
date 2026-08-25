#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIGrid;
class UIRegionSelectListElement;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIREGIONSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD4DA0)
#define UIREGIONSELECTLISTPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD4E00)
#define UIREGIONSELECTLISTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD4F00)
#define UIREGIONSELECTLISTPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xCD5080)
#define UIREGIONSELECTLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD56A0)
#define UIREGIONSELECTLISTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD4DD0)
#define UIREGIONSELECTLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD5720)
#define UIREGIONSELECTLISTPOPUP_HANDLESELECTREGIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xCD5870)

	inline static constexpr unsigned int UIRegionSelectListPopup_TypeDefinitionIndex = 9153;

	class UIRegionSelectListPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGrid* grid; // 0x28
		UIRegionSelectListElement* listElementPrefab; // 0x30
		Il2CppObject* serverButtonList; // 0x38

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_OPENPOPUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectRegionMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTPOPUP_HANDLESELECTREGIONMESSAGE_OFFSET))(arg, nullptr);
		}

	};

