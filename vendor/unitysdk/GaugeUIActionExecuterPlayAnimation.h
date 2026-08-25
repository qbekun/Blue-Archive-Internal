#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class GaugeUIActionExecuter;
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }

#define GAUGEUIACTIONEXECUTERPLAYANIMATION_COPYTO_OFFSET UNITYSDK_OFFSET(0x25EA020)
#define GAUGEUIACTIONEXECUTERPLAYANIMATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25EA0A0)
#define GAUGEUIACTIONEXECUTERPLAYANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EA090)

	inline static constexpr unsigned int GaugeUIActionExecuterPlayAnimation_TypeDefinitionIndex = 6406;

	class GaugeUIActionExecuterPlayAnimation : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* animation; // 0x10
		::System::String* clipName; // 0x18
		::System::Boolean ignoreWhenPrevAnimIsSameClip; // 0x20

		GaugeUIActionExecuter* CopyTo()
		{
			return ((GaugeUIActionExecuter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERPLAYANIMATION_COPYTO_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERPLAYANIMATION_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIACTIONEXECUTERPLAYANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};

