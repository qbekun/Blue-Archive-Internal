#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace FlatData { class AimIKType; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXAIMIK_SET_MAINBONES_OFFSET UNITYSDK_OFFSET(0x20A4BA0)
#define MXAIMIK_SETIKTYPE_OFFSET UNITYSDK_OFFSET(0x20A4BC0)
#define MXAIMIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20A4C70)
#define MXAIMIK_GET_CHAINLENGTH_OFFSET UNITYSDK_OFFSET(0x20A6C40)
#define MXAIMIK_RESOLVEMAINHANDIK_OFFSET UNITYSDK_OFFSET(0x20A6C50)
#define MXAIMIK_RESOLVESUBHANDIK_OFFSET UNITYSDK_OFFSET(0x20A6140)
#define MXAIMIK_CALCULATEROTATION_OFFSET UNITYSDK_OFFSET(0x20A55C0)
#define MXAIMIK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A7460)
#define MXAIMIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A7490)
#define MXAIMIK_GET_IKTYPE_OFFSET UNITYSDK_OFFSET(0x20A76E0)
#define MXAIMIK_SET_SUBBONES_OFFSET UNITYSDK_OFFSET(0x20A76F0)
#define MXAIMIK_INITBONEINFO_OFFSET UNITYSDK_OFFSET(0x20A5120)
#define MXAIMIK_GET_MAINBONES_OFFSET UNITYSDK_OFFSET(0x20A7710)
#define MXAIMIK_GET_SUBBONES_OFFSET UNITYSDK_OFFSET(0x20A7720)
#define MXAIMIK_SET_CHAINLENGTH_OFFSET UNITYSDK_OFFSET(0x20A7730)
#define MXAIMIK_SET_IKTYPE_OFFSET UNITYSDK_OFFSET(0x20A7740)
#define MXAIMIK_ROTATEARMANDWEAPON_OFFSET UNITYSDK_OFFSET(0x20A5B10)
#define MXAIMIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20A7750)

	inline static constexpr unsigned int MxAimIK_TypeDefinitionIndex = 3540;

	class MxAimIK : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* rightArms; // 0x40
		::Il2CppArray<::System::Object*>* leftArms; // 0x48
		::UnityEngine::Transform* target; // 0x50
		::UnityEngine::Transform* mainWeapon; // 0x58
		::UnityEngine::Transform* subWeapon; // 0x60
		::System::Int32 iterations; // 0x68
		::System::Single margin; // 0x6C
		::FlatData::AimIKType* aimIKType; // 0x70
		::System::Single customMinRotationDegree; // 0x74
		::System::Single customMaxRotationDegree; // 0x78
		::Il2CppArray<::System::Object*>* mainBonesLength; // 0x80
		::System::Single mainBonecompleteLength; // 0x88
		::Il2CppArray<::System::Object*>* mainBonesPositions; // 0x90
		::Il2CppArray<::System::Object*>* subBonesLength; // 0x98
		::System::Single subBoneCompleteLength; // 0xA0
		::Il2CppArray<::System::Object*>* subBonesPositions; // 0xA8
		::UnityEngine::Vector3* subHandPositionLocal; // 0xB0
		::UnityEngine::Quaternion* rootRotation; // 0xBC
		::System::Int32 _ChainLength_k__BackingField; // 0xCC
		::Il2CppArray<::System::Object*>* _mainBones_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* _subBones_k__BackingField; // 0xD8
		::UnityEngine::Transform* mainHandIKTarget; // 0xE0
		::UnityEngine::Transform* subHandIKTarget; // 0xE8

		::System::Void set_mainBones(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_SET_MAINBONES_OFFSET))(arg, nullptr);
		}

		::System::Void SetIKType(::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_SETIKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Int32 get_ChainLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_GET_CHAINLENGTH_OFFSET))(nullptr);
		}

		::System::Void ResolveMainHandIK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_RESOLVEMAINHANDIK_OFFSET))(nullptr);
		}

		::System::Void ResolveSubHandIK(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_RESOLVESUBHANDIK_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateRotation(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_CALCULATEROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::AimIKType* get_IKType()
		{
			return ((::FlatData::AimIKType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_GET_IKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_subBones(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_SET_SUBBONES_OFFSET))(arg, nullptr);
		}

		::System::Void InitBoneInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_INITBONEINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_mainBones()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_GET_MAINBONES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_subBones()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_GET_SUBBONES_OFFSET))(nullptr);
		}

		::System::Void set_ChainLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_SET_CHAINLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_IKType(::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_SET_IKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RotateArmAndWeapon(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Transform* arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_ROTATEARMANDWEAPON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize(::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MXAIMIK_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

