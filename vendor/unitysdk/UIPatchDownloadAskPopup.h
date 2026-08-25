#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class AudioSource; }

#define UIPATCHDOWNLOADASKPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x26CA6E0)
#define UIPATCHDOWNLOADASKPOPUP_SET_OFFSET UNITYSDK_OFFSET(0x26CA6F0)
#define UIPATCHDOWNLOADASKPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x26CA7D0)
#define UIPATCHDOWNLOADASKPOPUP_REMOVE_CONFIRMED_OFFSET UNITYSDK_OFFSET(0x26CA8F0)
#define UIPATCHDOWNLOADASKPOPUP_ADD_CONFIRMED_OFFSET UNITYSDK_OFFSET(0x26CA990)
#define UIPATCHDOWNLOADASKPOPUP_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x26CAA30)

	inline static constexpr unsigned int UIPatchDownloadAskPopup_TypeDefinitionIndex = 7002;

	class UIPatchDownloadAskPopup : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UILabel* messageLabel; // 0x20
		MXButton* confirmButton; // 0x28
		::UnityEngine::AudioSource* audioSource; // 0x30
		UILabel* confirmButtonLabel; // 0x38
		::System::Action* Confirmed; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_SET_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void remove_Confirmed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_REMOVE_CONFIRMED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Confirmed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_ADD_CONFIRMED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADASKPOPUP_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

	};

