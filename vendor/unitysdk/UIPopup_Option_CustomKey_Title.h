#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class DisplayGroupType; }

#define UIPOPUP_OPTION_CUSTOMKEY_TITLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2195690)
#define UIPOPUP_OPTION_CUSTOMKEY_TITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2196F80)

	inline static constexpr unsigned int UIPopup_Option_CustomKey_Title_TypeDefinitionIndex = 4117;

	class UIPopup_Option_CustomKey_Title : public Il2CppObject
	{
	public:
		UILabel* _titleLabel; // 0x18

		::System::Void Initialize(::FlatData::DisplayGroupType* arg)
		{
			((::System::Void(*)(::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_TITLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_TITLE_.CTOR_OFFSET))(nullptr);
		}

	};

