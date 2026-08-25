#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_BOOLPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3870)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BoolParameter_TypeDefinitionIndex = 34094;

	class BoolParameter : public ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING
	{
	public:
		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BOOLPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

