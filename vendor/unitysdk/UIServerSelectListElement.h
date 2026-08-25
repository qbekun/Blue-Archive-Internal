#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UISERVERSELECTLISTELEMENT_ONCLICKSERVER_OFFSET UNITYSDK_OFFSET(0xA6B000)
#define UISERVERSELECTLISTELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA6B120)
#define UISERVERSELECTLISTELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0xA6B1B0)
#define UISERVERSELECTLISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6B1E0)
#define UISERVERSELECTLISTELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6B240)

	inline static constexpr unsigned int UIServerSelectListElement_TypeDefinitionIndex = 7841;

	class UIServerSelectListElement : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		MXButton* button; // 0x20
		::System::String* connectionGroupName; // 0x28

		::System::Void OnClickServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTELEMENT_ONCLICKSERVER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTELEMENT_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTELEMENT_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTLISTELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

