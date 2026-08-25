#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Plane; }
namespace UnityEngine::Rendering { class ShadowSplitData; }

#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0xA264250)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA264260)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_SET_SHADOWCASCADEBLENDCULLINGFACTOR_OFFSET UNITYSDK_OFFSET(0xA263C40)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA264270)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA263ED0)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2643D0)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2641D0)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA264480)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowSplitData_TypeDefinitionIndex = 31572;

	class ShadowSplitData : public Il2CppObject
	{
	public:
		::System::Int32 k_MaximumCullingPlaneCount; // 0x0
		::System::Int32 maximumCullingPlaneCount; // 0x0
		::System::Int32 m_CullingPlaneCount; // 0x10
		<m_CullingPlanes>e__FixedBuffer* m_CullingPlanes; // 0x14
		::UnityEngine::Vector4* m_CullingSphere; // 0xB4
		::System::Single m_ShadowCascadeBlendCullingFactor; // 0xC4
		::System::Single m_CullingNearPlane; // 0xC8

		::System::Int32 get_cullingPlaneCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGPLANECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_cullingSphere()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGSPHERE_OFFSET))(nullptr);
		}

		::System::Void set_shadowCascadeBlendCullingFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_SET_SHADOWCASCADEBLENDCULLINGFACTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Plane* GetCullingPlane(::System::Int32 arg)
		{
			return (return (::UnityEngine::Plane*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETCULLINGPLANE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ShadowSplitData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ShadowSplitData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

