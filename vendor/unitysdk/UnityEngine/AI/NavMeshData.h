#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_AI_NAVMESHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B2840)
#define UNITYENGINE_AI_NAVMESHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B0110)
#define UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1B28B0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA1B28F0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA1B29A0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA1B0190)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA1B2A80)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA1B01D0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B2960)
#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B2A00)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B2A40)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B2AD0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B2B10)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshData_TypeDefinitionIndex = 37499;

	class NavMeshData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::AI::NavMeshData* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Bounds* get_sourceBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void get_sourceBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

