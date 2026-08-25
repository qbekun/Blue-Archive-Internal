#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define DYNAMICBONECOLLIDER_INSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x209F930)
#define DYNAMICBONECOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x209F9D0)
#define DYNAMICBONECOLLIDER_COLLIDE_OFFSET UNITYSDK_OFFSET(0x209FCA0)
#define DYNAMICBONECOLLIDER_INSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x20A03F0)
#define DYNAMICBONECOLLIDER_OUTSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x20A01A0)
#define DYNAMICBONECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A0630)
#define DYNAMICBONECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x20A06F0)
#define DYNAMICBONECOLLIDER_OUTSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x20A0100)

	inline static constexpr unsigned int DynamicBoneCollider_TypeDefinitionIndex = 3527;

	class DynamicBoneCollider : public Il2CppObject
	{
	public:
		::System::Single Radius; // 0x38
		::System::Single Height; // 0x3C

		::System::Void InsideSphere(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_INSIDESPHERE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::System::Void Collide(::UnityEngine::Vector3&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_COLLIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InsideCapsule(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_INSIDECAPSULE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OutsideCapsule(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_OUTSIDECAPSULE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OutsideSphere(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_OUTSIDESPHERE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

