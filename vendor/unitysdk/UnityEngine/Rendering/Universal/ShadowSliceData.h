#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class ShadowSplitData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSLICEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA072ED0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowSliceData_TypeDefinitionIndex = 32752;

	class ShadowSliceData : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* viewMatrix; // 0x10
		::UnityEngine::Matrix4x4* projectionMatrix; // 0x50
		::UnityEngine::Matrix4x4* shadowTransform; // 0x90
		::System::Int32 offsetX; // 0xD0
		::System::Int32 offsetY; // 0xD4
		::System::Int32 resolution; // 0xD8
		::UnityEngine::Rendering::ShadowSplitData* splitData; // 0xDC

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSLICEDATA_CLEAR_OFFSET))(nullptr);
		}

	};
}

