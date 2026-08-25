#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext; }

#define <GET_CONTROLS>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8D490)
#define <GET_CONTROLS>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E8D4C0)
#define <GET_CONTROLS>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E8D4D0)
#define <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTBINDINGCOMPOSITECONTEXT.PARTBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8D610)
#define <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E8D620)
#define <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8D670)
#define <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTBINDINGCOMPOSITECONTEXT.PARTBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8D6C0)
#define <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8D760)

	inline static constexpr unsigned int <get_controls>d__2_TypeDefinitionIndex = 28439;

	class <get_controls>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		PartBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::UnityEngine::InputSystem::InputBindingCompositeContext* __4__this; // 0x30
		::UnityEngine::InputSystem::InputBindingCompositeContext* __3____4__this; // 0x40
		::System::Int32 _totalBindingCount_5__2; // 0x50
		::System::Int32 _bindingIndex_5__3; // 0x54
		BindingState* _bindingState_5__4; // 0x58
		::System::Int32 _controlStartIndex_5__5; // 0x78
		::System::Int32 _i_5__6; // 0x7C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		PartBinding* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding_.get_Current()
		{
			return (return (PartBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTBINDINGCOMPOSITECONTEXT.PARTBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTBINDINGCOMPOSITECONTEXT.PARTBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CONTROLS>D__2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

