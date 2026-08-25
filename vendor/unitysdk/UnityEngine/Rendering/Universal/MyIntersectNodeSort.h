#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntersectNode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MYINTERSECTNODESORT_COMPARE_OFFSET UNITYSDK_OFFSET(0x9FF9B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MYINTERSECTNODESORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MyIntersectNodeSort_TypeDefinitionIndex = 32445;

	class MyIntersectNodeSort : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::UnityEngine::Rendering::Universal::IntersectNode* arg, ::UnityEngine::Rendering::Universal::IntersectNode* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::IntersectNode*, ::UnityEngine::Rendering::Universal::IntersectNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MYINTERSECTNODESORT_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MYINTERSECTNODESORT_.CTOR_OFFSET))(nullptr);
		}

	};
}

