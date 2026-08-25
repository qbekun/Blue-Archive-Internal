#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define ONDRAGCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x243F0A0)
#define ONDRAGCB_.CTOR_OFFSET UNITYSDK_OFFSET(0x243F120)
#define ONDRAGCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x243F230)
#define ONDRAGCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x243F240)

	inline static constexpr unsigned int OnDragCB_TypeDefinitionIndex = 258;

	class OnDragCB : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::UnityEngine::Vector2* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::UnityEngine::Vector2*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGCB_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGCB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGCB_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGCB_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

