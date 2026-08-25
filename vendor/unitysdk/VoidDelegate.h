#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7EB0)
#define VOIDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7EE0)
#define VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7FB0)
#define VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7FC0)

	inline static constexpr unsigned int VoidDelegate_TypeDefinitionIndex = 210;

	class VoidDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + VOIDDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VOIDDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + VOIDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + VOIDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

