#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int ICanvasRaycastFilter_TypeDefinitionIndex = 37676;

	class ICanvasRaycastFilter : public Il2CppObject
	{
	public:
		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(arg, arg, nullptr);
		}

	};
}

