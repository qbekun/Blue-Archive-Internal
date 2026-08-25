#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x25A4AF0)
#define INTERACTIVEWORLDRAIDINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A4C70)
#define INTERACTIVEWORLDRAIDINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x25A4C80)
#define INTERACTIVEWORLDRAIDINPUTHANDLER_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x25A4B00)

	inline static constexpr unsigned int InteractiveWorldRaidInputHandler_TypeDefinitionIndex = 333;

	class InteractiveWorldRaidInputHandler : public Il2CppObject
	{
	public:
		::System::Int32 _pressedTransformId; // 0x18
		::System::Boolean _isObjectPressed; // 0x1C

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInputPositionTransform(::UnityEngine::Transform&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void HandleInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTHANDLER_HANDLEINPUT_OFFSET))(nullptr);
		}

	};

