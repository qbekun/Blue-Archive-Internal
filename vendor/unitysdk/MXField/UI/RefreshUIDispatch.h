#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIField; }

#define MXFIELD_UI_REFRESHUIDISPATCH_GET_UI_OFFSET UNITYSDK_OFFSET(0xE85650)
#define MXFIELD_UI_REFRESHUIDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xE85660)

namespace MXField::UI
{
	inline static constexpr unsigned int RefreshUIDispatch_TypeDefinitionIndex = 10642;

	class RefreshUIDispatch : public Il2CppObject
	{
	public:
		::MXField::UI::UIField* _UI_k__BackingField; // 0x18

		::MXField::UI::UIField* get_UI()
		{
			return ((::MXField::UI::UIField*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_REFRESHUIDISPATCH_GET_UI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::UI::UIField* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MXField::UI::UIField*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_REFRESHUIDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

