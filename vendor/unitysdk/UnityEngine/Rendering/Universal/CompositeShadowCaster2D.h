#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0249A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0249B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA0249C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CompositeShadowCaster2D_TypeDefinitionIndex = 32494;

	class CompositeShadowCaster2D : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPOSITESHADOWCASTER2D_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

