#pragma once
#include "unitysdk.h"

#define <PARSE>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA4640)
#define <PARSE>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EA4BF0)
#define <PARSE>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9EA4C00)
#define <PARSE>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTCONTROLPATH.PARSEDPATHCOMPONENT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA4DF0)
#define <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9EA4E20)
#define <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA4E70)
#define <PARSE>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROLPATH.PARSEDPATHCOMPONENT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9EA4EE0)
#define <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9EA4F80)

	inline static constexpr unsigned int <Parse>d__34_TypeDefinitionIndex = 28479;

	class <Parse>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		ParsedPathComponent* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x68
		::System::String* path; // 0x70
		::System::String* __3__path; // 0x78
		PathParser* _parser_5__2; // 0x80

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		ParsedPathComponent* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.InputControlPath.ParsedPathComponent_.get_Current()
		{
			return (return (ParsedPathComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTCONTROLPATH.PARSEDPATHCOMPONENT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputControlPath.ParsedPathComponent_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROLPATH.PARSEDPATHCOMPONENT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSE>D__34_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

