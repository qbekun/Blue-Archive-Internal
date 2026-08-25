#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIField; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_UI_UIFIELDELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_UI_UIFIELDELEMENT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xE8C1D0)
#define MXFIELD_UI_UIFIELDELEMENT_STARTIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_UI_UIFIELDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8C1E0)
#define MXFIELD_UI_UIFIELDELEMENT_START_OFFSET UNITYSDK_OFFSET(0xE8C1F0)
#define MXFIELD_UI_UIFIELDELEMENT_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xE8C390)
#define MXFIELD_UI_UIFIELDELEMENT_HANDLEREFRESHUIDISPATCH_OFFSET UNITYSDK_OFFSET(0xE8C3A0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldElement_TypeDefinitionIndex = 10672;

	class UIFieldElement : public Il2CppObject
	{
	public:
		::MXField::UI::UIField* _Root_k__BackingField; // 0x18

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_REFRESH_OFFSET))(nullptr);
		}

		::MXField::UI::UIField* get_Root()
		{
			return ((::MXField::UI::UIField*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_GET_ROOT_OFFSET))(nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void set_Root(::MXField::UI::UIField* arg)
		{
			((::System::Void(*)(::MXField::UI::UIField*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_SET_ROOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleRefreshUIDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDELEMENT_HANDLEREFRESHUIDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

