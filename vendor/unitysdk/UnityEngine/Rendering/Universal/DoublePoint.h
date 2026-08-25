#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DoublePoint; }
namespace UnityEngine::Rendering::Universal { class IntPoint; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8E80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DoublePoint_TypeDefinitionIndex = 32430;

	class DoublePoint : public Il2CppObject
	{
	public:
		::System::Double X; // 0x10
		::System::Double Y; // 0x18

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DoublePoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DoublePoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOUBLEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

