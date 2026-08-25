#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Jobs { class TransformAccessArray; }
class DynamicBoneJob;
class UpdateTransformInfoJob;
class ApplyTransformJob;
namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine { class Quaternion; }
namespace Unity::Collections { class Allocator; }

#define DYNAMICCHARACTER_GET_DOTDIRAXIS_OFFSET UNITYSDK_OFFSET(0x20A0B60)
#define DYNAMICCHARACTER_SET_DOTDIRAXIS_OFFSET UNITYSDK_OFFSET(0x20A0B80)
#define DYNAMICCHARACTER_GET_OBJECTSCALE_OFFSET UNITYSDK_OFFSET(0x20A0B90)
#define DYNAMICCHARACTER_SET_OBJECTSCALE_OFFSET UNITYSDK_OFFSET(0x20A0BB0)
#define DYNAMICCHARACTER_GET_OBJECTMOVE_OFFSET UNITYSDK_OFFSET(0x20A0BC0)
#define DYNAMICCHARACTER_SET_OBJECTMOVE_OFFSET UNITYSDK_OFFSET(0x20A0BE0)
#define DYNAMICCHARACTER_GET_LOCALDIR_OFFSET UNITYSDK_OFFSET(0x20A0BF0)
#define DYNAMICCHARACTER_SET_LOCALDIR_OFFSET UNITYSDK_OFFSET(0x20A0C10)
#define DYNAMICCHARACTER_GET_DYNAMICBONES_OFFSET UNITYSDK_OFFSET(0x20A0C20)
#define DYNAMICCHARACTER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x20A0CD0)
#define DYNAMICCHARACTER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x20A0CE0)
#define DYNAMICCHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A0CF0)
#define DYNAMICCHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20A0E20)
#define DYNAMICCHARACTER_YIELDENABLE_OFFSET UNITYSDK_OFFSET(0x20A0F20)
#define DYNAMICCHARACTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20A0FB0)
#define DYNAMICCHARACTER_UPDATEOBJECT_OFFSET UNITYSDK_OFFSET(0x20A1140)
#define DYNAMICCHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20A1350)
#define DYNAMICCHARACTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20A1660)
#define DYNAMICCHARACTER_ROTATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x20A1A30)
#define DYNAMICCHARACTER_CHECKSCALE_OFFSET UNITYSDK_OFFSET(0x20A18F0)
#define DYNAMICCHARACTER_SKIPCALCULATION_OFFSET UNITYSDK_OFFSET(0x20A1AE0)
#define DYNAMICCHARACTER_COSKIPCALCULATION_OFFSET UNITYSDK_OFFSET(0x20A1BE0)
#define DYNAMICCHARACTER_APPLYINERT_OFFSET UNITYSDK_OFFSET(0x20A1C80)
#define DYNAMICCHARACTER_COAPPLYINERT_OFFSET UNITYSDK_OFFSET(0x20A1D60)
#define DYNAMICCHARACTER_INITJOB_OFFSET UNITYSDK_OFFSET(0x20A1E10)
#define DYNAMICCHARACTER_GETPARTICLESTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20A2CF0)
#define DYNAMICCHARACTER_ALLOCATENATIVEARRAYS_OFFSET UNITYSDK_OFFSET(0x20A2270)
#define DYNAMICCHARACTER_INITNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DYNAMICCHARACTER_INITNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DYNAMICCHARACTER_SETNATIVEARRAYDATA_OFFSET UNITYSDK_OFFSET(0x20A27E0)
#define DYNAMICCHARACTER_ALLOCATEJOBS_OFFSET UNITYSDK_OFFSET(0x20A2A90)
#define DYNAMICCHARACTER_RESETJOBPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20A1480)
#define DYNAMICCHARACTER_INITBONELIST_OFFSET UNITYSDK_OFFSET(0x20A0D00)
#define DYNAMICCHARACTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20A2DF0)
#define DYNAMICCHARACTER_COMPLETEALLHANDLES_OFFSET UNITYSDK_OFFSET(0x20A10C0)
#define DYNAMICCHARACTER_DISPOSEALLJOBS_OFFSET UNITYSDK_OFFSET(0x20A1FE0)
#define DYNAMICCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A2E70)

	inline static constexpr unsigned int DynamicCharacter_TypeDefinitionIndex = 3538;

	class DynamicCharacter : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* UnitTransform; // 0x18
		::UnityEngine::Transform* BodyTransform; // 0x20
		::UnityEngine::Vector3* _DotDirAxis_k__BackingField; // 0x28
		::UnityEngine::Vector3* _ObjectScale_k__BackingField; // 0x34
		::UnityEngine::Vector3* _ObjectMove_k__BackingField; // 0x40
		::UnityEngine::Vector3* _LocalDir_k__BackingField; // 0x4C
		::UnityEngine::Vector3* objectPrevPosition; // 0x58
		Il2CppObject* _dynamicBones; // 0x68
		::System::Boolean _Initialized_k__BackingField; // 0x70
		::System::Int32 InactiveDistance; // 0x74
		::System::Boolean scaleChanged; // 0x78
		::System::Boolean shouldIgnoreInert; // 0x79
		::System::Boolean shouldSkipCalculation; // 0x7A
		::UnityEngine::Coroutine* skipCalculationCoroutine; // 0x80
		::UnityEngine::Coroutine* ignoreInertCoroutine; // 0x88
		Il2CppObject* jobGravArr; // 0x90
		Il2CppObject* jobLocalGravArr; // 0xA0
		Il2CppObject* jobStartIndices; // 0xB0
		Il2CppObject* jobNumParticleArr; // 0xC0
		Il2CppObject* jobLimitAxisYArr; // 0xD0
		Il2CppObject* jobLocalToWorldArr; // 0xE0
		Il2CppObject* jobTransformLocalPosArr; // 0xF0
		Il2CppObject* jobParticleInfoArr; // 0x100
		Il2CppObject* jobPositionArr; // 0x110
		Il2CppObject* jobPrevPositionArr; // 0x120
		::UnityEngine::Jobs::TransformAccessArray* transformAccessArray; // 0x130
		DynamicBoneJob* dynamicBoneJob; // 0x138
		UpdateTransformInfoJob* updateTransformInfoJob; // 0x1F8
		ApplyTransformJob* applyTransformJob; // 0x228
		::Unity::Jobs::JobHandle* updateHandle; // 0x258
		::Unity::Jobs::JobHandle* calcHandle; // 0x268
		::Unity::Jobs::JobHandle* applyHandle; // 0x278

		::UnityEngine::Vector3* get_DotDirAxis()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_DOTDIRAXIS_OFFSET))(nullptr);
		}

		::System::Void set_DotDirAxis(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SET_DOTDIRAXIS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_ObjectScale()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_OBJECTSCALE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectScale(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SET_OBJECTSCALE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_ObjectMove()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_OBJECTMOVE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectMove(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SET_OBJECTMOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_LocalDir()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_LOCALDIR_OFFSET))(nullptr);
		}

		::System::Void set_LocalDir(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SET_LOCALDIR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_dynamicBones()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_DYNAMICBONES_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldEnable()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_YIELDENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_UPDATEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RotateGravity(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ROTATEGRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_CHECKSCALE_OFFSET))(nullptr);
		}

		::System::Void SkipCalculation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SKIPCALCULATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoSkipCalculation(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_COSKIPCALCULATION_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInert(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_APPLYINERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoApplyInert(::System::Single arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_COAPPLYINERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitJob()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_INITJOB_OFFSET))(nullptr);
		}

		::System::Void GetParticlesTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_GETPARTICLESTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void AllocateNativeArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ALLOCATENATIVEARRAYS_OFFSET))(nullptr);
		}

		::System::Void InitNativeArray(Il2CppObject&* arg, ::System::Int32 arg2, ::Unity::Collections::Allocator* arg3)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_INITNATIVEARRAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitNativeArray(Il2CppObject&* arg, ::Il2CppArray<::System::Object*>* arg2, ::Unity::Collections::Allocator* arg3)
		{
			((::System::Void(*)(Il2CppObject&*, ::Il2CppArray<::System::Object*>*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_INITNATIVEARRAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetNativeArrayData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_SETNATIVEARRAYDATA_OFFSET))(nullptr);
		}

		::System::Void AllocateJobs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ALLOCATEJOBS_OFFSET))(nullptr);
		}

		::System::Void ResetJobProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_RESETJOBPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void InitBoneList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_INITBONELIST_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void CompleteAllHandles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_COMPLETEALLHANDLES_OFFSET))(nullptr);
		}

		::System::Void DisposeAllJobs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_DISPOSEALLJOBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};

