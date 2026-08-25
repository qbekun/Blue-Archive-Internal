#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace MX::Data { class GuideMissionSeasonInfo; }

#define UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x27699A0)
#define UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2769A30)
#define UIPOPUP_GUIDEMISSION_OPENINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2769B60)
#define UIPOPUP_GUIDEMISSION_OPENINFO___N__0_OFFSET UNITYSDK_OFFSET(0x2769B70)
#define UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2769B80)
#define UIPOPUP_GUIDEMISSION_OPENINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2769C10)
#define UIPOPUP_GUIDEMISSION_OPENINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2769CA0)
#define UIPOPUP_GUIDEMISSION_OPENINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2769CC0)

	inline static constexpr unsigned int UIPopup_GuideMission_OpenInfo_TypeDefinitionIndex = 7327;

	class UIPopup_GuideMission_OpenInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* bannerTexture; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		::MX::Data::GuideMissionSeasonInfo* nextSeasonInfo; // 0xF8

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDEMISSION_OPENINFO_AWAKE_OFFSET))(nullptr);
		}

	};

