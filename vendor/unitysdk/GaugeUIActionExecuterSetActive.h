#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }
class GaugeUIActionExecuter;

#define GAUGEUIACTIONEXECUTERSETACTIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25E9DE0)
#define GAUGEUIACTIONEXECUTERSETACTIVE_COPYTO_OFFSET UNITYSDK_OFFSET(0x25E9E10)
#define GAUGEUIACTIONEXECUTERSETACTIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9E80)

	inline static constexpr unsigned int GaugeUIActionExecuterSetActive_TypeDefinitionIndex = 6403;

	class GaugeUIActionExecuterSetActive : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* uiObject; // 0x10
		::System::Boolean active; // 0x18

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERSETACTIVE_EXECUTE_OFFSET))(arg, nullptr);
		}

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERSETACTIVE_COPYTO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERSETACTIVE_.CTOR_OFFSET))(nullptr);
		}

	};

