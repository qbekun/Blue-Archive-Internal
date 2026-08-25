#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F26C30)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x9F26C50)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F26C60)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F26C70)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x9F26C80)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F26C90)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 28586;

	class Bone : public Il2CppObject
	{
	public:
		::System::UInt32 m_ParentBoneIndex; // 0x10
		::UnityEngine::Vector3* m_Position; // 0x14
		::UnityEngine::Quaternion* m_Rotation; // 0x20

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_POSITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_parentBoneIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_PARENTBONEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_parentBoneIndex(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_PARENTBONEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_ROTATION_OFFSET))(arg, nullptr);
		}

	};
}

