#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPProgressDialog; }

#define NPA_EDITOR_NXPPROGRESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9D92B90)
#define NPA_EDITOR_NXPPROGRESSDIALOG_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9D92D00)
#define NPA_EDITOR_NXPPROGRESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x9D92D70)
#define NPA_EDITOR_NXPPROGRESSDIALOG_START_OFFSET UNITYSDK_OFFSET(0x9D92E20)
#define NPA_EDITOR_NXPPROGRESSDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D93030)
#define NPA_EDITOR_NXPPROGRESSDIALOG_UPDATESPRITE_OFFSET UNITYSDK_OFFSET(0x9D92F80)
#define NPA_EDITOR_NXPPROGRESSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D93070)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPProgressDialog_TypeDefinitionIndex = 26308;

	class NXPProgressDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPProgressDialog* instance; // 0x0
		::Il2CppArray<::System::Object*>* sprites; // 0x18
		::System::Single time; // 0x20

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Boolean IsShow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_ISSHOW_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_HIDE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateSprite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_UPDATESPRITE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROGRESSDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

