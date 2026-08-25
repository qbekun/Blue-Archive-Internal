#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class BoneWeight; }

#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET UNITYSDK_OFFSET(0xA2105D0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET UNITYSDK_OFFSET(0xA2105E0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET UNITYSDK_OFFSET(0xA2105F0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET UNITYSDK_OFFSET(0xA210600)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET UNITYSDK_OFFSET(0xA210610)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET UNITYSDK_OFFSET(0xA210620)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET UNITYSDK_OFFSET(0xA210630)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET UNITYSDK_OFFSET(0xA210640)
#define UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA210650)
#define UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA210760)
#define UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2107F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoneWeight_TypeDefinitionIndex = 31065;

	class BoneWeight : public Il2CppObject
	{
	public:
		::System::Single m_Weight0; // 0x10
		::System::Single m_Weight1; // 0x14
		::System::Single m_Weight2; // 0x18
		::System::Single m_Weight3; // 0x1C
		::System::Int32 m_BoneIndex0; // 0x20
		::System::Int32 m_BoneIndex1; // 0x24
		::System::Int32 m_BoneIndex2; // 0x28
		::System::Int32 m_BoneIndex3; // 0x2C

		::System::Single get_weight0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET))(nullptr);
		}

		::System::Single get_weight1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET))(nullptr);
		}

		::System::Single get_weight2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET))(nullptr);
		}

		::System::Single get_weight3()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET))(nullptr);
		}

		::System::Int32 get_boneIndex0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET))(nullptr);
		}

		::System::Int32 get_boneIndex1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET))(nullptr);
		}

		::System::Int32 get_boneIndex2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET))(nullptr);
		}

		::System::Int32 get_boneIndex3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::BoneWeight* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::BoneWeight*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

