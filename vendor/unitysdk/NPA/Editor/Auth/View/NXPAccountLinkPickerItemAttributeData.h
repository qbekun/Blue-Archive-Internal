#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMATTRIBUTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB2170)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkPickerItemAttributeData_TypeDefinitionIndex = 27185;

	class NXPAccountLinkPickerItemAttributeData : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::String* value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMATTRIBUTEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

