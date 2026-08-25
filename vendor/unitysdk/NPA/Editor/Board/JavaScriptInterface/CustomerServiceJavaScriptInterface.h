#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CUSTOMERSERVICEJAVASCRIPTINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C61170)
#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CUSTOMERSERVICEJAVASCRIPTINTERFACE_SHOWNCS_OFFSET UNITYSDK_OFFSET(0x9C61270)

namespace NPA::Editor::Board::JavaScriptInterface
{
	inline static constexpr unsigned int CustomerServiceJavaScriptInterface_TypeDefinitionIndex = 26910;

	class CustomerServiceJavaScriptInterface : public Il2CppObject
	{
	public:
		::System::String* CS_INTERFACE_NAME; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CUSTOMERSERVICEJAVASCRIPTINTERFACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowNCS()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CUSTOMERSERVICEJAVASCRIPTINTERFACE_SHOWNCS_OFFSET))(nullptr);
		}

	};
}

