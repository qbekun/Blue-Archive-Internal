#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPINTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3990)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpIntParameter_TypeDefinitionIndex = 34097;

	class NoInterpIntParameter : public ::System::Net::NetworkInformation::Win32UnicastIPAddressInformation
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPINTPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

