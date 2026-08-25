#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIToggle;
class ServerSelectButtonType;

#define UISERVERSELECTCLICKBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD7D60)
#define UISERVERSELECTCLICKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD7DC0)
#define UISERVERSELECTCLICKBUTTON_INTIALIZE_OFFSET UNITYSDK_OFFSET(0xCD1790)

	inline static constexpr unsigned int UIServerSelectClickButton_TypeDefinitionIndex = 9156;

	class UIServerSelectClickButton : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UILabel* buttonLabel; // 0x20
		UIToggle* toggle; // 0x28
		UILabel* toggleLabel; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTCLICKBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTCLICKBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Intialize(ServerSelectButtonType* arg, ::System::String* str)
		{
			((::System::Void(*)(ServerSelectButtonType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTCLICKBUTTON_INTIALIZE_OFFSET))(arg, str, nullptr);
		}

	};

