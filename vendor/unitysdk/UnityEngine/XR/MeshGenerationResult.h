#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class MeshId; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine::XR { class MeshGenerationStatus; }
namespace UnityEngine::XR { class MeshVertexAttributes; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::XR { class MeshGenerationResult; }

#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHID_OFFSET UNITYSDK_OFFSET(0xA4ACBA0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA4ACBB0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA4ACBC0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA4ACBD0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA4ACBE0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA4ACBF0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA4ACC10)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA4ACC20)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ACC40)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4ACCF0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4ACF00)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshGenerationResult_TypeDefinitionIndex = 37612;

	class MeshGenerationResult : public Il2CppObject
	{
	public:
		::UnityEngine::XR::MeshId* _MeshId_k__BackingField; // 0x10
		::UnityEngine::Mesh* _Mesh_k__BackingField; // 0x20
		::UnityEngine::MeshCollider* _MeshCollider_k__BackingField; // 0x28
		::UnityEngine::XR::MeshGenerationStatus* _Status_k__BackingField; // 0x30
		::UnityEngine::XR::MeshVertexAttributes* _Attributes_k__BackingField; // 0x34
		::System::UInt64 _Timestamp_k__BackingField; // 0x38
		::UnityEngine::Vector3* _Position_k__BackingField; // 0x40
		::UnityEngine::Quaternion* _Rotation_k__BackingField; // 0x4C
		::UnityEngine::Vector3* _Scale_k__BackingField; // 0x5C

		::UnityEngine::XR::MeshId* get_MeshId()
		{
			return (return (::UnityEngine::XR::MeshId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHID_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESH_OFFSET))(nullptr);
		}

		::UnityEngine::MeshCollider* get_MeshCollider()
		{
			return (return (::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHCOLLIDER_OFFSET))(nullptr);
		}

		::UnityEngine::XR::MeshGenerationStatus* get_Status()
		{
			return (return (::UnityEngine::XR::MeshGenerationStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_STATUS_OFFSET))(nullptr);
		}

		::UnityEngine::XR::MeshVertexAttributes* get_Attributes()
		{
			return (return (::UnityEngine::XR::MeshVertexAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_Rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Scale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::MeshGenerationResult* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::MeshGenerationResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

