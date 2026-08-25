#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int UnsafeGenericPool`1_TypeDefinitionIndex = 33917;

	class UnsafeGenericPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_Pool; // 0x0

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_GET_OFFSET))(nullptr);
		}

		Il2CppObject* Get(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNSAFEGENERICPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

