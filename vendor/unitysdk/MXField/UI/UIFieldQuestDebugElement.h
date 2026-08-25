#pragma once
#include "../../unitysdk.h"

class UILabel;
namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_UI_UIFIELDQUESTDEBUGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA63C0)
#define MXFIELD_UI_UIFIELDQUESTDEBUGELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEA63D0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldQuestDebugElement_TypeDefinitionIndex = 10753;

	class UIFieldQuestDebugElement : public Il2CppObject
	{
	public:
		UILabel* questNameLabel; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTDEBUGELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTDEBUGELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}

