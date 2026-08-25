#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushSetting; }
namespace NPA::Editor::Push { class NXPPushMenuOption; }
namespace NPA::Editor { class NPListener; }

#define NPA_EDITOR_PUSH_NXPPUSHMENU_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PUSH_NXPPUSHMENU_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushMenu_TypeDefinitionIndex = 26551;

	class NXPPushMenu : public Il2CppObject
	{
	public:
		::System::Void showMenu(::NPA::Editor::Push::NXPPushSetting* arg, ::NPA::Editor::Push::NXPPushMenuOption* arg, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushSetting*, ::NPA::Editor::Push::NXPPushMenuOption*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENU_SHOWMENU_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowMenu(::NPA::Editor::Push::NXPPushMenuOption* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENU_SHOWMENU_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

