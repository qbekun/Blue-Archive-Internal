#pragma once
#include "../../../unitysdk.h"

namespace Unity::Mathematics { class float3; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_POINTBEHINDPLANE_OFFSET UNITYSDK_OFFSET(0xA075800)
#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA075830)
#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_CONEBEHINDPLANE_OFFSET UNITYSDK_OFFSET(0xA075B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_COMPUTEPLANE_OFFSET UNITYSDK_OFFSET(0xA075D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_SPHEREBEHINDPLANE_OFFSET UNITYSDK_OFFSET(0xA075EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_CONTAINSLIGHT_OFFSET UNITYSDK_OFFSET(0xA075EF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SliceCullingJob_TypeDefinitionIndex = 32763;

	class SliceCullingJob : public Il2CppObject
	{
	public:
		::System::Single scale; // 0x10
		::Unity::Mathematics::float3* viewOrigin; // 0x14
		::Unity::Mathematics::float3* viewForward; // 0x20
		::Unity::Mathematics::float3* viewRight; // 0x2C
		::Unity::Mathematics::float3* viewUp; // 0x38
		Il2CppObject* lightTypes; // 0x48
		Il2CppObject* radiuses; // 0x58
		Il2CppObject* directions; // 0x68
		Il2CppObject* positions; // 0x78
		Il2CppObject* coneRadiuses; // 0x88
		::System::Int32 lightsPerTile; // 0x98
		Il2CppObject* sliceLightMasks; // 0xA0

		::System::Boolean PointBehindPlane(::Unity::Mathematics::float3* arg, Plane* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float3*, Plane*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_POINTBEHINDPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ConeBehindPlane(Cone* arg, Plane* arg)
		{
			return (return (::System::Boolean(*)(Cone*, Plane*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_CONEBEHINDPLANE_OFFSET))(arg, arg, nullptr);
		}

		Plane* ComputePlane(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (Plane*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_COMPUTEPLANE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SphereBehindPlane(Sphere* arg, Plane* arg)
		{
			return (return (::System::Boolean(*)(Sphere*, Plane*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_SPHEREBEHINDPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsLight(Plane* arg, Plane* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Plane*, Plane*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECULLINGJOB_CONTAINSLIGHT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

