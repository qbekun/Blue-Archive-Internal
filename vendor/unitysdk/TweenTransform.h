#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
class TweenTransform;
namespace UnityEngine { class GameObject; }

#define TWEENTRANSFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BE540)
#define TWEENTRANSFORM_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BEB10)
#define TWEENTRANSFORM_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BEB30)
#define TWEENTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BEC00)

	inline static constexpr unsigned int TweenTransform_TypeDefinitionIndex = 175;

	class TweenTransform : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* from; // 0x80
		::UnityEngine::Transform* to; // 0x88
		::System::Boolean parentWhenFinished; // 0x90
		::UnityEngine::Transform* mTrans; // 0x98
		::UnityEngine::Vector3* mPos; // 0xA0
		::UnityEngine::Quaternion* mRot; // 0xAC
		::UnityEngine::Vector3* mScale; // 0xBC

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENTRANSFORM_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		TweenTransform* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Transform* arg3)
		{
			return ((TweenTransform*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENTRANSFORM_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		TweenTransform* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Transform* arg4)
		{
			return ((TweenTransform*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENTRANSFORM_BEGIN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENTRANSFORM_.CTOR_OFFSET))(nullptr);
		}

	};

