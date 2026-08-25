#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionPhase; }

#define TRIGGERSTATE_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x9E6A750)
#define TRIGGERSTATE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E6A760)
#define TRIGGERSTATE_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A770)
#define TRIGGERSTATE_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x9E63E20)
#define TRIGGERSTATE_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0x9E6A780)
#define TRIGGERSTATE_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E63DF0)
#define TRIGGERSTATE_GET_LASTCANCELEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A790)
#define TRIGGERSTATE_GET_INPROCESSING_OFFSET UNITYSDK_OFFSET(0x9E67E20)
#define TRIGGERSTATE_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E6A7A0)
#define TRIGGERSTATE_GET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9E62D10)
#define TRIGGERSTATE_SET_LASTPERFORMEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A7B0)
#define TRIGGERSTATE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E6A7C0)
#define TRIGGERSTATE_SET_LASTCANCELEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A7D0)
#define TRIGGERSTATE_SET_MAYNEEDCONFLICTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9E6A7E0)
#define TRIGGERSTATE_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E67460)
#define TRIGGERSTATE_SET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E64E20)
#define TRIGGERSTATE_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x9E6A800)
#define TRIGGERSTATE_SET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E642F0)
#define TRIGGERSTATE_GET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x9E66680)
#define TRIGGERSTATE_SET_ISPASSTHROUGH_OFFSET UNITYSDK_OFFSET(0x9E66660)
#define TRIGGERSTATE_GET_ISPERFORMED_OFFSET UNITYSDK_OFFSET(0x9E6A810)
#define TRIGGERSTATE_GET_MAPINDEX_OFFSET UNITYSDK_OFFSET(0x9E6A820)
#define TRIGGERSTATE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9E67E30)
#define TRIGGERSTATE_SET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E64130)
#define TRIGGERSTATE_GET_MAYNEEDCONFLICTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9E67470)
#define TRIGGERSTATE_GET_LASTPERFORMEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A830)
#define TRIGGERSTATE_SET_RELEASEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A840)
#define TRIGGERSTATE_SET_PRESSEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A850)
#define TRIGGERSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9E6A860)
#define TRIGGERSTATE_SET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9E640B0)
#define TRIGGERSTATE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9E6A870)
#define TRIGGERSTATE_GET_HAVEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E6A880)
#define TRIGGERSTATE_GET_HASMULTIPLECONCURRENTACTUATIONS_OFFSET UNITYSDK_OFFSET(0x9E67480)
#define TRIGGERSTATE_SET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x9E66690)
#define TRIGGERSTATE_GET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E64140)
#define TRIGGERSTATE_SET_HASMULTIPLECONCURRENTACTUATIONS_OFFSET UNITYSDK_OFFSET(0x9E64DE0)
#define TRIGGERSTATE_SET_INPROCESSING_OFFSET UNITYSDK_OFFSET(0x9E64E00)
#define TRIGGERSTATE_GET_PRESSEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A890)
#define TRIGGERSTATE_GET_RELEASEDINUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6A8A0)
#define TRIGGERSTATE_GET_ISPASSTHROUGH_OFFSET UNITYSDK_OFFSET(0x9E649B0)
#define TRIGGERSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9E6A8B0)
#define TRIGGERSTATE_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E6A8C0)
#define TRIGGERSTATE_SET_MAPINDEX_OFFSET UNITYSDK_OFFSET(0x9E64280)
#define TRIGGERSTATE_SET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E64160)

	inline static constexpr unsigned int TriggerState_TypeDefinitionIndex = 28422;

	class TriggerState : public Il2CppObject
	{
	public:
		::System::Int32 kMaxNumMaps; // 0x0
		::System::Int32 kMaxNumControls; // 0x0
		::System::Int32 kMaxNumBindings; // 0x0
		::System::Byte m_Phase; // 0x10
		::System::Byte m_Flags; // 0x11
		::System::Byte m_MapIndex; // 0x12
		::System::UInt16 m_ControlIndex; // 0x14
		::System::Double m_Time; // 0x18
		::System::Double m_StartTime; // 0x20
		::System::UInt16 m_BindingIndex; // 0x28
		::System::UInt16 m_InteractionIndex; // 0x2A
		::System::Single m_Magnitude; // 0x2C
		::System::UInt32 m_LastPerformedInUpdate; // 0x30
		::System::UInt32 m_LastCanceledInUpdate; // 0x34
		::System::UInt32 m_PressedInUpdate; // 0x38
		::System::UInt32 m_ReleasedInUpdate; // 0x3C

		::System::Boolean get_isCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISCANCELED_OFFSET))(nullptr);
		}

		::System::Double get_startTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_bindingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_BINDINGINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_isDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISDISABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_isWaiting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISWAITING_OFFSET))(nullptr);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::InputActionPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionPhase*, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_PHASE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_lastCanceledInUpdate()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_LASTCANCELEDINUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_inProcessing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_INPROCESSING_OFFSET))(nullptr);
		}

		::System::Single get_magnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::System::Int32 get_controlIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_CONTROLINDEX_OFFSET))(nullptr);
		}

		::System::Void set_lastPerformedInUpdate(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_LASTPERFORMEDINUPDATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::InputActionPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Void set_lastCanceledInUpdate(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_LASTCANCELEDINUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_mayNeedConflictResolution(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_MAYNEEDCONFLICTRESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_isPressed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_ISPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISSTARTED_OFFSET))(nullptr);
		}

		::System::Void set_bindingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_BINDINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_isPassThrough(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_ISPASSTHROUGH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPerformed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISPERFORMED_OFFSET))(nullptr);
		}

		::System::Int32 get_mapIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_MAPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_flags(Flags* arg)
		{
			((::System::Void(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_magnitude(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_MAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mayNeedConflictResolution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_MAYNEEDCONFLICTRESOLUTION_OFFSET))(nullptr);
		}

		::System::UInt32 get_lastPerformedInUpdate()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_LASTPERFORMEDINUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_releasedInUpdate(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_RELEASEDINUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_pressedInUpdate(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_PRESSEDINUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_controlIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_CONTROLINDEX_OFFSET))(arg, nullptr);
		}

		Flags* get_flags()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Boolean get_haveMagnitude()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_HAVEMAGNITUDE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMultipleConcurrentActuations()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_HASMULTIPLECONCURRENTACTUATIONS_OFFSET))(nullptr);
		}

		::System::Void set_isButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_ISBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_interactionIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_INTERACTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_hasMultipleConcurrentActuations(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_HASMULTIPLECONCURRENTACTUATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_inProcessing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_INPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_pressedInUpdate()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_PRESSEDINUPDATE_OFFSET))(nullptr);
		}

		::System::UInt32 get_releasedInUpdate()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_RELEASEDINUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_isPassThrough()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_GET_ISPASSTHROUGH_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_startTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_mapIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_MAPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_interactionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERSTATE_SET_INTERACTIONINDEX_OFFSET))(arg, nullptr);
		}

	};

