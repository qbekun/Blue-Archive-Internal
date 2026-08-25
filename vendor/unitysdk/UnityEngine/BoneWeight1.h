#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class BoneWeight1; }

#define UNITYENGINE_BONEWEIGHT1_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA2108B0)
#define UNITYENGINE_BONEWEIGHT1_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0xA2108C0)
#define UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2108D0)
#define UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET UNITYSDK_OFFSET(0xA210980)
#define UNITYENGINE_BONEWEIGHT1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2109E0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoneWeight1_TypeDefinitionIndex = 31066;

	class BoneWeight1 : public Il2CppObject
	{
	public:
		::System::Single m_Weight; // 0x10
		::System::Int32 m_BoneIndex; // 0x14

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_boneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GET_BONEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::BoneWeight1* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::BoneWeight1*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

