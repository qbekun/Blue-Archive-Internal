#pragma once
#include "unitysdk.h"

namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }
class GaugeUIActionExecuter;

#define GAUGEUIACTIONEXECUTER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAUGEUIACTIONEXECUTER_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAUGEUIACTIONEXECUTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9DD0)

	inline static constexpr unsigned int GaugeUIActionExecuter_TypeDefinitionIndex = 6402;

	class GaugeUIActionExecuter : public Il2CppObject
	{
	public:
		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTER_EXECUTE_OFFSET))(arg, nullptr);
		}

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTER_COPYTO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTER_.CTOR_OFFSET))(nullptr);
		}

	};

