#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define EVENTFUNCTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define EVENTFUNCTION`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EVENTFUNCTION`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EVENTFUNCTION`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int EventFunction`1_TypeDefinitionIndex = 34921;

	class EventFunction`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTFUNCTION`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTFUNCTION`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::UnityEngine::EventSystems::BaseEventData*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTFUNCTION`1_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTFUNCTION`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

