#pragma once
#include "unitysdk.h"

class MXButton;

#define UIMINIGAMESHOOTINGPAUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20832B0)
#define UIMINIGAMESHOOTINGPAUSE_ONCLICKRETREAT_OFFSET UNITYSDK_OFFSET(0x2083590)
#define UIMINIGAMESHOOTINGPAUSE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2083670)
#define UIMINIGAMESHOOTINGPAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20839F0)
#define UIMINIGAMESHOOTINGPAUSE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2083A00)

	inline static constexpr unsigned int UIMiniGameShootingPause_TypeDefinitionIndex = 3432;

	class UIMiniGameShootingPause : public Il2CppObject
	{
	public:
		MXButton* ButtonRetreat; // 0xD8
		MXButton* ButtonCancel; // 0xE0
		MXButton* ButtonX; // 0xE8
		::Il2CppArray<::System::Object*>* GeasParcel; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGPAUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRetreat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGPAUSE_ONCLICKRETREAT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGPAUSE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGPAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGPAUSE_ONCLOSED_OFFSET))(nullptr);
		}

	};

