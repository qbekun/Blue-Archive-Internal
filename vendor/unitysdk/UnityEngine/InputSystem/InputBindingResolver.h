#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class TypeTable; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputBinding&; }
namespace UnityEngine::InputSystem { class InputBindingComposite; }
namespace UnityEngine::InputSystem { class InputActionState; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9E8D770)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_APPLYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9E8D780)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x9E8E040)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ASSIGNCOMPOSITEPARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E8E050)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E8E290)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALBINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x9E8E2A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E8E2B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_STARTWITHPREVIOUSRESOLVE_OFFSET UNITYSDK_OFFSET(0x9E8E590)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E8E760)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ADDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E8E770)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingResolver_TypeDefinitionIndex = 28441;

	class InputBindingResolver : public Il2CppObject
	{
	public:
		::System::Int32 totalProcessorCount; // 0x10
		::System::Int32 totalCompositeCount; // 0x14
		::System::Int32 totalInteractionCount; // 0x18
		::Il2CppArray<::System::Object*>* maps; // 0x20
		::Il2CppArray<::System::Object*>* controls; // 0x28
		UnmanagedMemory* memory; // 0x30
		::Il2CppArray<::System::Object*>* interactions; // 0xB0
		::Il2CppArray<::System::Object*>* processors; // 0xB8
		::Il2CppArray<::System::Object*>* composites; // 0xC0
		Il2CppObject* bindingMask; // 0xC8
		::System::Boolean m_IsControlOnlyResolve; // 0x128
		Il2CppObject* m_Parameters; // 0x130

		::System::Int32 InstantiateWithParameters(::UnityEngine::InputSystem::Utilities::TypeTable* arg, ::System::String* str, ::System::Object[]&* arg, int32_t&* arg, ::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputBinding&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::TypeTable*, ::System::String*, ::System::Object[]&*, int32_t&*, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEWITHPARAMETERS_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_totalMapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALMAPCOUNT_OFFSET))(nullptr);
		}

		::System::Void ApplyParameters(Il2CppObject* arg, ::System::Object* arg, ::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputBinding&* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_APPLYPARAMETERS_OFFSET))(arg, arg, arg, arg, str, str, nullptr);
		}

		::System::Int32 get_totalControlCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALCONTROLCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 AssignCompositePartIndex(::System::Object* arg, ::System::String* str, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ASSIGNCOMPOSITEPARTINDEX_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_totalBindingCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALBINDINGCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputBindingComposite* InstantiateBindingComposite(::UnityEngine::InputSystem::InputBinding&* arg, ::UnityEngine::InputSystem::InputActionMap* arg)
		{
			return (return (::UnityEngine::InputSystem::InputBindingComposite*(*)(::UnityEngine::InputSystem::InputBinding&*, ::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEBINDINGCOMPOSITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartWithPreviousResolve(::UnityEngine::InputSystem::InputActionState* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_STARTWITHPREVIOUSRESOLVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_totalActionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALACTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void AddActionMap(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ADDACTIONMAP_OFFSET))(arg, nullptr);
		}

	};
}

