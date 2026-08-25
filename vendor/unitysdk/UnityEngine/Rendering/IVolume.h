#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_IVOLUME_SET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IVOLUME_GET_COLLIDERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IVOLUME_GET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IVolume_TypeDefinitionIndex = 34081;

	class IVolume : public Il2CppObject
	{
	public:
		::System::Void set_isGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IVOLUME_SET_ISGLOBAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_colliders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IVOLUME_GET_COLLIDERS_OFFSET))(nullptr);
		}

		::System::Boolean get_isGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IVOLUME_GET_ISGLOBAL_OFFSET))(nullptr);
		}

	};
}

