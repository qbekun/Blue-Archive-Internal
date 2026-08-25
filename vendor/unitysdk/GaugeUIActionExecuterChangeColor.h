#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Color; }
class GaugeUIActionExecuter;
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }

#define GAUGEUIACTIONEXECUTERCHANGECOLOR_COPYTO_OFFSET UNITYSDK_OFFSET(0x25E9E90)
#define GAUGEUIACTIONEXECUTERCHANGECOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9F00)
#define GAUGEUIACTIONEXECUTERCHANGECOLOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25E9F10)

	inline static constexpr unsigned int GaugeUIActionExecuterChangeColor_TypeDefinitionIndex = 6404;

	class GaugeUIActionExecuterChangeColor : public Il2CppObject
	{
	public:
		UITexture* uiObject; // 0x10
		::UnityEngine::Color* color; // 0x18

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERCHANGECOLOR_COPYTO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERCHANGECOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERCHANGECOLOR_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

