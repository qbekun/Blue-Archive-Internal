#pragma once
#include "unitysdk.h"

class DynamicCharacter;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimatorUpdateMode; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3; }
class Axis;
namespace UnityEngine { class Quaternion; }

#define DYNAMICBONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x209A410)
#define DYNAMICBONE_COPYGRAVITY_OFFSET UNITYSDK_OFFSET(0x209A5F0)
#define DYNAMICBONE_GETPARTICLETRANSFORM_OFFSET UNITYSDK_OFFSET(0x209A630)
#define DYNAMICBONE_INITTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x209A7D0)
#define DYNAMICBONE_SETUPPARTICLES_OFFSET UNITYSDK_OFFSET(0x209A900)
#define DYNAMICBONE_ROTATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x209B850)
#define DYNAMICBONE_CALCCUSTOMINERT_OFFSET UNITYSDK_OFFSET(0x209B990)
#define DYNAMICBONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x209BAD0)
#define DYNAMICBONE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x209BAE0)
#define DYNAMICBONE_RESETPARTICLESPOSITION_OFFSET UNITYSDK_OFFSET(0x209BCC0)
#define DYNAMICBONE_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x209BE40)
#define DYNAMICBONE_UPDATEPARTICLES1_OFFSET UNITYSDK_OFFSET(0x209BE50)
#define DYNAMICBONE_POSTUPDATEANIMATOR_OFFSET UNITYSDK_OFFSET(0x209C310)
#define DYNAMICBONE_SKIPUPDATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x209C660)
#define DYNAMICBONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x209CE40)
#define DYNAMICBONE_COPYBONE_OFFSET UNITYSDK_OFFSET(0x209CEA0)
#define DYNAMICBONE_UPDATEDYNAMICBONES_OFFSET UNITYSDK_OFFSET(0x209C510)
#define DYNAMICBONE_START_OFFSET UNITYSDK_OFFSET(0x209DDC0)
#define DYNAMICBONE_MIRRORVECTOR_OFFSET UNITYSDK_OFFSET(0x209DDD0)
#define DYNAMICBONE_REFRESHCURVES_OFFSET UNITYSDK_OFFSET(0x209DE40)
#define DYNAMICBONE_GET_NUMPARTICLELIST_OFFSET UNITYSDK_OFFSET(0x209A790)
#define DYNAMICBONE_APPENDPARTICLES_OFFSET UNITYSDK_OFFSET(0x209AC10)
#define DYNAMICBONE_GETEXTRAPARTICLETRANSFORM_OFFSET UNITYSDK_OFFSET(0x209DFC0)
#define DYNAMICBONE_SAVE_OFFSET UNITYSDK_OFFSET(0x209E2B0)
#define DYNAMICBONE_PREUPDATEANIMATOR_OFFSET UNITYSDK_OFFSET(0x209E360)
#define DYNAMICBONE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x209E390)
#define DYNAMICBONE_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x209B440)
#define DYNAMICBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x209E3F0)
#define DYNAMICBONE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x209E410)
#define DYNAMICBONE_UPDATEPARTICLES2_OFFSET UNITYSDK_OFFSET(0x209D040)
#define DYNAMICBONE_APPLYPARTICLESTOTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x209DA50)
#define DYNAMICBONE_APPLY_OFFSET UNITYSDK_OFFSET(0x209E680)
#define DYNAMICBONE_UPDATE_OFFSET UNITYSDK_OFFSET(0x209EA10)
#define DYNAMICBONE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x209EA50)
#define DYNAMICBONE_INITCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x209AA40)
#define DYNAMICBONE_CONVENTIONALCALCCUSTOMINERT_OFFSET UNITYSDK_OFFSET(0x209EA90)
#define DYNAMICBONE_CHECKDISTANCE_OFFSET UNITYSDK_OFFSET(0x209C370)

	inline static constexpr unsigned int DynamicBone_TypeDefinitionIndex = 3526;

	class DynamicBone : public Il2CppObject
	{
	public:
		DynamicCharacter* Character; // 0x18
		::UnityEngine::Transform* unitTransform; // 0x20
		::UnityEngine::Transform* bodyTransform; // 0x28
		::UnityEngine::Transform* Root; // 0x30
		::System::Single UpdateRate; // 0x38
		::UnityEngine::AnimatorUpdateMode* updateMode; // 0x3C
		::System::Single Damping; // 0x40
		::UnityEngine::AnimationCurve* DampingDistrib; // 0x48
		::System::Single Elasticity; // 0x50
		::UnityEngine::AnimationCurve* ElasticityDistrib; // 0x58
		::System::Single Stiffness; // 0x60
		::UnityEngine::AnimationCurve* StiffnessDistrib; // 0x68
		::System::Single Inert; // 0x70
		::UnityEngine::AnimationCurve* InertDistrib; // 0x78
		::System::Boolean IsInertRatioEnable; // 0x80
		::System::Single PositiveInertX; // 0x84
		::System::Single NegativeInertX; // 0x88
		::System::Single PositiveInertY; // 0x8C
		::System::Single NegativeInertY; // 0x90
		::System::Single PositiveInertZ; // 0x94
		::System::Single NegativeInertZ; // 0x98
		::System::Single Radius; // 0x9C
		::UnityEngine::AnimationCurve* RadiusDistrib; // 0xA0
		::System::Single EndLength; // 0xA8
		::UnityEngine::Vector3* EndOffset; // 0xAC
		::UnityEngine::Vector3* Gravity; // 0xB8
		::UnityEngine::Vector3* Force; // 0xC4
		Il2CppObject* Colliders; // 0xD0
		Il2CppObject* Exclusions; // 0xD8
		Axis* FreezeAxis; // 0xE0
		::System::Boolean DistantDisable; // 0xE4
		::UnityEngine::Transform* ReferenceObject; // 0xE8
		::System::Single DistanceToObject; // 0xF0
		::System::Boolean LimitAxisY; // 0xF4
		::UnityEngine::Vector3* localGravity; // 0xF8
		::System::Single boneTotalLength; // 0x104
		::System::Single time; // 0x108
		::System::Single weight; // 0x10C
		::System::Boolean distantDisabled; // 0x110
		::UnityEngine::Quaternion* gravityRotation; // 0x114
		Il2CppObject* particleList; // 0x128

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CopyGravity(Il2CppObject&* arg, Il2CppObject&* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_COPYGRAVITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void GetParticleTransform(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_GETPARTICLETRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitTransforms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_INITTRANSFORMS_OFFSET))(nullptr);
		}

		::System::Void SetupParticles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SETUPPARTICLES_OFFSET))(nullptr);
		}

		::System::Void RotateGravity(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ROTATEGRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Void CalcCustomInert(::UnityEngine::Vector3&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_CALCCUSTOMINERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void ResetParticlesPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_RESETPARTICLESPOSITION_OFFSET))(nullptr);
		}

		::System::Single GetWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_GETWEIGHT_OFFSET))(nullptr);
		}

		::System::Void UpdateParticles1(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARTICLES1_OFFSET))(arg, nullptr);
		}

		::System::Void PostUpdateAnimator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_POSTUPDATEANIMATOR_OFFSET))(nullptr);
		}

		::System::Void SkipUpdateParticles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SKIPUPDATEPARTICLES_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void CopyBone(Il2CppObject&* arg, Il2CppObject&* arg2, Il2CppObject&* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_COPYBONE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void UpdateDynamicBones(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEDYNAMICBONES_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_START_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* MirrorVector(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_MIRRORVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_REFRESHCURVES_OFFSET))(nullptr);
		}

		::System::Int32 get_NumParticleList()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_GET_NUMPARTICLELIST_OFFSET))(nullptr);
		}

		::System::Void AppendParticles(::UnityEngine::Transform* arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_APPENDPARTICLES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void GetExtraParticleTransform(Il2CppObject&* arg, Il2CppObject&* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_GETEXTRAPARTICLETRANSFORM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Save(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SAVE_OFFSET))(str, nullptr);
		}

		::System::Void PreUpdateAnimator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_PREUPDATEANIMATOR_OFFSET))(nullptr);
		}

		::System::Void SetWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_SETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateParameters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::System::Void UpdateParticles2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATEPARTICLES2_OFFSET))(nullptr);
		}

		::System::Void ApplyParticlesToTransforms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_APPLYPARTICLESTOTRANSFORMS_OFFSET))(nullptr);
		}

		::System::Void Apply(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void InitCustomProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_INITCUSTOMPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void ConventionalCalcCustomInert(::UnityEngine::Vector3&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_CONVENTIONALCALCCUSTOMINERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckDistance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_CHECKDISTANCE_OFFSET))(nullptr);
		}

	};

