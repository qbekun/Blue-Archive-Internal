#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Matrix4x4; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8C1A0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolume_TypeDefinitionIndex = 33811;

	class ProbeVolume : public Il2CppObject
	{
	public:
		::System::Boolean globalVolume; // 0x18
		::UnityEngine::Vector3* size; // 0x1C
		::System::Single geometryDistanceOffset; // 0x28
		::UnityEngine::LayerMask* objectLayerMask; // 0x2C
		::System::Int32 lowestSubdivLevelOverride; // 0x30
		::System::Int32 highestSubdivLevelOverride; // 0x34
		::System::Boolean overridesSubdivLevels; // 0x38
		::System::Boolean mightNeedRebaking; // 0x39
		::UnityEngine::Matrix4x4* cachedTransform; // 0x3C
		::System::Int32 cachedHashCode; // 0x7C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUME_.CTOR_OFFSET))(nullptr);
		}

	};
}

