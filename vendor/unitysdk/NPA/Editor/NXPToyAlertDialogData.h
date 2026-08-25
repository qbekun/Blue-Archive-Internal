#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXPTOYALERTDIALOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D93970)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyAlertDialogData_TypeDefinitionIndex = 26312;

	class NXPToyAlertDialogData : public Il2CppObject
	{
	public:
		::System::String* confirmButtonText; // 0x10
		::System::Action* confirmAction; // 0x18
		::System::String* cancelButtonText; // 0x20
		::System::Action* cancelAction; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOGDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

