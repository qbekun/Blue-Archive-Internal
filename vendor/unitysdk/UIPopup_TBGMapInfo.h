#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_TBGMAPINFO___N__0_OFFSET UNITYSDK_OFFSET(0xB3EFE0)
#define UIPOPUP_TBGMAPINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB3EFF0)
#define UIPOPUP_TBGMAPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB3F080)
#define UIPOPUP_TBGMAPINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB3F090)
#define UIPOPUP_TBGMAPINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB3F120)

	inline static constexpr unsigned int UIPopup_TBGMapInfo_TypeDefinitionIndex = 8327;

	class UIPopup_TBGMapInfo : public Il2CppObject
	{
	public:
		UILabel* TitleLabel; // 0xD8
		MXButton* CloseButton; // 0xE0
		Il2CppObject* MarkerList; // 0xE8

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGMAPINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGMAPINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGMAPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGMAPINFO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGMAPINFO_AWAKE_OFFSET))(nullptr);
		}

	};

