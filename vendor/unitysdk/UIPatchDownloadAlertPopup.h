#pragma once
#include "unitysdk.h"

class UILabel;

#define UIPATCHDOWNLOADALERTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x26CA690)
#define UIPATCHDOWNLOADALERTPOPUP_SET_OFFSET UNITYSDK_OFFSET(0x26CA6A0)

	inline static constexpr unsigned int UIPatchDownloadAlertPopup_TypeDefinitionIndex = 7001;

	class UIPatchDownloadAlertPopup : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UILabel* messageLabel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADALERTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOADALERTPOPUP_SET_OFFSET))(str, str2, nullptr);
		}

	};

