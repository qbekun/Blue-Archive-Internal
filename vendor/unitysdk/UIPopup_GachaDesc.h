#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_GACHADESC_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7A470)
#define UIPOPUP_GACHADESC_ONBACK_OFFSET UNITYSDK_OFFSET(0xA7A480)
#define UIPOPUP_GACHADESC_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7A490)
#define UIPOPUP_GACHADESC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA7A5C0)

	inline static constexpr unsigned int UIPopup_GachaDesc_TypeDefinitionIndex = 7874;

	class UIPopup_GachaDesc : public Il2CppObject
	{
	public:
		UILabel* description; // 0xD8
		MXButton* confirm; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHADESC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHADESC_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHADESC_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHADESC_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

