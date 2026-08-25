#pragma once
#include "unitysdk.h"

class UISprite;
namespace UnityEngine { class Material; }
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }
class GaugeUIActionExecuter;

#define GAUGEUIACTIONEXECUTERMATERIALCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EA230)
#define GAUGEUIACTIONEXECUTERMATERIALCHANGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25EA240)
#define GAUGEUIACTIONEXECUTERMATERIALCHANGE_COPYTO_OFFSET UNITYSDK_OFFSET(0x25EA280)

	inline static constexpr unsigned int GaugeUIActionExecuterMaterialChange_TypeDefinitionIndex = 6407;

	class GaugeUIActionExecuterMaterialChange : public Il2CppObject
	{
	public:
		UISprite* uiSprite; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERMATERIALCHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERMATERIALCHANGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERMATERIALCHANGE_COPYTO_OFFSET))(nullptr);
		}

	};

