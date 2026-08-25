#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
namespace MX::Data { class ManagementGuidePopupData; }

#define UIPOPUP_GUIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2768590)
#define UIPOPUP_GUIDE_LOADGUIDEPOPUPIMAGE_OFFSET UNITYSDK_OFFSET(0x2768880)
#define UIPOPUP_GUIDE_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2768A00)
#define UIPOPUP_GUIDE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2768C40)
#define UIPOPUP_GUIDE_SETDATA_OFFSET UNITYSDK_OFFSET(0x2768CD0)
#define UIPOPUP_GUIDE_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2768D10)
#define UIPOPUP_GUIDE_SETGUIDEPOPUPIMAGE_OFFSET UNITYSDK_OFFSET(0x2768960)
#define UIPOPUP_GUIDE_DOWNLOADGUIDEPOPUPIMAGE_OFFSET UNITYSDK_OFFSET(0x2768F50)
#define UIPOPUP_GUIDE_CANCEL_OFFSET UNITYSDK_OFFSET(0x2768D20)
#define UIPOPUP_GUIDE___N__0_OFFSET UNITYSDK_OFFSET(0x2769010)
#define UIPOPUP_GUIDE_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x2769020)
#define UIPOPUP_GUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2769030)

	inline static constexpr unsigned int UIPopup_Guide_TypeDefinitionIndex = 7324;

	class UIPopup_Guide : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* guideImageTexture; // 0xE0
		UILabel* messageLabel; // 0xE8
		MXButton* cancelButton; // 0xF0
		MXButton* okButton; // 0xF8
		::MX::Data::ManagementGuidePopupData* guidePopupData; // 0x100
		Il2CppObject* closeCallback; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean LoadGuidePopupImage(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_LOADGUIDEPOPUPIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::ManagementGuidePopupData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::ManagementGuidePopupData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClosebutton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetGuidePopupImage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_SETGUIDEPOPUPIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* DownloadGuidePopupImage(::System::String* str, ::System::String* str2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_DOWNLOADGUIDEPOPUPIMAGE_OFFSET))(str, str2, nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_CANCEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GUIDE_.CTOR_OFFSET))(nullptr);
		}

	};

