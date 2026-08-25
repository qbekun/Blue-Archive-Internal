#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_COMPONENTSINGLETON`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COMPONENTSINGLETON`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ComponentSingleton`1_TypeDefinitionIndex = 33886;

	class ComponentSingleton`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_Instance; // 0x0

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMPONENTSINGLETON`1_RELEASE_OFFSET))(nullptr);
		}

		Il2CppObject* get_instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMPONENTSINGLETON`1_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

