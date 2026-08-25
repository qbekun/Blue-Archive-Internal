#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Unity::Mathematics { class float3; }
namespace UnityEngine { class Vector3; }
namespace Unity::Collections { class Allocator; }

#define BLUEARCHIVE_MXPLUGINS_CHAINIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA28340)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEALLARRAYS_OFFSET UNITYSDK_OFFSET(0xA29980)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_SETBONESTOSTARTPOS_OFFSET UNITYSDK_OFFSET(0xA29A90)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xA29F20)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA29F60)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_UPDATEANCHORDELTAVALUES_OFFSET UNITYSDK_OFFSET(0xA283D0)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_APPLYSOLVEDTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA2A1C0)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_SETTAILBONEROTATION_OFFSET UNITYSDK_OFFSET(0xA29E50)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_SETSTRAIGHT_OFFSET UNITYSDK_OFFSET(0xA286E0)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_INITIALIZEARRAYS_OFFSET UNITYSDK_OFFSET(0xA29F80)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A4E0)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEPREVVALUEARRAYS_OFFSET UNITYSDK_OFFSET(0xA29A20)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_UPDATEITERATIONS_OFFSET UNITYSDK_OFFSET(0xA290A0)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_ALLOCATEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2A510)
#define BLUEARCHIVE_MXPLUGINS_CHAINIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2A520)

namespace BlueArchive::MXPlugins
{
	inline static constexpr unsigned int ChainIK_TypeDefinitionIndex = 37971;

	class ChainIK : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* rootTransform; // 0x18
		::UnityEngine::Transform* headBone; // 0x20
		::UnityEngine::Transform* tailBone; // 0x28
		::UnityEngine::Transform* rootAnchor; // 0x30
		::UnityEngine::Transform* tailAnchor; // 0x38
		::System::Boolean tailFollowsAnchorRotation; // 0x40
		::System::Boolean isExtendable; // 0x41
		::System::Int32 solveIterations; // 0x44
		::System::Single pullTensionFactor; // 0x48
		::System::Boolean constrainMinHeight; // 0x4C
		::System::Single minHeight; // 0x50
		::Il2CppArray<::System::Object*>* points; // 0x58
		::Il2CppArray<::System::Object*>* boneLengths; // 0x60
		::System::Single chainLength; // 0x68
		::Il2CppArray<::System::Object*>* localPositions; // 0x70
		::Il2CppArray<::System::Object*>* localRotationOffsets; // 0x78
		::System::Single Gravity; // 0x0
		::Unity::Mathematics::float3* gravityVector; // 0x80
		::System::Int32 pointCount; // 0x8C
		::System::Int32 lastIndex; // 0x90
		::System::Single prevDT; // 0x94
		Il2CppObject* boneLengthsNativeArray; // 0x98
		Il2CppObject* prevPositions; // 0xA8
		Il2CppObject* prevVelocities; // 0xB8
		Il2CppObject* prevAccelerations; // 0xC8
		::UnityEngine::Vector3* anchorDeltaPos; // 0xD8
		::UnityEngine::Vector3* anchorDeltaHalfPos; // 0xE4
		::UnityEngine::Vector3* anchorDeltaDir; // 0xF0
		::System::Single anchorDeltaDist; // 0xFC

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void DisposeArray(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void DisposeAllArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEALLARRAYS_OFFSET))(nullptr);
		}

		::System::Void SetBonesToStartPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_SETBONESTOSTARTPOS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateAnchorDeltaValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_UPDATEANCHORDELTAVALUES_OFFSET))(nullptr);
		}

		::System::Void ApplySolvedTransforms(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_APPLYSOLVEDTRANSFORMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTailBoneRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_SETTAILBONEROTATION_OFFSET))(nullptr);
		}

		::System::Void SetStraight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_SETSTRAIGHT_OFFSET))(nullptr);
		}

		::System::Void InitializeArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_INITIALIZEARRAYS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DisposePrevValueArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_DISPOSEPREVVALUEARRAYS_OFFSET))(nullptr);
		}

		::System::Void UpdateIterations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_UPDATEITERATIONS_OFFSET))(nullptr);
		}

		::System::Void AllocateArray(Il2CppObject&* arg, ::System::Int32 arg, ::Unity::Collections::Allocator* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_ALLOCATEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLUEARCHIVE_MXPLUGINS_CHAINIK_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

