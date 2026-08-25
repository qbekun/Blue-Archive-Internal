#pragma once
#include "unitysdk.h"

#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x26D6430)
#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D64B0)

	inline static constexpr unsigned int UIPermanentRaidBossSelectScrollViewController_TypeDefinitionIndex = 7030;

	class UIPermanentRaidBossSelectScrollViewController : public ElementScope
	{
	public:
		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

