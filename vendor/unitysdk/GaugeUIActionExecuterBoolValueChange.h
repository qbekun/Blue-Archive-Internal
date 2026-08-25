#pragma once
#include "unitysdk.h"

namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }
class GaugeUIActionExecuter;

#define GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EA300)
#define GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25EA310)
#define GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_COPYTO_OFFSET UNITYSDK_OFFSET(0x25EA3C0)

	inline static constexpr unsigned int GaugeUIActionExecuterBoolValueChange_TypeDefinitionIndex = 6408;

	class GaugeUIActionExecuterBoolValueChange : public Il2CppObject
	{
	public:
		::System::String* valueName; // 0x10
		::System::Boolean value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERBOOLVALUECHANGE_COPYTO_OFFSET))(nullptr);
		}

	};

