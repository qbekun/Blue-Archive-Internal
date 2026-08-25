#pragma once
#include "../../unitysdk.h"

namespace MXField::Dialog { class FieldDialogBehavior; }
namespace MXField::Core { class IFieldInteractable; }

#define MXFIELD_DIALOG_FIELDDIALOGTRIGGER_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xECFB30)
#define MXFIELD_DIALOG_FIELDDIALOGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xECFBF0)
#define MXFIELD_DIALOG_FIELDDIALOGTRIGGER_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xECFC00)
#define MXFIELD_DIALOG_FIELDDIALOGTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xECFC70)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogTrigger_TypeDefinitionIndex = 10926;

	class FieldDialogTrigger : public Il2CppObject
	{
	public:
		::MXField::Dialog::FieldDialogBehavior* dialogBehavior; // 0x38

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGTRIGGER_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGTRIGGER_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGTRIGGER_AWAKE_OFFSET))(nullptr);
		}

	};
}

