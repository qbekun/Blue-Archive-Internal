#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CameraType; }

namespace UnityEngine
{
	inline static constexpr unsigned int CameraType_TypeDefinitionIndex = 31026;

	class CameraType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CameraType* Game; // 0x0
		::UnityEngine::CameraType* SceneView; // 0x0
		::UnityEngine::CameraType* Preview; // 0x0
		::UnityEngine::CameraType* VR; // 0x0
		::UnityEngine::CameraType* Reflection; // 0x0

	};
}

