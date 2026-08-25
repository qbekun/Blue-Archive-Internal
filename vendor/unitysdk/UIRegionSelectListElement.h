#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIREGIONSELECTLISTELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0xCD49C0)
#define UIREGIONSELECTLISTELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD49F0)
#define UIREGIONSELECTLISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD4B90)
#define UIREGIONSELECTLISTELEMENT_ONCLICKREGION_OFFSET UNITYSDK_OFFSET(0xCD4BF0)
#define UIREGIONSELECTLISTELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCD4D10)

	inline static constexpr unsigned int UIRegionSelectListElement_TypeDefinitionIndex = 9152;

	class UIRegionSelectListElement : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		MXButton* button; // 0x20
		::System::String* regionName; // 0x28

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTELEMENT_HIDE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRegion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTELEMENT_ONCLICKREGION_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIREGIONSELECTLISTELEMENT_INITIALIZE_OFFSET))(str, nullptr);
		}

	};

