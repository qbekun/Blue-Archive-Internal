#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class CullingQueryOptions; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class CullingGroup; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_CULLINGGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EA3A0)
#define UNITYENGINE_CULLINGGROUP_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1EA440)
#define UNITYENGINE_CULLINGGROUP_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1EA5B0)
#define UNITYENGINE_CULLINGGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1EA5F0)
#define UNITYENGINE_CULLINGGROUP_SET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xA1EA660)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERES_OFFSET UNITYSDK_OFFSET(0xA1EA6A0)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERECOUNT_OFFSET UNITYSDK_OFFSET(0xA1EA6E0)
#define UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET UNITYSDK_OFFSET(0xA1EA720)
#define UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET UNITYSDK_OFFSET(0xA1EA780)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGDISTANCES_OFFSET UNITYSDK_OFFSET(0xA1EA7D0)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_OFFSET UNITYSDK_OFFSET(0xA1EA810)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0xA1EA890)
#define UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET UNITYSDK_OFFSET(0xA1EA8E0)
#define UNITYENGINE_CULLINGGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xA1EA400)
#define UNITYENGINE_CULLINGGROUP_FINALIZERFAILURE_OFFSET UNITYSDK_OFFSET(0xA1EA570)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EA850)

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroup_TypeDefinitionIndex = 30968;

	class CullingGroup : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		StateChanged* m_OnStateChanged; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void DisposeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_DISPOSEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_targetCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SET_TARGETCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void SetBoundingSpheres(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERES_OFFSET))(arg, nullptr);
		}

		::System::Void SetBoundingSphereCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 QueryIndices(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 QueryIndices(::System::Boolean arg, ::System::Int32 arg, ::UnityEngine::CullingQueryOptions* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Int32, ::UnityEngine::CullingQueryOptions*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetBoundingDistances(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGDISTANCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetDistanceReferencePoint_InternalVector3(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_OFFSET))(arg, nullptr);
		}

		::System::Void SetDistanceReferencePoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvents(::UnityEngine::CullingGroup* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::CullingGroup*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Init(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void FinalizerFailure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_FINALIZERFAILURE_OFFSET))(nullptr);
		}

		::System::Void SetDistanceReferencePoint_InternalVector3_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

