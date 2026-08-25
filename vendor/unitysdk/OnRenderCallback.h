#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define ONRENDERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x20705F0)
#define ONRENDERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2070600)
#define ONRENDERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2070630)
#define ONRENDERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2070640)

	inline static constexpr unsigned int OnRenderCallback_TypeDefinitionIndex = 130;

	class OnRenderCallback : public Il2CppObject
	{
	public:
		::System::Void Invoke(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + ONRENDERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Material* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::Material*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONRENDERCALLBACK_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONRENDERCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONRENDERCALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

