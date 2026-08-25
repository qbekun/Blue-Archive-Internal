#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }

#define GETKEYSTATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F71E0)
#define GETKEYSTATEFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F71F0)
#define GETKEYSTATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F72C0)
#define GETKEYSTATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7330)

	inline static constexpr unsigned int GetKeyStateFunc_TypeDefinitionIndex = 199;

	class GetKeyStateFunc : public Il2CppObject
	{
	public:
		::System::Boolean Invoke(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + GETKEYSTATEFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETKEYSTATEFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::KeyCode* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::KeyCode*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETKEYSTATEFUNC_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETKEYSTATEFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

