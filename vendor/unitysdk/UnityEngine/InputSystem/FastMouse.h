#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EF4BC0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EF4E60)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAX_OFFSET UNITYSDK_OFFSET(0x9EF50B0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLRIGHT_OFFSET UNITYSDK_OFFSET(0x9EF52F0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLLEFT_OFFSET UNITYSDK_OFFSET(0x9EF5550)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTARIGHT_OFFSET UNITYSDK_OFFSET(0x9EF57B0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUS_OFFSET UNITYSDK_OFFSET(0x9EF5A10)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSY_OFFSET UNITYSDK_OFFSET(0x9EF5C30)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x9EF5E70)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESS_OFFSET UNITYSDK_OFFSET(0x9EF6080)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAUP_OFFSET UNITYSDK_OFFSET(0x9EF62D0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSECLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x9EF6530)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESSURE_OFFSET UNITYSDK_OFFSET(0x9EF6740)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLY_OFFSET UNITYSDK_OFFSET(0x9EF6980)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLUP_OFFSET UNITYSDK_OFFSET(0x9EF6BD0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSX_OFFSET UNITYSDK_OFFSET(0x9EF6E30)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSELEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EF7070)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOINTERID_OFFSET UNITYSDK_OFFSET(0x9EF7310)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EF7500)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EF7630)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLX_OFFSET UNITYSDK_OFFSET(0x9EF77C0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLDOWN_OFFSET UNITYSDK_OFFSET(0x9EF7A10)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTA_OFFSET UNITYSDK_OFFSET(0x9EF7C70)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAY_OFFSET UNITYSDK_OFFSET(0x9EF7E90)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x9EF80D0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x9EF8330)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTADOWN_OFFSET UNITYSDK_OFFSET(0x9EF8590)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9EF87F0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEMIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x9EF8920)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTALEFT_OFFSET UNITYSDK_OFFSET(0x9EF8BB0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EF8E10)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9EFA680)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EF7640)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EFA880)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9EFA890)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEFORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x9EFA430)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9EFA200)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int FastMouse_TypeDefinitionIndex = 28497;

	class FastMouse : public Il2CppObject
	{
	public:
		::System::String* metadata; // 0x0

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouserightButton(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERIGHTBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousebackButton(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEBACKBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltax(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollright(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLRIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollleft(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLLEFT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaright(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTARIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseradius(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusy(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlMousescroll(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousepress(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaup(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMouseclickCount(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSECLICKCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepressure(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESSURE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrolly(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollup(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusx(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseleftButton(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSELEFTBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMousepointerId(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOINTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollx(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrolldown(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLDOWN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlMousedelta(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltay(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositionx(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositiony(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltadown(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTADOWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousemiddleButton(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEMIDDLEBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaleft(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTALEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMousedisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDISPLAYINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseforwardButton(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEFORWARDBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseposition(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITION_OFFSET))(arg, arg, nullptr);
		}

	};
}

