#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPCartDialog; }

#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C600C0)
#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_SUCCESSCOMMERCESERVICE_OFFSET UNITYSDK_OFFSET(0x9C60310)
#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_FAILCOMMERCESERVICE_OFFSET UNITYSDK_OFFSET(0x9C608C0)

namespace NPA::Editor::Board::JavaScriptInterface
{
	inline static constexpr unsigned int CartJavaScriptInterface_TypeDefinitionIndex = 26909;

	class CartJavaScriptInterface : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPCartDialog* cartDialog; // 0x28

		::System::Void .ctor(::NPA::Editor::Board::NXPCartDialog* arg)
		{
			((::System::Void(*)(::NPA::Editor::Board::NXPCartDialog*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SuccessCommerceService(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_SUCCESSCOMMERCESERVICE_OFFSET))(str, nullptr);
		}

		::System::Void FailCommerceService(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_CARTJAVASCRIPTINTERFACE_FAILCOMMERCESERVICE_OFFSET))(str, nullptr);
		}

	};
}

