#pragma once
#include "unitysdk.h"

class MXButton;
class UIRatioNoticePopup;

#define UIBUTTONHYPERLINK__ONCLICKURL_B__5_0_OFFSET UNITYSDK_OFFSET(0xC8B2E0)
#define UIBUTTONHYPERLINK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8B340)
#define UIBUTTONHYPERLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8B3D0)
#define UIBUTTONHYPERLINK_ONCLICKURL_OFFSET UNITYSDK_OFFSET(0xC8B620)

	inline static constexpr unsigned int UiButtonHyperLink_TypeDefinitionIndex = 9092;

	class UiButtonHyperLink : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* activeRegion; // 0x18
		::System::Boolean openBrowser; // 0x20
		MXButton* mxButton; // 0x28
		::System::String* url; // 0x30

		::System::Void _OnClickUrl_b__5_0(UIRatioNoticePopup* arg)
		{
			((::System::Void(*)(UIRatioNoticePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONHYPERLINK__ONCLICKURL_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONHYPERLINK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONHYPERLINK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickUrl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONHYPERLINK_ONCLICKURL_OFFSET))(nullptr);
		}

	};

