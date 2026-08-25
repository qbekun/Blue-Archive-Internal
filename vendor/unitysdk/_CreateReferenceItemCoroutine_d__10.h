#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace RuntimeInspectorNamespace { class DraggedReferenceSourceUI; }
namespace UnityEngine { class Vector2; }

#define <CREATEREFERENCEITEMCOROUTINE>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581440)
#define <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9581460)
#define <CREATEREFERENCEITEMCOROUTINE>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9581470)
#define <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9581670)
#define <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9581680)
#define <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x95816D0)

	inline static constexpr unsigned int <CreateReferenceItemCoroutine>d__10_TypeDefinitionIndex = 35689;

	class <CreateReferenceItemCoroutine>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x20
		::RuntimeInspectorNamespace::DraggedReferenceSourceUI* __4__this; // 0x28
		::UnityEngine::Vector2* _pressPosition_5__2; // 0x30
		::System::Single _dragThreshold_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEREFERENCEITEMCOROUTINE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

