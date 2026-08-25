#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputStateBlock; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E9A800)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E9A820)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E9A8B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E9A8C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E9A910)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9E9A920)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9E9AAD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x9E9AAF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9E9AB10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x9E9AB20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x9E9AB30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x9E9ABA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x9E9AC10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET UNITYSDK_OFFSET(0x9E9AC80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET UNITYSDK_OFFSET(0x9E9AC90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET UNITYSDK_OFFSET(0x9E9ACA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x9E9ADD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x9E9ADE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E9AE00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E9AF00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E9AF80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x9E9B030)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E9AF40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E9B270)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMBUFFERASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMSTATEASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMSTATEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E9B280)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E9B2F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E9B360)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E9B410)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E9B610)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E9B670)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9E9A880)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x9E9B6B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x9E9B250)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET UNITYSDK_OFFSET(0x9E9B870)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x9E9B890)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET UNITYSDK_OFFSET(0x9E9B8D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET UNITYSDK_OFFSET(0x9E9B910)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_OPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E9B970)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E9B980)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_APPLYPARAMETERCHANGES_OFFSET UNITYSDK_OFFSET(0x9E9B990)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SETOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E9BC50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SETOPTIMIZEDCONTROLDATATYPERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x9E9BCD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ENSUREOPTIMIZATIONTYPEHASNOTCHANGED_OFFSET UNITYSDK_OFFSET(0x9E9BF40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x9E9C4F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x9E9C500)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x9E9C520)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x9E9C530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x9E9B680)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x9E9B690)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x9E9C550)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x9E9C560)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x9E9C580)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x9E9C590)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9E9C5B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9E9C5D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET UNITYSDK_OFFSET(0x9E9B530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9E9C6F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x9E9B6C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET UNITYSDK_OFFSET(0x9E9C830)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9E9C8D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MARKASSTALE_OFFSET UNITYSDK_OFFSET(0x9E9C8E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MARKASSTALERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x9E9BA60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_TypeDefinitionIndex = 28461;

	class InputControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputStateBlock* m_StateBlock; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* m_Name; // 0x20
		::System::String* m_Path; // 0x30
		::System::String* m_DisplayName; // 0x38
		::System::String* m_DisplayNameFromLayout; // 0x40
		::System::String* m_ShortDisplayName; // 0x48
		::System::String* m_ShortDisplayNameFromLayout; // 0x50
		::UnityEngine::InputSystem::Utilities::InternedString* m_Layout; // 0x58
		::UnityEngine::InputSystem::Utilities::InternedString* m_Variants; // 0x68
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x78
		::UnityEngine::InputSystem::InputControl* m_Parent; // 0x80
		::System::Int32 m_UsageCount; // 0x88
		::System::Int32 m_UsageStartIndex; // 0x8C
		::System::Int32 m_AliasCount; // 0x90
		::System::Int32 m_AliasStartIndex; // 0x94
		::System::Int32 m_ChildCount; // 0x98
		::System::Int32 m_ChildStartIndex; // 0x9C
		ControlFlags* m_ControlFlags; // 0xA0
		::System::Boolean m_CachedValueIsStale; // 0xA4
		::System::Boolean m_UnprocessedCachedValueIsStale; // 0xA5
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* m_DefaultState; // 0xA8
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* m_MinValue; // 0xB8
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* m_MaxValue; // 0xC8
		::UnityEngine::InputSystem::Utilities::FourCC* m_OptimizedControlDataType; // 0xD8

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_shortDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_shortDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET))(nullptr);
		}

		::System::String* get_layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::String* get_variants()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_parent()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET))(nullptr);
		}

		Il2CppObject* get_usages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET))(nullptr);
		}

		Il2CppObject* get_aliases()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateBlock* get_stateBlock()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputStateBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET))(nullptr);
		}

		::System::Boolean get_noisy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET))(nullptr);
		}

		::System::Void set_noisy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_synthetic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET))(nullptr);
		}

		::System::Void set_synthetic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_Item(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Single get_magnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* DebuggerDisplay()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadValueFromBufferAsObject(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMBUFFERASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValueFromStateAsObject(::System::Object** arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMSTATEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValueFromStateIntoBuffer(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_READVALUEFROMSTATEINTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueFromBufferIntoState(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteValueFromObjectIntoState(::System::Object* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareValue(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_COMPAREVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* TryGetChildControl(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET))(str, nullptr);
		}

		Il2CppObject* TryGetChildControl(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* GetChildControl(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetChildControl(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void RefreshConfigurationIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET))(nullptr);
		}

		::System::Void RefreshConfiguration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET))(nullptr);
		}

		::System::Object** get_currentStatePtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET))(nullptr);
		}

		::System::Object** get_previousFrameStatePtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET))(nullptr);
		}

		::System::Object** get_defaultStatePtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET))(nullptr);
		}

		::System::Object** get_noiseMaskPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET))(nullptr);
		}

		::System::UInt32 get_stateOffsetRelativeToDeviceRoot()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_optimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_OPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Void ApplyParameterChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_APPLYPARAMETERCHANGES_OFFSET))(nullptr);
		}

		::System::Void SetOptimizedControlDataType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SETOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Void SetOptimizedControlDataTypeRecursively()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SETOPTIMIZEDCONTROLDATATYPERECURSIVELY_OFFSET))(nullptr);
		}

		::System::Void EnsureOptimizationTypeHasNotChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ENSUREOPTIMIZATIONTYPEHASNOTCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean get_isSetupFinished()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_isSetupFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_isButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isConfigUpToDate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET))(nullptr);
		}

		::System::Void set_isConfigUpToDate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_dontReset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET))(nullptr);
		}

		::System::Void set_dontReset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_usesStateFromOtherControl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET))(nullptr);
		}

		::System::Void set_usesStateFromOtherControl(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasDefaultState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Void CallFinishSetupRecursive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET))(nullptr);
		}

		::System::String* MakeChildPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET))(str, nullptr);
		}

		::System::Void BakeOffsetIntoStateBlockRecursive(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDeviceIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean IsValueConsideredPressed(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void AddProcessor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsStale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MARKASSTALE_OFFSET))(nullptr);
		}

		::System::Void MarkAsStaleRecursively()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MARKASSTALERECURSIVELY_OFFSET))(nullptr);
		}

	};
}

