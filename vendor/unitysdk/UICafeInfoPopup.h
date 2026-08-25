#pragma once
#include "unitysdk.h"

class MXButton;
class UICafeRankUpPopup;
class IntTabController;
class CafeSetGroupFurnituresPopup;

#define UICAFEINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x227F770)
#define UICAFEINFOPOPUP_ONBACK_OFFSET UNITYSDK_OFFSET(0x227F780)
#define UICAFEINFOPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x227F990)
#define UICAFEINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x227FA40)

	inline static constexpr unsigned int UICafeInfoPopup_TypeDefinitionIndex = 4657;

	class UICafeInfoPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UICafeRankUpPopup* rankupPopup; // 0xE0
		IntTabController* cafeInfoTab; // 0xE8
		CafeSetGroupFurnituresPopup* setDetailPopup; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEINFOPOPUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEINFOPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

