#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;

#define UIGUIDEMISSIONSCENARIOOPENCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C8C00)
#define UIGUIDEMISSIONSCENARIOOPENCONDITION_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C8C10)

	inline static constexpr unsigned int UIGuideMissionScenarioOpenCondition_TypeDefinitionIndex = 6323;

	class UIGuideMissionScenarioOpenCondition : public Il2CppObject
	{
	public:
		UIWidget* lockedImage; // 0x18
		UIWidget* openedImage; // 0x20
		UILabel* openConditionLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOOPENCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOOPENCONDITION_REFRESH_OFFSET))(str, arg, nullptr);
		}

	};

