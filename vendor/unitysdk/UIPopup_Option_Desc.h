#pragma once
#include "unitysdk.h"

class UILabel;

#define UIPOPUP_OPTION_DESC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2722230)
#define UIPOPUP_OPTION_DESC_SETTEXT_OFFSET UNITYSDK_OFFSET(0x2722240)
#define UIPOPUP_OPTION_DESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x27222C0)

	inline static constexpr unsigned int UIPopup_Option_Desc_TypeDefinitionIndex = 7162;

	class UIPopup_Option_Desc : public Il2CppObject
	{
	public:
		UILabel* descLabel; // 0x28

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_DESC_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_DESC_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_DESC_.CTOR_OFFSET))(nullptr);
		}

	};

