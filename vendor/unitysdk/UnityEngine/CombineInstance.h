#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }

namespace UnityEngine
{
	inline static constexpr unsigned int CombineInstance_TypeDefinitionIndex = 31067;

	class CombineInstance : public Il2CppObject
	{
	public:
		::System::Int32 m_MeshInstanceID; // 0x10
		::System::Int32 m_SubMeshIndex; // 0x14
		::UnityEngine::Matrix4x4* m_Transform; // 0x18
		::UnityEngine::Vector4* m_LightmapScaleOffset; // 0x58
		::UnityEngine::Vector4* m_RealtimeLightmapScaleOffset; // 0x68

	};
}

