#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define ONINITIALIZEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA442A0)
#define ONINITIALIZEITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0xA44370)
#define ONINITIALIZEITEM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA44390)
#define ONINITIALIZEITEM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA44430)

	inline static constexpr unsigned int OnInitializeItem_TypeDefinitionIndex = 88;

	class OnInitializeItem : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONINITIALIZEITEM_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONINITIALIZEITEM_INVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::AsyncCallback* arg4, ::System::Object* arg5)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONINITIALIZEITEM_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONINITIALIZEITEM_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

