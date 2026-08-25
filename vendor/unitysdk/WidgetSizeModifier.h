#pragma once
#include "unitysdk.h"

class UIWidget;

#define WIDGETSIZEMODIFIER_SAMPLE_OFFSET UNITYSDK_OFFSET(0xC22AE0)
#define WIDGETSIZEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC22B70)
#define WIDGETSIZEMODIFIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC22B90)
#define WIDGETSIZEMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC22BA0)
#define WIDGETSIZEMODIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC22BD0)

	inline static constexpr unsigned int WidgetSizeModifier_TypeDefinitionIndex = 8885;

	class WidgetSizeModifier : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		UIWidget* widget; // 0x20

		::System::Void Sample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSIZEMODIFIER_SAMPLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSIZEMODIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSIZEMODIFIER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSIZEMODIFIER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSIZEMODIFIER_AWAKE_OFFSET))(nullptr);
		}

	};

