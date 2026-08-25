#pragma once
#include "unitysdk.h"

class UIWidget;

#define SYNCWIDGETSIZEBYSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E2D0)
#define SYNCWIDGETSIZEBYSCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0x205E2E0)

	inline static constexpr unsigned int SyncWidgetSizeByScale_TypeDefinitionIndex = 3376;

	class SyncWidgetSizeByScale : public Il2CppObject
	{
	public:
		UIWidget* syncedTarget; // 0x18
		UIWidget* syncTarget; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCWIDGETSIZEBYSCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCWIDGETSIZEBYSCALE_UPDATE_OFFSET))(nullptr);
		}

	};

