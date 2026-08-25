#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3C40)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3C70)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3CD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpClampedIntParameter_TypeDefinitionIndex = 34103;

	class NoInterpClampedIntParameter : public ::System::Net::NetworkInformation::Win32UnicastIPAddressInformation
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

