#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_UNPROCESSEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMPREVIOUSFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEWITHCACHING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUEFROMSTATEWITHCACHING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMBUFFERASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_PROCESSVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_PROCESSVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_TRYGETPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_ADDPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl`1_TypeDefinitionIndex = 28462;

	class InputControl`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_ProcessorStack; // 0x0
		Il2CppObject* m_CachedValue; // 0x0
		Il2CppObject* m_UnprocessedCachedValue; // 0x0
		::System::Boolean evaluateProcessorsEveryRead; // 0x0

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject&* get_value()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_VALUE_OFFSET))(nullptr);
		}

		Il2CppObject&* get_unprocessedValue()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_UNPROCESSEDVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadValueFromPreviousFrame()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMPREVIOUSFRAME_OFFSET))(nullptr);
		}

		Il2CppObject* ReadDefaultValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READDEFAULTVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadValueFromState(::System::Object** arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadValueFromStateWithCaching(::System::Object** arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEWITHCACHING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadUnprocessedValueFromStateWithCaching(::System::Object** arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUEFROMSTATEWITHCACHING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadUnprocessedValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadValueFromStateAsObject(::System::Object** arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValueFromStateIntoBuffer(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMSTATEINTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueFromBufferIntoState(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueFromObjectIntoState(::System::Object* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(Il2CppObject* arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValueFromBufferAsObject(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_READVALUEFROMBUFFERASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareValue(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_COMPAREVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareValue(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_COMPAREVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProcessValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_PROCESSVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessValue(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_PROCESSVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TryGetProcessor()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_TRYGETPROCESSOR_OFFSET))(nullptr);
		}

		::System::Void AddProcessor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_ADDPROCESSOR_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_FINISHSETUP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_processors()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_GET_PROCESSORS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

