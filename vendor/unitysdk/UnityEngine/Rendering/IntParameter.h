#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE3910)
#define UNITYENGINE_RENDERING_INTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 34096;

	class IntParameter : public ::System::Net::NetworkInformation::Win32UnicastIPAddressInformation
	{
	public:
		::System::Void Interp(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

