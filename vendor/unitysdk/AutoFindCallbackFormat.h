#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ScriptableObject; }

#define AUTOFINDCALLBACKFORMAT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x20D1B00)
#define AUTOFINDCALLBACKFORMAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D1B20)
#define AUTOFINDCALLBACKFORMAT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x20D1C30)
#define AUTOFINDCALLBACKFORMAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x20D1C70)

	inline static constexpr unsigned int AutoFindCallbackFormat_TypeDefinitionIndex = 3709;

	class AutoFindCallbackFormat : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(Il2CppObject&* arg, ::System::IAsyncResult* arg2)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOFINDCALLBACKFORMAT_ENDINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUTOFINDCALLBACKFORMAT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::ScriptableObject* arg, ::System::String* str, Il2CppObject&* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::ScriptableObject*, ::System::String*, Il2CppObject&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOFINDCALLBACKFORMAT_BEGININVOKE_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void Invoke(::UnityEngine::ScriptableObject* arg, ::System::String* str, Il2CppObject&* arg2)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOFINDCALLBACKFORMAT_INVOKE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

