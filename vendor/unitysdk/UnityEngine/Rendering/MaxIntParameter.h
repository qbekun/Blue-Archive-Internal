#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_MAXINTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3AC0)
#define UNITYENGINE_RENDERING_MAXINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3B10)
#define UNITYENGINE_RENDERING_MAXINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3B20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaxIntParameter_TypeDefinitionIndex = 34100;

	class MaxIntParameter : public Il2CppObject
	{
	public:
		::System::Int32 max; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

