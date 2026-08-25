#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class ReflectionMethodsCache; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA486270)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GET_SINGLETON_OFFSET UNITYSDK_OFFSET(0xA4870B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_TypeDefinitionIndex = 34865;

	class ReflectionMethodsCache : public Il2CppObject
	{
	public:
		Raycast3DCallback* raycast3D; // 0x10
		RaycastAllCallback* raycast3DAll; // 0x18
		GetRaycastNonAllocCallback* getRaycastNonAlloc; // 0x20
		Raycast2DCallback* raycast2D; // 0x28
		GetRayIntersectionAllCallback* getRayIntersectionAll; // 0x30
		GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc; // 0x38
		::UnityEngine::UI::ReflectionMethodsCache* s_ReflectionMethodsCache; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UI::ReflectionMethodsCache* get_Singleton()
		{
			return (return (::UnityEngine::UI::ReflectionMethodsCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GET_SINGLETON_OFFSET))(nullptr);
		}

	};
}

