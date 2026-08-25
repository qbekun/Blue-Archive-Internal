#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9DAAC90)
#define NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSECLICKEVENT_OFFSET UNITYSDK_OFFSET(0x9DAAE60)
#define NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSEMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x9DAAEA0)
#define NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAA570)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int GameScaleWebMultipleClickHandler_TypeDefinitionIndex = 26381;

	class GameScaleWebMultipleClickHandler : public Il2CppObject
	{
	public:
		::System::Int32 SM_CXDOUBLECLK; // 0x0
		::System::Int32 SM_CYDOUBLECLK; // 0x0
		::System::Boolean cancelPreviousClick; // 0x10
		::System::Double currentTime; // 0x18
		Button* lastClickButton; // 0x20
		::System::Int32 lastClickCount; // 0x24
		::System::Double lastClickTime; // 0x28
		::System::Int32 lastClickX; // 0x30
		::System::Int32 lastClickY; // 0x34

		::System::Void HandleMouseEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleMouseClickEvent(::System::Int32 arg, ::System::Int32 arg, Button* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Button*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSECLICKEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HandleMouseMoveEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_HANDLEMOUSEMOVEEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBMULTIPLECLICKHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

