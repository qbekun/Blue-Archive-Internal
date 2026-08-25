#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB2200)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_SETGUESTACTION_OFFSET UNITYSDK_OFFSET(0x9CA8DA0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_SETACCOUNTLINKACTION_OFFSET UNITYSDK_OFFSET(0x9CA8E70)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA8C80)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkLoginSelectView_TypeDefinitionIndex = 27184;

	class NXPAccountLinkLoginSelectView : public Il2CppObject
	{
	public:
		::System::Action* _asGuest; // 0x48
		::System::Action* _asAccountLink; // 0x50

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetGuestAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_SETGUESTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccountLinkAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_SETACCOUNTLINKACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKLOGINSELECTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

