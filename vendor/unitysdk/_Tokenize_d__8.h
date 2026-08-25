#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class Substring; }

#define <TOKENIZE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E89280)
#define <TOKENIZE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E89D90)
#define <TOKENIZE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E89DA0)
#define <TOKENIZE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.UTILITIES.SUBSTRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8A080)
#define <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E8A090)
#define <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8A0E0)
#define <TOKENIZE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.UTILITIES.SUBSTRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8A130)
#define <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8A1D0)

	inline static constexpr unsigned int <Tokenize>d__8_TypeDefinitionIndex = 28958;

	class <Tokenize>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::InputSystem::Utilities::Substring* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::System::String* str; // 0x30
		::System::String* __3__str; // 0x38
		::System::Int32 _length_5__2; // 0x40
		::System::Int32 _endPos_5__3; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::Substring* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.Utilities.Substring_.get_Current()
		{
			return (return (::UnityEngine::InputSystem::Utilities::Substring*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.UTILITIES.SUBSTRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.Utilities.Substring_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.UTILITIES.SUBSTRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOKENIZE>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

