#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Ray; }

#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA487BC0)
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA487C90)
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA487CD0)
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487D00)

	inline static constexpr unsigned int GetRayIntersectionAllNonAllocCallback_TypeDefinitionIndex = 34864;

	class GetRayIntersectionAllNonAllocCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Invoke(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETRAYINTERSECTIONALLNONALLOCCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

