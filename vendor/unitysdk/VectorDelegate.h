#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define VECTORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F82B0)
#define VECTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F8380)
#define VECTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F8390)
#define VECTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F8410)

	inline static constexpr unsigned int VectorDelegate_TypeDefinitionIndex = 213;

	class VectorDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VECTORDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + VECTORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::UnityEngine::Vector2* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector2*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + VECTORDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + VECTORDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

