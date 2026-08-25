#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_MININTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE39E0)
#define UNITYENGINE_RENDERING_MININTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE39F0)
#define UNITYENGINE_RENDERING_MININTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3A40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MinIntParameter_TypeDefinitionIndex = 34098;

	class MinIntParameter : public Il2CppObject
	{
	public:
		::System::Int32 min; // 0x20

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MININTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MININTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MININTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

