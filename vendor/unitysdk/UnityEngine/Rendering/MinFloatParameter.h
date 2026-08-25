#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3DC0)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3E30)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3E40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MinFloatParameter_TypeDefinitionIndex = 34106;

	class MinFloatParameter : public Il2CppObject
	{
	public:
		::System::Single min; // 0x20

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

