#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Jobs { class TransformAccess&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA245AE0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA245B80)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA245C00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA245C90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA245D10)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA245DB0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA245E50)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA245B40)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA245BC0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA245C50)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET UNITYSDK_OFFSET(0xA245CD0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA245D70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA245E10)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA245ED0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccess_TypeDefinitionIndex = 31245;

	class TransformAccess : public Il2CppObject
	{
	public:
		::System::Int32 hierarchy; // 0x10
		::System::Int32 index; // 0x18

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_localPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_localScale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* get_localToWorldMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET))(nullptr);
		}

		::System::Void GetPosition(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetRotation(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRotation(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalPosition(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalScale(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalToWorldMatrix(::UnityEngine::Jobs::TransformAccess&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET))(arg, arg, nullptr);
		}

	};
}

