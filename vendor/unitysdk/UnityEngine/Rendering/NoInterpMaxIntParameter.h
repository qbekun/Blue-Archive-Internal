#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3B30)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3B80)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3B90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxIntParameter_TypeDefinitionIndex = 34101;

	class NoInterpMaxIntParameter : public ::System::Net::NetworkInformation::Win32UnicastIPAddressInformation
	{
	public:
		::System::Int32 max; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

