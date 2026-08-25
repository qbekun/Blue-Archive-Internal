#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_INPAYWAITDIALOGOBJECT_SETCANCELACTION_OFFSET UNITYSDK_OFFSET(0x9D96140)
#define NPA_EDITOR_INPAYWAITDIALOGOBJECT_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9D96150)
#define NPA_EDITOR_INPAYWAITDIALOGOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D961D0)
#define NPA_EDITOR_INPAYWAITDIALOGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D96250)

namespace NPA::Editor
{
	inline static constexpr unsigned int InpayWaitDialogObject_TypeDefinitionIndex = 26320;

	class InpayWaitDialogObject : public Il2CppObject
	{
	public:
		::System::Action* cancelAction; // 0x18

		::System::Void setCancelAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOGOBJECT_SETCANCELACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOGOBJECT_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOGOBJECT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOGOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

