#pragma once
#include "unitysdk.h"

class Axis;
class Bound;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }

#define CAPSULECOLLIDER_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x209EF70)
#define CAPSULECOLLIDER_INSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x209F350)
#define CAPSULECOLLIDER_INSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x209F650)
#define CAPSULECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x209F8A0)
#define CAPSULECOLLIDER_OUTSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x209F2A0)
#define CAPSULECOLLIDER_OUTSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x209F3F0)

	inline static constexpr unsigned int CapsuleCollider_TypeDefinitionIndex = 3525;

	class CapsuleCollider : public Il2CppObject
	{
	public:
		Axis* Direction; // 0x10
		Bound* BoundSide; // 0x14
		::UnityEngine::Vector3* Center; // 0x18
		::System::Single LossyScale; // 0x24
		::System::Single Radius; // 0x28
		::System::Single Height; // 0x2C
		::UnityEngine::Matrix4x4* WorldMatrix; // 0x30

		::UnityEngine::Vector3* Intersection(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_INTERSECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InsideSphere(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_INSIDESPHERE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InsideCapsule(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_INSIDECAPSULE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, Axis* arg5, Bound* arg6)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::System::Single, Axis*, Bound*, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void OutsideSphere(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_OUTSIDESPHERE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OutsideCapsule(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAPSULECOLLIDER_OUTSIDECAPSULE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

