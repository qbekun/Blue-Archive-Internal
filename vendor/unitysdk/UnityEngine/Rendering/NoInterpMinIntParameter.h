#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3A50)
#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3AA0)
#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3AB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMinIntParameter_TypeDefinitionIndex = 34099;

	class NoInterpMinIntParameter : public ::System::Net::NetworkInformation::Win32UnicastIPAddressInformation
	{
	public:
		::System::Int32 min; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

