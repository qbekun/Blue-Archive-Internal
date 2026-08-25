#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define DESTROYRIGDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x28337D0)
#define DESTROYRIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x28338A0)
#define DESTROYRIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x28338B0)
#define DESTROYRIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x28338E0)

	inline static constexpr unsigned int DestroyRigDelegate_TypeDefinitionIndex = 34220;

	class DestroyRigDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYRIGDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYRIGDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYRIGDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYRIGDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

