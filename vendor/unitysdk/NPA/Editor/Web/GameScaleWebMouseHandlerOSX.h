#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Web { class NXPWebBrowserRenderer; }
namespace NPA::Editor::Web { class GameScaleWebMultipleClickHandler; }
namespace UnityEngine { class Vector2; }

#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAA490)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9DAA590)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_FORCESENDMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9DAABA0)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSECLICKEVENT_OFFSET UNITYSDK_OFFSET(0x9DAA8F0)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x9DAAA70)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_INDEXTOBUTTON_OFFSET UNITYSDK_OFFSET(0x9DAAC80)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9DAAB10)
#define NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9DAA700)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int GameScaleWebMouseHandlerOSX_TypeDefinitionIndex = 26380;

	class GameScaleWebMouseHandlerOSX : public Il2CppObject
	{
	public:
		::NPA::Editor::Web::NXPWebBrowserRenderer* webBrowserRenderer; // 0x10
		::NPA::Editor::Web::GameScaleWebMultipleClickHandler* multipleClickHandler; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24
		Il2CppObject* mouseWheelEvent; // 0x28
		Il2CppObject* mouseClickEvent; // 0x30
		Il2CppObject* mouseMoveEvent; // 0x38

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::NPA::Editor::Web::NXPWebBrowserRenderer* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::NPA::Editor::Web::NXPWebBrowserRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SendMouseEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEEVENT_OFFSET))(nullptr);
		}

		::System::Void ForceSendMouseWheelEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_FORCESENDMOUSEWHEELEVENT_OFFSET))(nullptr);
		}

		::System::Void SendMouseClickEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSECLICKEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendMouseMoveEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEMOVEEVENT_OFFSET))(arg, arg, nullptr);
		}

		Button* IndexToButton(::System::Int32 arg)
		{
			return (return (Button*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_INDEXTOBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SendMouseWheelEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_SENDMOUSEWHEELEVENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMOUSEHANDLEROSX_GETMOUSEPOSITION_OFFSET))(nullptr);
		}

	};
}

