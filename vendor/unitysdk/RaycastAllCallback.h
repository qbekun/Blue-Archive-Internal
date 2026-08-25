#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Ray; }

#define RAYCASTALLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487390)
#define RAYCASTALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA487460)
#define RAYCASTALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA487470)
#define RAYCASTALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA487540)

	inline static constexpr unsigned int RaycastAllCallback_TypeDefinitionIndex = 34860;

	class RaycastAllCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTALLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTALLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTALLCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Invoke(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTALLCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

