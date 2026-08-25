#pragma once
#include "unitysdk.h"

class MXButton;
class UIGrid;
class UIServerSelectGlobalStatusLabel;
class UIGlobalUtilSelectListPopup;

#define UISERVERSELECTGLOBALSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD7DD0)
#define UISERVERSELECTGLOBALSTATUS_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD7E50)
#define UISERVERSELECTGLOBALSTATUS_SHOWSTATUS_OFFSET UNITYSDK_OFFSET(0xCD6050)
#define UISERVERSELECTGLOBALSTATUS_ONCLICKGLOBALUTILSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0xCD8070)

	inline static constexpr unsigned int UIServerSelectGlobalStatus_TypeDefinitionIndex = 9157;

	class UIServerSelectGlobalStatus : public Il2CppObject
	{
	public:
		MXButton* globalUtilSelectButton; // 0x18
		UIGrid* grid; // 0x20
		UIServerSelectGlobalStatusLabel* statusLabelPrefab; // 0x28
		UIGlobalUtilSelectListPopup* selectGlobalUtilPopup; // 0x30
		Il2CppObject* statusList; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ShowStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUS_SHOWSTATUS_OFFSET))(nullptr);
		}

		::System::Void OnClickGlobalUtilSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUS_ONCLICKGLOBALUTILSELECTBUTTON_OFFSET))(nullptr);
		}

	};

