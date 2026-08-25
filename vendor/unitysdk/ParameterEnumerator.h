#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputBinding; }

#define PARAMETERENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E55310)
#define PARAMETERENUMERATOR_MOVETONEXTINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E553A0)
#define PARAMETERENUMERATOR_FINDPARAMETER_OFFSET UNITYSDK_OFFSET(0x9E55410)
#define PARAMETERENUMERATOR_MOVETONEXTBINDING_OFFSET UNITYSDK_OFFSET(0x9E55540)
#define PARAMETERENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E54DE0)
#define PARAMETERENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E4D400)
#define PARAMETERENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E4D470)
#define PARAMETERENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9E557C0)
#define PARAMETERENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E55920)
#define PARAMETERENUMERATOR_MOVETONEXTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9E558B0)

	inline static constexpr unsigned int ParameterEnumerator_TypeDefinitionIndex = 28401;

	class ParameterEnumerator : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::System::Int32 m_MapIndex; // 0x18
		::System::Int32 m_BindingCurrentIndex; // 0x1C
		::System::Int32 m_BindingEndIndex; // 0x20
		::System::Int32 m_InteractionCurrentIndex; // 0x24
		::System::Int32 m_InteractionEndIndex; // 0x28
		::System::Int32 m_ProcessorCurrentIndex; // 0x2C
		::System::Int32 m_ProcessorEndIndex; // 0x30
		::UnityEngine::InputSystem::InputBinding* m_BindingMask; // 0x38
		::System::Type* m_ObjectType; // 0x90
		::System::String* m_ParameterName; // 0x98
		::System::Boolean m_MayBeInteraction; // 0xA0
		::System::Boolean m_MayBeProcessor; // 0xA1
		::System::Boolean m_MayBeComposite; // 0xA2
		::System::Boolean m_CurrentBindingIsComposite; // 0xA3
		::System::Object* m_CurrentObject; // 0xA8
		::System::Reflection::FieldInfo* m_CurrentParameter; // 0xB0

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextInteraction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_MOVETONEXTINTERACTION_OFFSET))(nullptr);
		}

		::System::Boolean FindParameter(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_FINDPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToNextBinding()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_MOVETONEXTBINDING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionState* arg, ParameterOverride* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionState*, ParameterOverride*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Parameter* get_Current()
		{
			return (return (Parameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextProcessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERATOR_MOVETONEXTPROCESSOR_OFFSET))(nullptr);
		}

	};

