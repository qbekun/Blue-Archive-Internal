#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_WEB_NXPWEBBROWSERHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB4690)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBrowserHandler_TypeDefinitionIndex = 26404;

	class NXPWebBrowserHandler : public Il2CppObject
	{
	public:
		::System::Action* onLoadWebServer; // 0x10
		Il2CppObject* onStandby; // 0x18
		Il2CppObject* onLoadProgressChanged; // 0x20
		Il2CppObject* onPageLoadFailed; // 0x28
		Il2CppObject* onPageStarted; // 0x30
		Il2CppObject* onPageFinished; // 0x38
		Il2CppObject* onTitleChanged; // 0x40
		Il2CppObject* onUrlChanged; // 0x48
		Il2CppObject* onConsoleLogged; // 0x50
		Il2CppObject* onMessageEmitted; // 0x58
		Il2CppObject* onClicked; // 0x60
		Il2CppObject* onMouseWheelEvent; // 0x68
		Il2CppObject* onExecuteNativeMethod; // 0x70
		::System::Action* onClose; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

