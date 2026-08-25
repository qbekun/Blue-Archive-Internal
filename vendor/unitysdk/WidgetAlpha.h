#pragma once
#include "unitysdk.h"

class UIWidget;

#define WIDGETALPHA_.CTOR_OFFSET UNITYSDK_OFFSET(0xC22860)
#define WIDGETALPHA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC22870)
#define WIDGETALPHA_AWAKE_OFFSET UNITYSDK_OFFSET(0xC22990)
#define WIDGETALPHA_SAMPLE_OFFSET UNITYSDK_OFFSET(0xC22900)
#define WIDGETALPHA_UPDATE_OFFSET UNITYSDK_OFFSET(0xC22A50)

	inline static constexpr unsigned int WidgetAlpha_TypeDefinitionIndex = 8884;

	class WidgetAlpha : public Il2CppObject
	{
	public:
		::System::Single alpha; // 0x18
		UIWidget* widget; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETALPHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETALPHA_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETALPHA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Sample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETALPHA_SAMPLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETALPHA_UPDATE_OFFSET))(nullptr);
		}

	};

