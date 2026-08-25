#pragma once
#include "../../unitysdk.h"

namespace MXField::Core::Save { class FieldSaveRepository; }
namespace MXField::Core::Save { class FieldSaveSO; }

#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xE9E4A0)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ENTERFIELD_OFFSET UNITYSDK_OFFSET(0xE9F170)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SETDATEID_OFFSET UNITYSDK_OFFSET(0xE9B5B0)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_CHECKPASSEVENTCONTENTSTAGECONDITION_OFFSET UNITYSDK_OFFSET(0xE9E990)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xE9F640)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SET_DATEID_OFFSET UNITYSDK_OFFSET(0xE9F890)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE9F8A0)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SAVEPLAYABLEDATES_OFFSET UNITYSDK_OFFSET(0xE9F8B0)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9FB40)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ISEVENTCONTENTSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0xE9F320)
#define MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ONCLICKLOCKED_OFFSET UNITYSDK_OFFSET(0xE9FB50)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLobbyEnterButton_TypeDefinitionIndex = 10732;

	class UIFieldLobbyEnterButton : public Il2CppObject
	{
	public:
		::System::Int64 _DateId_k__BackingField; // 0x38

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void EnterField(::MXField::Core::Save::FieldSaveRepository* arg, ::MXField::Core::Save::FieldSaveSO* arg2)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ENTERFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SETDATEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPassEventContentStageCondition(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_CHECKPASSEVENTCONTENTSTAGECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedsToPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_DateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SET_DATEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Void SavePlayableDates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_SAVEPLAYABLEDATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsEventContentStageClear(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ISEVENTCONTENTSTAGECLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickLocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYENTERBUTTON_ONCLICKLOCKED_OFFSET))(nullptr);
		}

	};
}

