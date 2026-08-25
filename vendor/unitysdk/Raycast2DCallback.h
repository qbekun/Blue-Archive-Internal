#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RaycastHit2D; }

#define RAYCAST2DCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487790)
#define RAYCAST2DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA487860)
#define RAYCAST2DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA487940)
#define RAYCAST2DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA487990)

	inline static constexpr unsigned int Raycast2DCallback_TypeDefinitionIndex = 34862;

	class Raycast2DCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST2DCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST2DCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST2DCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Invoke(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCAST2DCALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

