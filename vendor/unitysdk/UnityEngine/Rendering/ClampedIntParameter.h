#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3BA0)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3BB0)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3C10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedIntParameter_TypeDefinitionIndex = 34102;

	class ClampedIntParameter : public Il2CppObject
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

