#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering { class VisibleReflectionProbe; }

#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA266DF0)
#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2670F0)
#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA267180)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleReflectionProbe_TypeDefinitionIndex = 31583;

	class VisibleReflectionProbe : public Il2CppObject
	{
	public:
		::UnityEngine::Bounds* m_Bounds; // 0x10
		::UnityEngine::Matrix4x4* m_LocalToWorldMatrix; // 0x28
		::UnityEngine::Vector4* m_HdrData; // 0x68
		::UnityEngine::Vector3* m_Center; // 0x78
		::System::Single m_BlendDistance; // 0x84
		::System::Int32 m_Importance; // 0x88
		::System::Int32 m_BoxProjection; // 0x8C
		::System::Int32 m_InstanceId; // 0x90
		::System::Int32 m_TextureId; // 0x94

		::System::Boolean Equals(::UnityEngine::Rendering::VisibleReflectionProbe* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VisibleReflectionProbe*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

