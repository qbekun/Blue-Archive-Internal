#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class Hand; }

#define UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA4AB920)
#define UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0xA4AB930)
#define UNITYENGINE_XR_HAND_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB940)
#define UNITYENGINE_XR_HAND_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB9C0)
#define UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4AB9E0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Hand_TypeDefinitionIndex = 37596;

	class Hand : public Il2CppObject
	{
	public:
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_featureIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::Hand* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::Hand*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

