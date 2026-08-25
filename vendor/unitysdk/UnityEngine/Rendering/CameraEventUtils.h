#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CameraEvent; }

#define UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET UNITYSDK_OFFSET(0xA2501B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraEventUtils_TypeDefinitionIndex = 31498;

	class CameraEventUtils : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(::UnityEngine::Rendering::CameraEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CameraEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

