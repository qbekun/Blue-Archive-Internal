#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Ray; }
namespace UnityEngine { class RaycastHit&; }

#define RAYCAST3DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA487150)
#define RAYCAST3DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA487240)
#define RAYCAST3DCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487280)
#define RAYCAST3DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA487350)

	inline static constexpr unsigned int Raycast3DCallback_TypeDefinitionIndex = 34859;

	class Raycast3DCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST3DCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RaycastHit&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST3DCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST3DCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST3DCALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

