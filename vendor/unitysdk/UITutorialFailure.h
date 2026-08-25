#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace FlatData { class TutorialFailureContentType; }

#define UITUTORIALFAILURE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB836B0)
#define UITUTORIALFAILURE___N__0_OFFSET UNITYSDK_OFFSET(0xB836D0)
#define UITUTORIALFAILURE_SETDATA_OFFSET UNITYSDK_OFFSET(0xB836E0)
#define UITUTORIALFAILURE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB83A20)
#define UITUTORIALFAILURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB83AB0)
#define UITUTORIALFAILURE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB83AC0)

	inline static constexpr unsigned int UITutorialFailure_TypeDefinitionIndex = 8529;

	class UITutorialFailure : public Il2CppObject
	{
	public:
		UITexture* tutorialFailureImage; // 0xD8
		UILabel* tutorialFailureText; // 0xE0
		::System::String* imageAddressKey; // 0xE8
		::System::String* textKey; // 0xF0

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE___N__0_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::TutorialFailureContentType* arg, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::TutorialFailureContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE_SETDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALFAILURE_ONCLOSED_OFFSET))(nullptr);
		}

	};

