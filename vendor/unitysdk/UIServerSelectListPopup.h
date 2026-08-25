#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIGrid;
class UIServerSelectListElement;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISERVERSELECTLISTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6B3E0)
#define UISERVERSELECTLISTPOPUP_HANDLESELECTSERVERMESSAGE_OFFSET UNITYSDK_OFFSET(0xA6B560)
#define UISERVERSELECTLISTPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xA6B5F0)
#define UISERVERSELECTLISTPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6BB80)
#define UISERVERSELECTLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6BC80)
#define UISERVERSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA6BD00)
#define UISERVERSELECTLISTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xA6BD30)
#define UISERVERSELECTLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6BD60)

	inline static constexpr unsigned int UIServerSelectListPopup_TypeDefinitionIndex = 7842;

	class UIServerSelectListPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGrid* grid; // 0x28
		UIServerSelectListElement* listElementPrefab; // 0x30
		Il2CppObject* serverButtonList; // 0x38

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectServerMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_HANDLESELECTSERVERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_OPENPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

