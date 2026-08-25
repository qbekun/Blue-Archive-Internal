#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class OptionType; }

#define UIPOPUP_OPTION_ITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_OPTION_ITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2718A40)

	inline static constexpr unsigned int UIPopup_Option_Item_TypeDefinitionIndex = 7146;

	class UIPopup_Option_Item : public Il2CppObject
	{
	public:
		::MX::SaveData::OptionType* OptionType; // 0x18
		Il2CppObject* onChangedValue; // 0x20

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ITEM_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ITEM_.CTOR_OFFSET))(nullptr);
		}

	};

