#pragma once
#include "unitysdk.h"

class MXButton;

#define UISKIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xC21AE0)
#define UISKIP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xC21C10)
#define UISKIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xC21D40)
#define UISKIP_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0xC21C20)
#define UISKIP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC21D50)

	inline static constexpr unsigned int UISkip_TypeDefinitionIndex = 8880;

	class UISkip : public Il2CppObject
	{
	public:
		MXButton* SkipButton; // 0xD8
		::System::Action* skipAction; // 0xE0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKIP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKIP_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISKIP_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

