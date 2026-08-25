#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushSetting; }
namespace NPA::Editor::Push { class NXPPushMenuOption; }
namespace NPA::Editor { class NPListener; }

#define NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x9C09120)
#define NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x9C09570)
#define NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09100)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushMenuImplV2_TypeDefinitionIndex = 26562;

	class NXPPushMenuImplV2 : public Il2CppObject
	{
	public:
		::System::Void showMenu(::NPA::Editor::Push::NXPPushSetting* arg, ::NPA::Editor::Push::NXPPushMenuOption* arg, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushSetting*, ::NPA::Editor::Push::NXPPushMenuOption*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_SHOWMENU_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowMenu(::NPA::Editor::Push::NXPPushMenuOption* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_SHOWMENU_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUIMPLV2_.CTOR_OFFSET))(nullptr);
		}

	};
}

