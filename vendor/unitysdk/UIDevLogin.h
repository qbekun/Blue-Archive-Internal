#pragma once
#include "unitysdk.h"

#define UIDEVLOGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xB70480)
#define UIDEVLOGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB70490)
#define UIDEVLOGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xB704A0)
#define UIDEVLOGIN_ONCLICKDEVLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0xB704B0)
#define UIDEVLOGIN_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB704C0)

	inline static constexpr unsigned int UIDevLogin_TypeDefinitionIndex = 8462;

	class UIDevLogin : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEVLOGIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEVLOGIN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEVLOGIN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickDevLoginButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEVLOGIN_ONCLICKDEVLOGINBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEVLOGIN_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

	};

