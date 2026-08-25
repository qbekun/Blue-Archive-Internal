#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define OBJECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F8420)
#define OBJECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F8430)
#define OBJECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F8440)
#define OBJECTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F8480)

	inline static constexpr unsigned int ObjectDelegate_TypeDefinitionIndex = 214;

	class ObjectDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

