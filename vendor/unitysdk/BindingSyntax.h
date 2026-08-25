#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputBinding; }

#define BINDINGSYNTAX_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9E5E4C0)
#define BINDINGSYNTAX_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E5E520)
#define BINDINGSYNTAX_GET_BINDING_OFFSET UNITYSDK_OFFSET(0x9E5E5A0)
#define BINDINGSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E5BF30)
#define BINDINGSYNTAX_WITHNAME_OFFSET UNITYSDK_OFFSET(0x9E5E6C0)
#define BINDINGSYNTAX_WITHPATH_OFFSET UNITYSDK_OFFSET(0x9E5E7E0)
#define BINDINGSYNTAX_WITHGROUP_OFFSET UNITYSDK_OFFSET(0x9E5E900)
#define BINDINGSYNTAX_WITHGROUPS_OFFSET UNITYSDK_OFFSET(0x9E5EAD0)
#define BINDINGSYNTAX_WITHINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E5ED50)
#define BINDINGSYNTAX_WITHINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9E5EF20)
#define BINDINGSYNTAX_WITHINTERACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BINDINGSYNTAX_WITHPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9E5F1A0)
#define BINDINGSYNTAX_WITHPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9E5F370)
#define BINDINGSYNTAX_WITHPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BINDINGSYNTAX_TRIGGERING_OFFSET UNITYSDK_OFFSET(0x9E5F5F0)
#define BINDINGSYNTAX_TO_OFFSET UNITYSDK_OFFSET(0x9E5F7E0)
#define BINDINGSYNTAX_NEXTBINDING_OFFSET UNITYSDK_OFFSET(0x9E5F970)
#define BINDINGSYNTAX_PREVIOUSBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FB00)
#define BINDINGSYNTAX_NEXTPARTBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FB20)
#define BINDINGSYNTAX_PREVIOUSPARTBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FD80)
#define BINDINGSYNTAX_NEXTCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FE10)
#define BINDINGSYNTAX_PREVIOUSCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FFA0)
#define BINDINGSYNTAX_ITERATE_OFFSET UNITYSDK_OFFSET(0x9E5F990)
#define BINDINGSYNTAX_ITERATECOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FE30)
#define BINDINGSYNTAX_ITERATEPARTBINDING_OFFSET UNITYSDK_OFFSET(0x9E5FBB0)
#define BINDINGSYNTAX_ERASE_OFFSET UNITYSDK_OFFSET(0x9E5FFD0)
#define BINDINGSYNTAX_INSERTPARTBINDING_OFFSET UNITYSDK_OFFSET(0x9E601E0)

	inline static constexpr unsigned int BindingSyntax_TypeDefinitionIndex = 28412;

	class BindingSyntax : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0x10
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x18
		::System::Int32 m_BindingIndexInMap; // 0x20

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_GET_VALID_OFFSET))(nullptr);
		}

		::System::Int32 get_bindingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_GET_BINDINGINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputBinding* get_binding()
		{
			return (return (::UnityEngine::InputSystem::InputBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_GET_BINDING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionMap* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Int32, ::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		BindingSyntax* WithName(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHNAME_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithPath(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHPATH_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithGroup(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHGROUP_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithGroups(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHGROUPS_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithInteraction(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHINTERACTION_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithInteractions(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHINTERACTIONS_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithInteraction()
		{
			return (return (BindingSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHINTERACTION_OFFSET))(nullptr);
		}

		BindingSyntax* WithProcessor(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHPROCESSOR_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithProcessors(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHPROCESSORS_OFFSET))(str, nullptr);
		}

		BindingSyntax* WithProcessor()
		{
			return (return (BindingSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_WITHPROCESSOR_OFFSET))(nullptr);
		}

		BindingSyntax* Triggering(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_TRIGGERING_OFFSET))(arg, nullptr);
		}

		BindingSyntax* To(::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_TO_OFFSET))(arg, nullptr);
		}

		BindingSyntax* NextBinding()
		{
			return (return (BindingSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_NEXTBINDING_OFFSET))(nullptr);
		}

		BindingSyntax* PreviousBinding()
		{
			return (return (BindingSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_PREVIOUSBINDING_OFFSET))(nullptr);
		}

		BindingSyntax* NextPartBinding(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_NEXTPARTBINDING_OFFSET))(str, nullptr);
		}

		BindingSyntax* PreviousPartBinding(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_PREVIOUSPARTBINDING_OFFSET))(str, nullptr);
		}

		BindingSyntax* NextCompositeBinding(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_NEXTCOMPOSITEBINDING_OFFSET))(str, nullptr);
		}

		BindingSyntax* PreviousCompositeBinding(::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_PREVIOUSCOMPOSITEBINDING_OFFSET))(str, nullptr);
		}

		BindingSyntax* Iterate(::System::Boolean arg)
		{
			return (return (BindingSyntax*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_ITERATE_OFFSET))(arg, nullptr);
		}

		BindingSyntax* IterateCompositeBinding(::System::Boolean arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_ITERATECOMPOSITEBINDING_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* IteratePartBinding(::System::Boolean arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_ITERATEPARTBINDING_OFFSET))(arg, str, nullptr);
		}

		::System::Void Erase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_ERASE_OFFSET))(nullptr);
		}

		BindingSyntax* InsertPartBinding(::System::String* str, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSYNTAX_INSERTPARTBINDING_OFFSET))(str, str, nullptr);
		}

	};

