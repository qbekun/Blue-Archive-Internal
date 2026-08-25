#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define DESTROYPIPELINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x28402E0)
#define DESTROYPIPELINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x28402F0)
#define DESTROYPIPELINEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2840320)
#define DESTROYPIPELINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x28403F0)

	inline static constexpr unsigned int DestroyPipelineDelegate_TypeDefinitionIndex = 34244;

	class DestroyPipelineDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYPIPELINEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYPIPELINEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYPIPELINEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYPIPELINEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

