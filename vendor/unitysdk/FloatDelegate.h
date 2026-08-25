#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define FLOATDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F8140)
#define FLOATDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F8150)
#define FLOATDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F81D0)
#define FLOATDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F82A0)

	inline static constexpr unsigned int FloatDelegate_TypeDefinitionIndex = 212;

	class FloatDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLOATDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLOATDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

