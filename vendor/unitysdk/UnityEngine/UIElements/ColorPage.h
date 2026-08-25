#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace UnityEngine::UIElements { class ColorPage; }
namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace UnityEngine::UIElements::UIR { class BMPAlloc; }

#define UNITYENGINE_UIELEMENTS_COLORPAGE_INIT_OFFSET UNITYSDK_OFFSET(0xA408840)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ColorPage_TypeDefinitionIndex = 30577;

	class ColorPage : public Il2CppObject
	{
	public:
		::System::Boolean isValid; // 0x10
		::UnityEngine::Color32* pageAndID; // 0x14

		::UnityEngine::UIElements::ColorPage* Init(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::UIElements::ColorPage*(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLORPAGE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

