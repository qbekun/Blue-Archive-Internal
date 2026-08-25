#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_FINDINPARENTCHAIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E9C8F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISACTUATED_OFFSET UNITYSDK_OFFSET(0x9E9CA30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E9B1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9E9CC20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READDEFAULTVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E9CCF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENTASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E9CDA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READUNPROCESSEDVALUEFROMEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READUNPROCESSEDVALUEFROMEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEFROMOBJECTINTOEVENT_OFFSET UNITYSDK_OFFSET(0x9E9CF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E9CFC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET UNITYSDK_OFFSET(0x9E9D1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E9CBA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E9D330)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET UNITYSDK_OFFSET(0x9E9D590)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET UNITYSDK_OFFSET(0x9E9D610)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATEIGNORINGNOISE_OFFSET UNITYSDK_OFFSET(0x9E9D6F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET UNITYSDK_OFFSET(0x9E9D410)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET UNITYSDK_OFFSET(0x9E9D7E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINSTATE_OFFSET UNITYSDK_OFFSET(0x9E9D8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINEVENT_OFFSET UNITYSDK_OFFSET(0x9E9D960)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9E9CE40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENTUNCHECKED_OFFSET UNITYSDK_OFFSET(0x9E9DA60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_RESETTODEFAULTSTATEINEVENT_OFFSET UNITYSDK_OFFSET(0x9E9DDA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_QUEUEVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET UNITYSDK_OFFSET(0x9E9DF70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET UNITYSDK_OFFSET(0x9E9E060)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_FINDCONTROLSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x9E9E170)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E9E530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECHANGEDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E9E7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x9E9E820)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETFIRSTBUTTONPRESSORNULL_OFFSET UNITYSDK_OFFSET(0x9E99BD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETALLBUTTONPRESSES_OFFSET UNITYSDK_OFFSET(0x9E9EDC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET UNITYSDK_OFFSET(0x9E9EE80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET UNITYSDK_OFFSET(0x9E9EF70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_TypeDefinitionIndex = 28469;

	class InputControlExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* FindInParentChain(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_FINDINPARENTCHAIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPressed(::UnityEngine::InputSystem::InputControl* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISPRESSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsActuated(::UnityEngine::InputSystem::InputControl* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISACTUATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEINTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READDEFAULTVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadValueFromEvent(Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadValueFromEvent(Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENTASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadUnprocessedValueFromEvent(Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READUNPROCESSEDVALUEFROMEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadUnprocessedValueFromEvent(Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READUNPROCESSEDVALUEFROMEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEFROMOBJECTINTOEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(Il2CppObject* arg, Il2CppObject* arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(Il2CppObject* arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteValueIntoState(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueIntoEvent(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyState(::UnityEngine::InputSystem::InputDevice* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyState(::UnityEngine::InputSystem::InputDevice* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATEIGNORINGNOISE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareState(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CompareState(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasValueChangeInState(::UnityEngine::InputSystem::InputControl* arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENTUNCHECKED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_RESETTODEFAULTSTATEINEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QueueValueChange(Il2CppObject* arg, Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_QUEUEVALUECHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AccumulateValueInEvent(Il2CppObject* arg, ::System::Object** arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AccumulateValueInEvent(Il2CppObject* arg, ::System::Object** arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FindControlsRecursive(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_FINDCONTROLSRECURSIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* BuildPath(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_BUILDPATH_OFFSET))(arg, str, arg, nullptr);
		}

		InputEventControlCollection* EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, Enumerate* arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Single arg)
		{
			return (return (InputEventControlCollection*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, Enumerate*, ::UnityEngine::InputSystem::InputDevice*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECONTROLS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		InputEventControlCollection* EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Single arg)
		{
			return (return (InputEventControlCollection*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECHANGEDCONTROLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASBUTTONPRESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETFIRSTBUTTONPRESSORNULL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETALLBUTTONPRESSES_OFFSET))(arg, arg, arg, nullptr);
		}

		ControlBuilder* Setup(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (ControlBuilder*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET))(arg, nullptr);
		}

		DeviceBuilder* Setup(::UnityEngine::InputSystem::InputDevice* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (DeviceBuilder*(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

