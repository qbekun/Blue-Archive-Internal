#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_PLATE_NXPUSERCONSENTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC5FA0)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPUserConsentItem_TypeDefinitionIndex = 26448;

	class NXPUserConsentItem : public Il2CppObject
	{
	public:
		::System::String* buttonType; // 0x10
		::System::String* externalButtonName; // 0x18
		::System::String* externalButtonUrl; // 0x20
		::System::String* subTitle; // 0x28
		::System::String* consentPopupNo; // 0x30
		::System::String* description; // 0x38
		::System::String* consentPopupPlacementCode; // 0x40
		::System::Boolean isAgreed; // 0x48
		::System::Boolean isEnableButton; // 0x49

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTITEM_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

