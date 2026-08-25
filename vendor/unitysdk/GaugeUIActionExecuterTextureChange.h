#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Texture; }
class GaugeUIActionExecuter;
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }

#define GAUGEUIACTIONEXECUTERTEXTURECHANGE_COPYTO_OFFSET UNITYSDK_OFFSET(0x25E9F50)
#define GAUGEUIACTIONEXECUTERTEXTURECHANGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25E9FE0)
#define GAUGEUIACTIONEXECUTERTEXTURECHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9FD0)

	inline static constexpr unsigned int GaugeUIActionExecuterTextureChange_TypeDefinitionIndex = 6405;

	class GaugeUIActionExecuterTextureChange : public Il2CppObject
	{
	public:
		UITexture* uiObject; // 0x10
		::UnityEngine::Texture* texture; // 0x18

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERTEXTURECHANGE_COPYTO_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERTEXTURECHANGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERTEXTURECHANGE_.CTOR_OFFSET))(nullptr);
		}

	};

