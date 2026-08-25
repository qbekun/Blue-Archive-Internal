#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9581730)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9581740)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9581770)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9575780)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9581780)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581A60)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9581AE0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SHOULDEXPOSEVARIABLE_OFFSET UNITYSDK_OFFSET(0x95817F0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9581B10)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ExposedVariablesEnumerator_TypeDefinitionIndex = 35693;

	class ExposedVariablesEnumerator : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::Il2CppArray<::System::Object*>* variables; // 0x18
		Il2CppObject* hiddenVariables; // 0x20
		Il2CppObject* exposedVariables; // 0x28
		VariableVisibility* fieldVisibility; // 0x30
		VariableVisibility* propertyVisibility; // 0x34

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_RESET_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, Il2CppObject* arg, VariableVisibility* arg, VariableVisibility* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, Il2CppObject*, VariableVisibility*, VariableVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* get_Current()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldExposeVariable(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_SHOULDEXPOSEVARIABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDVARIABLESENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

	};
}

