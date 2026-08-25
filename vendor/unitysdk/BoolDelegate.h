#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define BOOLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7FD0)
#define BOOLDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7FE0)
#define BOOLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F80B0)
#define BOOLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F8130)

	inline static constexpr unsigned int BoolDelegate_TypeDefinitionIndex = 211;

	class BoolDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BOOLDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOOLDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::Boolean arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BOOLDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOOLDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

