#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class AssetDataClearType;

#define UIPOPUP_DATACLEAR_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xB704E0)
#define UIPOPUP_DATACLEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xB70920)
#define UIPOPUP_DATACLEAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xB70930)
#define UIPOPUP_DATACLEAR_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xB702D0)
#define UIPOPUP_DATACLEAR_ONCLICKCLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0xB70C10)

	inline static constexpr unsigned int UIPopup_DataClear_TypeDefinitionIndex = 8465;

	class UIPopup_DataClear : public Il2CppObject
	{
	public:
		UILabel* message; // 0xD8
		MXButton* legacyBundleClearPopupCloseButton; // 0xE0
		MXButton* legacyBundleClearPopupCancleButton; // 0xE8
		MXButton* legacyBundleClearPopupOkButton; // 0xF0
		AssetDataClearType* curDataClearType; // 0xF8

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DATACLEAR_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DATACLEAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DATACLEAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialized(AssetDataClearType* arg)
		{
			((::System::Void(*)(AssetDataClearType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DATACLEAR_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DATACLEAR_ONCLICKCLOSEPOPUP_OFFSET))(nullptr);
		}

	};

