#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_NORMALIZESAFE_OFFSET UNITYSDK_OFFSET(0x9E22040)
#define UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2D810)
#define UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_SCALE_OFFSET UNITYSDK_OFFSET(0x9E21FC0)
#define UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x9E21B40)
#define UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_ADD_OFFSET UNITYSDK_OFFSET(0x9E21FE0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int QuaternionExt_TypeDefinitionIndex = 37202;

	class QuaternionExt : public Il2CppObject
	{
	public:
		::UnityEngine::Quaternion* zero; // 0x0

		::UnityEngine::Quaternion* NormalizeSafe(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_NORMALIZESAFE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* Scale(::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_SCALE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* FromToRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_FROMTOROTATION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Add(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_QUATERNIONEXT_ADD_OFFSET))(arg, arg, nullptr);
		}

	};
}

