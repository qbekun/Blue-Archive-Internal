#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class KeyCode; }

#define KEYCODEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F8550)
#define KEYCODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F8620)
#define KEYCODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F8630)
#define KEYCODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F86B0)

	inline static constexpr unsigned int KeyCodeDelegate_TypeDefinitionIndex = 215;

	class KeyCodeDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYCODEDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCODEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::UnityEngine::KeyCode* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::UnityEngine::KeyCode*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCODEDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::UnityEngine::KeyCode* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCODEDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

