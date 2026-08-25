#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Web { class NXPSharedMemoryClient; }
namespace NPA::Editor::Web { class NXPMultipleClickHandler; }
namespace NPA::Editor::Web { class NXPWebBrowserRenderer; }
namespace UnityEngine { class Vector2; }

#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB0770)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9DB0830)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_FORCESENDMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9DB1190)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSECLICKEVENT_OFFSET UNITYSDK_OFFSET(0x9DB0C90)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x9DB0F90)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_INDEXTOBUTTON_OFFSET UNITYSDK_OFFSET(0x9DB1260)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9DB10A0)
#define NPA_EDITOR_WEB_NXPMOUSEHANDLER_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9DB0950)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPMouseHandler_TypeDefinitionIndex = 26397;

	class NXPMouseHandler : public Il2CppObject
	{
	public:
		::NPA::Editor::Web::NXPSharedMemoryClient* sharedMemoryClient; // 0x10
		::NPA::Editor::Web::NXPMultipleClickHandler* multipleClickHandler; // 0x18
		::NPA::Editor::Web::NXPWebBrowserRenderer* webBrowserRenderer; // 0x20
		::System::Int32 x; // 0x28
		::System::Int32 y; // 0x2C
		Il2CppObject* onClicked; // 0x30
		Il2CppObject* onMouseWheelEvent; // 0x38

		::System::Void .ctor(::NPA::Editor::Web::NXPSharedMemoryClient* arg, ::NPA::Editor::Web::NXPWebBrowserRenderer* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPSharedMemoryClient*, ::NPA::Editor::Web::NXPWebBrowserRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendMouseEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEEVENT_OFFSET))(nullptr);
		}

		::System::Void ForceSendMouseWheelEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_FORCESENDMOUSEWHEELEVENT_OFFSET))(nullptr);
		}

		::System::Void SendMouseClickEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSECLICKEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendMouseMoveEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEMOVEEVENT_OFFSET))(arg, arg, nullptr);
		}

		Button* IndexToButton(::System::Int32 arg)
		{
			return (return (Button*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_INDEXTOBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SendMouseWheelEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_SENDMOUSEWHEELEVENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMOUSEHANDLER_GETMOUSEPOSITION_OFFSET))(nullptr);
		}

	};
}

