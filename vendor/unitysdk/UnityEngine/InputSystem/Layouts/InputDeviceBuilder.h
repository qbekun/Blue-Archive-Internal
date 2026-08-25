#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceBuilder; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceBuilder&; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETUP_OFFSET UNITYSDK_OFFSET(0x9E6D420)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x9E6D940)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6DA30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x9E6D9C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6D580)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6DBA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E6E420)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E6FE30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROLOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9E6FBD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_CHILDCONTROLOVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x9E709B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLIFMISSING_OFFSET UNITYSDK_OFFSET(0x9E708C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E70D60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_APPLYUSESTATEFROM_OFFSET UNITYSDK_OFFSET(0x9E6F9A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SHIFTCHILDINDICESINHIERARCHYONEUP_OFFSET UNITYSDK_OFFSET(0x9E71150)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E711E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPARENTDISPLAYNAMERECURSIVE_OFFSET UNITYSDK_OFFSET(0x9E71470)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9E70AF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x9E70A30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINDORLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6DB40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_COMPUTESTATELAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6ED10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9E6D6A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHYRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9E71520)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCONTROLBITRANGENODE_OFFSET UNITYSDK_OFFSET(0x9E719E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GETBESTMIDPOINT_OFFSET UNITYSDK_OFFSET(0x9E71D60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCONTROLTONODE_OFFSET UNITYSDK_OFFSET(0x9E723F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDREN_OFFSET UNITYSDK_OFFSET(0x9E722B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GETCONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9E72530)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9E725F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REF_OFFSET UNITYSDK_OFFSET(0x9E72630)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceBuilder_TypeDefinitionIndex = 28869;

	class InputDeviceBuilder : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x10
		CacheRefInstance* m_LayoutCacheRef; // 0x18
		Il2CppObject* m_ChildControlOverrides; // 0x20
		Il2CppObject* m_StateOffsetToControlMap; // 0x28
		::System::Text::StringBuilder* m_StringBuilder; // 0x30
		::System::UInt32 kSizeForControlUsingStateFromOtherControl; // 0x0
		::UnityEngine::InputSystem::Layouts::InputDeviceBuilder* s_Instance; // 0x0
		::System::Int32 s_InstanceRef; // 0x28

		::System::Void Setup(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* Finish()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINISH_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg, bool&* arg, ControlItem* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, bool&*, ControlItem*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROL_OFFSET))(arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* arg, ControlItem&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ControlItem&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROLOVERRIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_CHILDCONTROLOVERRIDEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg, bool&* arg, ControlItem&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, bool&*, ControlItem&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLIFMISSING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* InsertChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg, bool&* arg, ControlItem&* arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, bool&*, ControlItem&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* arg, ControlItem&* arg, ::UnityEngine::InputSystem::Layouts::InputControlLayout* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ControlItem&*, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_APPLYUSESTATEFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SHIFTCHILDINDICESINHIERARCHYONEUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDisplayName(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETDISPLAYNAME_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* arg, ::System::Text::StringBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Text::StringBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPARENTDISPLAYNAMERECURSIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddProcessors(::UnityEngine::InputSystem::InputControl* arg, ControlItem&* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ControlItem&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPROCESSORS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void SetFormat(::UnityEngine::InputSystem::InputControl* arg, ControlItem* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ControlItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINDORLOADLAYOUT_OFFSET))(str, nullptr);
		}

		::System::Void ComputeStateLayout(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_COMPUTESTATELAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void FinalizeControlHierarchy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHY_OFFSET))(nullptr);
		}

		::System::Void FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHYRECURSIVE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InsertControlBitRangeNode(ControlBitRangeNode&* arg, ::UnityEngine::InputSystem::InputControl* arg, int32_t&* arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(ControlBitRangeNode&*, ::UnityEngine::InputSystem::InputControl*, int32_t&*, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCONTROLBITRANGENODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt16 GetBestMidPoint(ControlBitRangeNode* arg, ::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(ControlBitRangeNode*, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GETBESTMIDPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControlToNode(::UnityEngine::InputSystem::InputControl* arg, int32_t&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCONTROLTONODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddChildren(ControlBitRangeNode&* arg, ControlBitRangeNode* arg, ControlBitRangeNode* arg)
		{
			((::System::Void(*)(ControlBitRangeNode&*, ControlBitRangeNode*, ControlBitRangeNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDREN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt16 GetControlIndex(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::UInt16(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GETCONTROLINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceBuilder&* get_instance()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GET_INSTANCE_OFFSET))(nullptr);
		}

		RefInstance* Ref()
		{
			return (return (RefInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REF_OFFSET))(nullptr);
		}

	};
}

