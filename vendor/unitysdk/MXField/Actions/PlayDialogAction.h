#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_PLAYDIALOGACTION_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xEF1FD0)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_SET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xEF1FE0)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF1FF0)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF2010)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEF2060)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEF2070)
#define MXFIELD_ACTIONS_PLAYDIALOGACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEF2080)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayDialogAction_TypeDefinitionIndex = 11101;

	class PlayDialogAction : public Il2CppObject
	{
	public:
		::System::Int64 _dialogId; // 0x30
		::System::Int64 _DialogId_k__BackingField; // 0x38
		::System::Boolean isSerialized; // 0x40

		::System::Int64 get_DialogId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_GET_DIALOGID_OFFSET))(nullptr);
		}

		::System::Void set_DialogId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_SET_DIALOGID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYDIALOGACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

