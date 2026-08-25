#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define POINTEREVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9585F00)
#define POINTEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9572990)
#define POINTEREVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9585F10)
#define POINTEREVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9585F20)

	inline static constexpr unsigned int PointerEvent_TypeDefinitionIndex = 35715;

	class PointerEvent : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + POINTEREVENT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + POINTEREVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + POINTEREVENT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + POINTEREVENT_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

