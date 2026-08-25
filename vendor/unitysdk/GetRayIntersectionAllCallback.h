#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Ray; }

#define GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4879D0)
#define GETRAYINTERSECTIONALLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487A10)
#define GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA487AE0)
#define GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA487AF0)

	inline static constexpr unsigned int GetRayIntersectionAllCallback_TypeDefinitionIndex = 34863;

	class GetRayIntersectionAllCallback : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Invoke(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

