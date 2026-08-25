#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CoreCameraValues; }

#define UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA257E40)
#define UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA257E60)
#define UNITYENGINE_RENDERING_CORECAMERAVALUES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA257EE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreCameraValues_TypeDefinitionIndex = 31539;

	class CoreCameraValues : public Il2CppObject
	{
	public:
		::System::Int32 filterMode; // 0x10
		::System::UInt32 cullingMask; // 0x14
		::System::Int32 instanceID; // 0x18

		::System::Boolean Equals(::UnityEngine::Rendering::CoreCameraValues* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CoreCameraValues*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

