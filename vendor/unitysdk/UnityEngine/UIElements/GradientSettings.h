#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class GradientType; }
namespace UnityEngine::UIElements { class AddressMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RectInt; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GradientSettings_TypeDefinitionIndex = 30242;

	class GradientSettings : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::GradientType* gradientType; // 0x10
		::UnityEngine::UIElements::AddressMode* addressMode; // 0x14
		::UnityEngine::Vector2* radialFocus; // 0x18
		::UnityEngine::RectInt* location; // 0x20

	};
}

