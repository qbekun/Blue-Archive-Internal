#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IStylePainter; }

#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40BD10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MeshGenerationContext_TypeDefinitionIndex = 30583;

	class MeshGenerationContext : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IStylePainter* painter; // 0x10

		::System::Void .ctor(::UnityEngine::UIElements::IStylePainter* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IStylePainter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

