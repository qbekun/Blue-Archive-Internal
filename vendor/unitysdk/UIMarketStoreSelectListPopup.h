#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIGrid;
class IntTabController;

#define UIMARKETSTORESELECTLISTPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xCD2CD0)
#define UIMARKETSTORESELECTLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD46F0)
#define UIMARKETSTORESELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD4700)
#define UIMARKETSTORESELECTLISTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD1C30)
#define UIMARKETSTORESELECTLISTPOPUP_ONCHANGEDMARKETSTORE_OFFSET UNITYSDK_OFFSET(0xCD4730)
#define UIMARKETSTORESELECTLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD47A0)

	inline static constexpr unsigned int UIMarketStoreSelectListPopup_TypeDefinitionIndex = 9150;

	class UIMarketStoreSelectListPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGrid* grid; // 0x28
		IntTabController* storeTypeController; // 0x30

		::System::Void OpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_OPENPOPUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnChangedMarketStore(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_ONCHANGEDMARKETSTORE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMARKETSTORESELECTLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

