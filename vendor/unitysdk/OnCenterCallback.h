#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define ONCENTERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9FCD80)
#define ONCENTERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9FCD90)
#define ONCENTERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9FCDC0)
#define ONCENTERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCDD0)

	inline static constexpr unsigned int OnCenterCallback_TypeDefinitionIndex = 26;

	class OnCenterCallback : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCENTERCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCENTERCALLBACK_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ONCENTERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCENTERCALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

