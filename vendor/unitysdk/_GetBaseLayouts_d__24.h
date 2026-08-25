#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define <GETBASELAYOUTS>D__24_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6C8F0)
#define <GETBASELAYOUTS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6C920)
#define <GETBASELAYOUTS>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E6C930)
#define <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.UTILITIES.INTERNEDSTRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E6C9F0)
#define <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E6CA00)
#define <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E6CA50)
#define <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.UTILITIES.INTERNEDSTRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E6CAA0)
#define <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E6CB80)

	inline static constexpr unsigned int <GetBaseLayouts>d__24_TypeDefinitionIndex = 28860;

	class <GetBaseLayouts>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Boolean includeSelf; // 0x2C
		::System::Boolean __3__includeSelf; // 0x2D
		::UnityEngine::InputSystem::Utilities::InternedString* layout; // 0x30
		::UnityEngine::InputSystem::Utilities::InternedString* __3__layout; // 0x40
		Collection* __4__this; // 0x50
		Collection* __3____4__this; // 0x90

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.Utilities.InternedString_.get_Current()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.UTILITIES.INTERNEDSTRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.Utilities.InternedString_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.UTILITIES.INTERNEDSTRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETBASELAYOUTS>D__24_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

