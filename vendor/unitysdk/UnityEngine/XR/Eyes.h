#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class Eyes; }

#define UNITYENGINE_XR_EYES_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA4ABA20)
#define UNITYENGINE_XR_EYES_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0xA4ABA30)
#define UNITYENGINE_XR_EYES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ABA40)
#define UNITYENGINE_XR_EYES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ABAC0)
#define UNITYENGINE_XR_EYES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4ABAE0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Eyes_TypeDefinitionIndex = 37597;

	class Eyes : public Il2CppObject
	{
	public:
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_featureIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GET_FEATUREINDEX_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::Eyes* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::Eyes*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

