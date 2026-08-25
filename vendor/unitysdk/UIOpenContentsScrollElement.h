#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;
class ObjectActivator;
class ButtonActivator;
namespace FlatData { class OpenConditionContent; }
class OpenContentsScrollItem;

#define UIOPENCONTENTSSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2717E60)
#define UIOPENCONTENTSSCROLLELEMENT_START_OFFSET UNITYSDK_OFFSET(0x2718490)
#define UIOPENCONTENTSSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27185C0)
#define UIOPENCONTENTSSCROLLELEMENT_DETERMINESHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x2718170)
#define UIOPENCONTENTSSCROLLELEMENT_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x2718630)

	inline static constexpr unsigned int UIOpenContentsScrollElement_TypeDefinitionIndex = 7144;

	class UIOpenContentsScrollElement : public ::System::Xml::Serialization::XmlNodeEventHandler
	{
	public:
		UIWidget* normalWidget; // 0x28
		UIWidget* hardWidget; // 0x30
		UILabel* stageLabel; // 0x38
		ObjectActivator* clearIcon; // 0x40
		UIWidget* contentBackgroundWidget; // 0x48
		UILabel* contentLabel; // 0x50
		ButtonActivator* enterButton; // 0x58
		::System::String* uiName; // 0x60
		::FlatData::OpenConditionContent* myContent; // 0x68
		::System::Boolean isContentsLock; // 0x6C

		::System::Void SetData(OpenContentsScrollItem* arg)
		{
			((::System::Void(*)(OpenContentsScrollItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DetermineShortcutUI(::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLELEMENT_DETERMINESHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLELEMENT_ONCLICKENTER_OFFSET))(nullptr);
		}

	};

