#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA065AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA065BB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PaniniProjection_TypeDefinitionIndex = 32702;

	class PaniniProjection : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* distance; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* cropToFit; // 0x38

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

