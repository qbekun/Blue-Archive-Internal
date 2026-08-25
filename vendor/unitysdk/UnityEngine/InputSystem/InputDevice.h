#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9EA5DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9EA5DD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9EA5F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ADDED_OFFSET UNITYSDK_OFFSET(0x9E92370)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_REMOTE_OFFSET UNITYSDK_OFFSET(0x9EA5FD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_NATIVE_OFFSET UNITYSDK_OFFSET(0x9EA5FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x9EA5FF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9EA6000)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x9EA6010)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_WASUPDATEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x9EA6060)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALLCONTROLS_OFFSET UNITYSDK_OFFSET(0x9EA60B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9EA6100)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9EA6160)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x9EA61B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA5B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMBUFFERASOBJECT_OFFSET UNITYSDK_OFFSET(0x9EA6290)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9EA62E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9EA63E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x9EA65B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9EA66B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EA5160)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONADDED_OFFSET UNITYSDK_OFFSET(0x9EA6720)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EA6730)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9EA6740)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0x9EA6750)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_QUERYENABLEDSTATEFROMRUNTIME_OFFSET UNITYSDK_OFFSET(0x9EA5E90)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINFRONTEND_OFFSET UNITYSDK_OFFSET(0x9EA6820)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINFRONTEND_OFFSET UNITYSDK_OFFSET(0x9EA6830)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINRUNTIME_OFFSET UNITYSDK_OFFSET(0x9EA6850)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINRUNTIME_OFFSET UNITYSDK_OFFSET(0x9EA6860)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDWHILEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9EA6890)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDWHILEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9EA68A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ENCODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET UNITYSDK_OFFSET(0x9EA68D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DECODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET UNITYSDK_OFFSET(0x9E9FB40)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASCONTROLSWITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9EA68E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASCONTROLSWITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9E9FE30)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASDONTRESETCONTROLS_OFFSET UNITYSDK_OFFSET(0x9EA68F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASDONTRESETCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E9FDB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASSTATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x9E9DD90)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASSTATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x9EA6900)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTMERGER_OFFSET UNITYSDK_OFFSET(0x9EA6920)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTMERGER_OFFSET UNITYSDK_OFFSET(0x9EA6930)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTPREPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9EA6960)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTPREPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9EA6970)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9EA69A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9EA6A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_CLEARDEVICEUSAGES_OFFSET UNITYSDK_OFFSET(0x9EA6B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTSYNC_OFFSET UNITYSDK_OFFSET(0x9E96CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTRESET_OFFSET UNITYSDK_OFFSET(0x9E96EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEENABLECOMMAND_OFFSET UNITYSDK_OFFSET(0x9EA6BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEDISABLECOMMAND_OFFSET UNITYSDK_OFFSET(0x9EA6C10)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYADDED_OFFSET UNITYSDK_OFFSET(0x9EA6C70)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYREMOVED_OFFSET UNITYSDK_OFFSET(0x9EA6C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_BUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITECHANGEDCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x9EA6CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITEPARTIALCHANGEDCONTROLSTATESINTERNAL_OFFSET UNITYSDK_OFFSET(0x9EA6DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLBITRANGENODE_OFFSET UNITYSDK_OFFSET(0x9EA74F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLTREE_OFFSET UNITYSDK_OFFSET(0x9EA79C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLTREE_OFFSET UNITYSDK_OFFSET(0x9EA7BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITECHANGEDCONTROLSTATESINTERNAL_OFFSET UNITYSDK_OFFSET(0x9EA7110)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_HASDATACHANGEDINRANGE_OFFSET UNITYSDK_OFFSET(0x9EA7C70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 28487;

	class InputDevice : public Il2CppObject
	{
	public:
		::System::Int32 InvalidDeviceId; // 0x0
		::System::Int32 kLocalParticipantId; // 0x0
		::System::Int32 kInvalidDeviceIndex; // 0x0
		DeviceFlags* m_DeviceFlags; // 0xE0
		::System::Int32 m_DeviceId; // 0xE4
		::System::Int32 m_ParticipantId; // 0xE8
		::System::Int32 m_DeviceIndex; // 0xEC
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription* m_Description; // 0xF0
		::System::Double m_LastUpdateTimeInternal; // 0x128
		::System::UInt32 m_CurrentUpdateStepCount; // 0x130
		::Il2CppArray<::System::Object*>* m_AliasesForEachControl; // 0x138
		::Il2CppArray<::System::Object*>* m_UsagesForEachControl; // 0x140
		::Il2CppArray<::System::Object*>* m_UsageToControl; // 0x148
		::Il2CppArray<::System::Object*>* m_ChildrenForEachControl; // 0x150
		::Il2CppArray<::System::Object*>* m_StateOffsetToControlMap; // 0x158
		::Il2CppArray<::System::Object*>* m_ControlTreeNodes; // 0x160
		::Il2CppArray<::System::Object*>* m_ControlTreeIndices; // 0x168
		::System::Int32 kControlIndexBits; // 0x0
		::System::Int32 kStateOffsetBits; // 0x0
		::System::Int32 kStateSizeBits; // 0x0

		::UnityEngine::InputSystem::Layouts::InputDeviceDescription* get_description()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_canRunInBackground()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_CANRUNINBACKGROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_added()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ADDED_OFFSET))(nullptr);
		}

		::System::Boolean get_remote()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_REMOTE_OFFSET))(nullptr);
		}

		::System::Boolean get_native()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_NATIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_updateBeforeRender()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_UPDATEBEFORERENDER_OFFSET))(nullptr);
		}

		::System::Int32 get_deviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Double get_lastUpdateTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_LASTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Boolean get_wasUpdatedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_WASUPDATEDTHISFRAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_allControls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALLCONTROLS_OFFSET))(nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* get_all()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* ReadValueFromBufferAsObject(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMBUFFERASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValueFromStateAsObject(::System::Object** arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValueFromStateIntoBuffer(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEINTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompareValue(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_COMPAREVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyConfigurationChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYCONFIGURATIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void OnAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONADDED_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void OnConfigurationChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONCONFIGURATIONCHANGED_OFFSET))(nullptr);
		}

		::System::Int64 ExecuteCommand(Il2CppObject&* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Int64 ExecuteCommand(::System::Object** arg)
		{
			return (return (::System::Int64(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean QueryEnabledStateFromRuntime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_QUERYENABLEDSTATEFROMRUNTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_disabledInFrontend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINFRONTEND_OFFSET))(nullptr);
		}

		::System::Void set_disabledInFrontend(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINFRONTEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disabledInRuntime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINRUNTIME_OFFSET))(nullptr);
		}

		::System::Void set_disabledInRuntime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINRUNTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disabledWhileInBackground()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDWHILEINBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void set_disabledWhileInBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDWHILEINBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::UInt32 EncodeStateOffsetToControlMapEntry(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ENCODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DecodeStateOffsetToControlMapEntry(::System::UInt32 arg, uint32_t&* arg, uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::UInt32, uint32_t&*, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DECODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_hasControlsWithDefaultState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASCONTROLSWITHDEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_hasControlsWithDefaultState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASCONTROLSWITHDEFAULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasDontResetControls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASDONTRESETCONTROLS_OFFSET))(nullptr);
		}

		::System::Void set_hasDontResetControls(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASDONTRESETCONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasStateCallbacks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASSTATECALLBACKS_OFFSET))(nullptr);
		}

		::System::Void set_hasStateCallbacks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASSTATECALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasEventMerger()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTMERGER_OFFSET))(nullptr);
		}

		::System::Void set_hasEventMerger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTMERGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasEventPreProcessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTPREPROCESSOR_OFFSET))(nullptr);
		}

		::System::Void set_hasEventPreProcessor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTPREPROCESSOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ADDDEVICEUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REMOVEDEVICEUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDeviceUsages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_CLEARDEVICEUSAGES_OFFSET))(nullptr);
		}

		::System::Boolean RequestSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTSYNC_OFFSET))(nullptr);
		}

		::System::Boolean RequestReset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTRESET_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteEnableCommand()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEENABLECOMMAND_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteDisableCommand()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEDISABLECOMMAND_OFFSET))(nullptr);
		}

		::System::Void NotifyAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYADDED_OFFSET))(nullptr);
		}

		::System::Void NotifyRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYREMOVED_OFFSET))(nullptr);
		}

		Il2CppObject* Build(::System::String* str, ::System::String* str, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_BUILD_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void WriteChangedControlStates(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITECHANGEDCONTROLSTATES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WritePartialChangedControlStatesInternal(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Object** arg, ControlBitRangeNode* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Object**, ControlBitRangeNode*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITEPARTIALCHANGEDCONTROLSTATESINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DumpControlBitRangeNode(::System::Int32 arg, ControlBitRangeNode* arg, ::System::UInt32 arg, ::System::UInt32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ControlBitRangeNode*, ::System::UInt32, ::System::UInt32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLBITRANGENODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DumpControlTree(ControlBitRangeNode* arg, ::System::UInt32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(ControlBitRangeNode*, ::System::UInt32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* DumpControlTree()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DUMPCONTROLTREE_OFFSET))(nullptr);
		}

		::System::Void WriteChangedControlStatesInternal(::System::Object** arg, ::System::UInt32 arg, ::System::Object** arg, ControlBitRangeNode* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::Object**, ControlBitRangeNode*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_WRITECHANGEDCONTROLSTATESINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasDataChangedInRange(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_HASDATACHANGEDINRANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

