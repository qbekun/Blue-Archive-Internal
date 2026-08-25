#pragma once
#include "unitysdk.h"

#define BINDINGSTATE_SET_PROCESSORSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A050)
#define BINDINGSTATE_SET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x9E6A0F0)
#define BINDINGSTATE_GET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x9E63E30)
#define BINDINGSTATE_SET_CONTROLSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A100)
#define BINDINGSTATE_SET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x9E6A1A0)
#define BINDINGSTATE_GET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E61120)
#define BINDINGSTATE_SET_INTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A1D0)
#define BINDINGSTATE_GET_COMPOSITEORCOMPOSITEBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E61130)
#define BINDINGSTATE_SET_CHAINSWITHNEXT_OFFSET UNITYSDK_OFFSET(0x9E6A260)
#define BINDINGSTATE_GET_ACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E63E00)
#define BINDINGSTATE_SET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E6A280)
#define BINDINGSTATE_SET_ACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A2A0)
#define BINDINGSTATE_SET_MAPINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A340)
#define BINDINGSTATE_SET_TRIGGEREVENTIDFORCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E6A3D0)
#define BINDINGSTATE_GET_TRIGGEREVENTIDFORCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E6A3E0)
#define BINDINGSTATE_GET_MAPINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A3F0)
#define BINDINGSTATE_GET_CONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A400)
#define BINDINGSTATE_SET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A410)
#define BINDINGSTATE_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A4A0)
#define BINDINGSTATE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9E6A4B0)
#define BINDINGSTATE_GET_PROCESSORSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E68700)
#define BINDINGSTATE_SET_INTERACTIONSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A4C0)
#define BINDINGSTATE_SET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E6A560)
#define BINDINGSTATE_GET_CHAINSWITHNEXT_OFFSET UNITYSDK_OFFSET(0x9E6A580)
#define BINDINGSTATE_GET_INTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A590)
#define BINDINGSTATE_GET_INTERACTIONSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E62D30)
#define BINDINGSTATE_GET_ISPARTOFCHAIN_OFFSET UNITYSDK_OFFSET(0x9E6A5A0)
#define BINDINGSTATE_GET_INITIALSTATECHECKPENDING_OFFSET UNITYSDK_OFFSET(0x9E65A70)
#define BINDINGSTATE_GET_PARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A5C0)
#define BINDINGSTATE_GET_ISENDOFCHAIN_OFFSET UNITYSDK_OFFSET(0x9E6A5B0)
#define BINDINGSTATE_SET_COMPOSITEORCOMPOSITEBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A5D0)
#define BINDINGSTATE_SET_CONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x9E6A670)
#define BINDINGSTATE_SET_ISENDOFCHAIN_OFFSET UNITYSDK_OFFSET(0x9E6A700)
#define BINDINGSTATE_GET_CONTROLSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A720)
#define BINDINGSTATE_SET_INITIALSTATECHECKPENDING_OFFSET UNITYSDK_OFFSET(0x9E63E40)
#define BINDINGSTATE_GET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x9E6A730)
#define BINDINGSTATE_SET_PARTINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A740)
#define BINDINGSTATE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9E6A1C0)
#define BINDINGSTATE_GET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E62140)

	inline static constexpr unsigned int BindingState_TypeDefinitionIndex = 28420;

	class BindingState : public Il2CppObject
	{
	public:
		::System::Byte m_ControlCount; // 0x10
		::System::Byte m_InteractionCount; // 0x11
		::System::Byte m_ProcessorCount; // 0x12
		::System::Byte m_MapIndex; // 0x13
		::System::Byte m_Flags; // 0x14
		::System::Byte m_PartIndex; // 0x15
		::System::UInt16 m_ActionIndex; // 0x16
		::System::UInt16 m_CompositeOrCompositeBindingIndex; // 0x18
		::System::UInt16 m_ProcessorStartIndex; // 0x1A
		::System::UInt16 m_InteractionStartIndex; // 0x1C
		::System::UInt16 m_ControlStartIndex; // 0x1E
		::System::Double m_PressTime; // 0x20
		::System::Int32 m_TriggerEventIdForComposite; // 0x28
		::System::Int32 __padding; // 0x2C

		::System::Void set_processorStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_PROCESSORSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_pressTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_PRESSTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wantsInitialStateCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_WANTSINITIALSTATECHECK_OFFSET))(nullptr);
		}

		::System::Void set_controlStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_CONTROLSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_wantsInitialStateCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_WANTSINITIALSTATECHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPartOfComposite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_ISPARTOFCOMPOSITE_OFFSET))(nullptr);
		}

		::System::Void set_interactionCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_INTERACTIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_compositeOrCompositeBindingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_COMPOSITEORCOMPOSITEBINDINGINDEX_OFFSET))(nullptr);
		}

		::System::Void set_chainsWithNext(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_CHAINSWITHNEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_actionIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_ACTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_isComposite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_ISCOMPOSITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_actionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_ACTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_mapIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_MAPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerEventIdForComposite(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_TRIGGEREVENTIDFORCOMPOSITE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_triggerEventIdForComposite()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_TRIGGEREVENTIDFORCOMPOSITE_OFFSET))(nullptr);
		}

		::System::Int32 get_mapIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_MAPINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_controlCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_CONTROLCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_processorCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_PROCESSORCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_processorCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_PROCESSORCOUNT_OFFSET))(nullptr);
		}

		Flags* get_flags()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Int32 get_processorStartIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_PROCESSORSTARTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_interactionStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_INTERACTIONSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_isPartOfComposite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_ISPARTOFCOMPOSITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_chainsWithNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_CHAINSWITHNEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_interactionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_INTERACTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_interactionStartIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_INTERACTIONSTARTINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_isPartOfChain()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_ISPARTOFCHAIN_OFFSET))(nullptr);
		}

		::System::Boolean get_initialStateCheckPending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_INITIALSTATECHECKPENDING_OFFSET))(nullptr);
		}

		::System::Int32 get_partIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_PARTINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_isEndOfChain()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_ISENDOFCHAIN_OFFSET))(nullptr);
		}

		::System::Void set_compositeOrCompositeBindingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_COMPOSITEORCOMPOSITEBINDINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_controlCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_CONTROLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_isEndOfChain(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_ISENDOFCHAIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_controlStartIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_CONTROLSTARTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_initialStateCheckPending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_INITIALSTATECHECKPENDING_OFFSET))(arg, nullptr);
		}

		::System::Double get_pressTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_PRESSTIME_OFFSET))(nullptr);
		}

		::System::Void set_partIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_PARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_flags(Flags* arg)
		{
			((::System::Void(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isComposite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGSTATE_GET_ISCOMPOSITE_OFFSET))(nullptr);
		}

	};

