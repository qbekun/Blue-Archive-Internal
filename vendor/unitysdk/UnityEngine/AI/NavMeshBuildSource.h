#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::AI { class NavMeshBuildSourceShape; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1B3700)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1B3730)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1B3750)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1B3770)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xA1B3780)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0xA1B3790)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_AREA_OFFSET UNITYSDK_OFFSET(0xA1B37A0)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B37B0)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0xA1B3830)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA1B3870)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B37F0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildSource_TypeDefinitionIndex = 37507;

	class NavMeshBuildSource : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* m_Transform; // 0x10
		::UnityEngine::Vector3* m_Size; // 0x50
		::UnityEngine::AI::NavMeshBuildSourceShape* m_Shape; // 0x5C
		::System::Int32 m_Area; // 0x60
		::System::Int32 m_InstanceID; // 0x64
		::System::Int32 m_ComponentID; // 0x68

		::UnityEngine::Matrix4x4* get_transform()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshBuildSourceShape* get_shape()
		{
			return (return (::UnityEngine::AI::NavMeshBuildSourceShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SHAPE_OFFSET))(nullptr);
		}

		::System::Void set_shape(::UnityEngine::AI::NavMeshBuildSourceShape* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshBuildSourceShape*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SHAPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_AREA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_sourceObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SOURCEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::Component* get_component()
		{
			return (return (::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_COMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Component* InternalGetComponent(::System::Int32 arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* InternalGetObject(::System::Int32 arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

