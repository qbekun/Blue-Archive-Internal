#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UIElements { class ColorPage; }

	inline static constexpr unsigned int BorderParams_TypeDefinitionIndex = 30578;

	class BorderParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* rect; // 0x10
		::UnityEngine::Color* playmodeTintColor; // 0x20
		::UnityEngine::Color* leftColor; // 0x30
		::UnityEngine::Color* topColor; // 0x40
		::UnityEngine::Color* rightColor; // 0x50
		::UnityEngine::Color* bottomColor; // 0x60
		::System::Single leftWidth; // 0x70
		::System::Single topWidth; // 0x74
		::System::Single rightWidth; // 0x78
		::System::Single bottomWidth; // 0x7C
		::UnityEngine::Vector2* topLeftRadius; // 0x80
		::UnityEngine::Vector2* topRightRadius; // 0x88
		::UnityEngine::Vector2* bottomRightRadius; // 0x90
		::UnityEngine::Vector2* bottomLeftRadius; // 0x98
		::UnityEngine::Material* material; // 0xA0
		::UnityEngine::UIElements::ColorPage* leftColorPage; // 0xA8
		::UnityEngine::UIElements::ColorPage* topColorPage; // 0xB0
		::UnityEngine::UIElements::ColorPage* rightColorPage; // 0xB8
		::UnityEngine::UIElements::ColorPage* bottomColorPage; // 0xC0

	};

