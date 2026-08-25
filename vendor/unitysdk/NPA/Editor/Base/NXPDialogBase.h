#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Base { class NXPViewBase; }

#define NPA_EDITOR_BASE_NXPDIALOGBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEB1E0)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_GETTAG_OFFSET UNITYSDK_OFFSET(0x9BEB670)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_SETVIEW_OFFSET UNITYSDK_OFFSET(0x9BEB680)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_SHOW_OFFSET UNITYSDK_OFFSET(0x9BEB690)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_DISMISS_OFFSET UNITYSDK_OFFSET(0x9BEB730)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9BEB840)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9BEB9A0)
#define NPA_EDITOR_BASE_NXPDIALOGBASE_NOTIFYDIALOGCLOSEDONCE_OFFSET UNITYSDK_OFFSET(0x9BEB7C0)

namespace NPA::Editor::Base
{
	inline static constexpr unsigned int NXPDialogBase_TypeDefinitionIndex = 26474;

	class NXPDialogBase : public Il2CppObject
	{
	public:
		::System::String* _activityID; // 0x10
		::System::String* _tag; // 0x18
		::NPA::Editor::Base::NXPViewBase* viewBase; // 0x20
		::System::Boolean isDialogClosedNotified; // 0x28

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* GetTag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_GETTAG_OFFSET))(nullptr);
		}

		::System::Void SetView(::NPA::Editor::Base::NXPViewBase* arg)
		{
			((::System::Void(*)(::NPA::Editor::Base::NXPViewBase*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_SETVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_SHOW_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_DISMISS_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_DESTROY_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void NotifyDialogClosedOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPDIALOGBASE_NOTIFYDIALOGCLOSEDONCE_OFFSET))(nullptr);
		}

	};
}

