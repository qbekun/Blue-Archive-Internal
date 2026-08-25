#pragma once
#include "unitysdk.h"

class ActionType;
class GaugeUIActionExecuter;
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }

#define GAUGEUIACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25E9DA0)
#define GAUGEUIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9DC0)

	inline static constexpr unsigned int GaugeUIAction_TypeDefinitionIndex = 6401;

	class GaugeUIAction : public Il2CppObject
	{
	public:
		ActionType* actionType; // 0x10
		GaugeUIActionExecuter* executer; // 0x18

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTION_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTION_.CTOR_OFFSET))(nullptr);
		}

	};

