#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
namespace FlatData { class TutorialFailureContentType; }

#define UIPOPUP_TUTORIALFAILURE_ONCLICKRIGHT_OFFSET UNITYSDK_OFFSET(0xB82270)
#define UIPOPUP_TUTORIALFAILURE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB82450)
#define UIPOPUP_TUTORIALFAILURE_SETDATA_OFFSET UNITYSDK_OFFSET(0xB82510)
#define UIPOPUP_TUTORIALFAILURE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB82C80)
#define UIPOPUP_TUTORIALFAILURE_SETTEXTUREANDTEXT_OFFSET UNITYSDK_OFFSET(0xB822D0)
#define UIPOPUP_TUTORIALFAILURE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB82D10)
#define UIPOPUP_TUTORIALFAILURE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB82DA0)
#define UIPOPUP_TUTORIALFAILURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB83090)
#define UIPOPUP_TUTORIALFAILURE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB83150)
#define UIPOPUP_TUTORIALFAILURE___N__0_OFFSET UNITYSDK_OFFSET(0xB831F0)
#define UIPOPUP_TUTORIALFAILURE_ONCLICKLEFT_OFFSET UNITYSDK_OFFSET(0xB83200)

	inline static constexpr unsigned int UIPopup_TutorialFailure_TypeDefinitionIndex = 8526;

	class UIPopup_TutorialFailure : public Il2CppObject
	{
	public:
		MXButton* bgCloseButton; // 0xD8
		MXButton* leftButton; // 0xE0
		MXButton* rightButton; // 0xE8
		UITexture* tutorialFailureImage; // 0xF0
		UILabel* tutorialFailureText; // 0xF8
		Il2CppObject* imageAddressKeys; // 0x100
		Il2CppObject* textKeys; // 0x108
		::Il2CppArray<::System::Object*>* imageTexturesArray; // 0x110
		::System::Int32 currentIndex; // 0x118

		::System::Void OnClickRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_ONCLICKRIGHT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::TutorialFailureContentType* arg, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::TutorialFailureContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_SETDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetTextureAndText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_SETTEXTUREANDTEXT_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TUTORIALFAILURE_ONCLICKLEFT_OFFSET))(nullptr);
		}

	};

