#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class MeshId; }

#define UNITYENGINE_XR_MESHID_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4AC8B0)
#define UNITYENGINE_XR_MESHID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4AC930)
#define UNITYENGINE_XR_MESHID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AC960)
#define UNITYENGINE_XR_MESHID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ACA00)
#define UNITYENGINE_XR_MESHID_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4ACA20)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshId_TypeDefinitionIndex = 37609;

	class MeshId : public Il2CppObject
	{
	public:
		::UnityEngine::XR::MeshId* s_InvalidId; // 0x0
		::System::UInt64 m_SubId1; // 0x10
		::System::UInt64 m_SubId2; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::MeshId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::MeshId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

