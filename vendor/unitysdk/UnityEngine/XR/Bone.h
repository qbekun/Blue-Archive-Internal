#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class Bone; }

#define UNITYENGINE_XR_BONE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA4ABB20)
#define UNITYENGINE_XR_BONE_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0xA4ABB30)
#define UNITYENGINE_XR_BONE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ABB40)
#define UNITYENGINE_XR_BONE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ABBC0)
#define UNITYENGINE_XR_BONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4ABBE0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 37598;

	class Bone : public Il2CppObject
	{
	public:
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_BONE_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_featureIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_BONE_GET_FEATUREINDEX_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_BONE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::Bone* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_BONE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_BONE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

