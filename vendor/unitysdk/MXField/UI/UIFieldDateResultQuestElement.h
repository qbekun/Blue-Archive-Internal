#pragma once
#include "../../unitysdk.h"

class UILabel;
namespace MXField::Shared::Data { class FieldQuestInfo; }

#define MXFIELD_UI_UIFIELDDATERESULTQUESTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xE87660)
#define MXFIELD_UI_UIFIELDDATERESULTQUESTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE87720)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldDateResultQuestElement_TypeDefinitionIndex = 10652;

	class UIFieldDateResultQuestElement : public Il2CppObject
	{
	public:
		UILabel* questNameLabel; // 0x18

		::System::Void SetData(::MXField::Shared::Data::FieldQuestInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldQuestInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULTQUESTELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULTQUESTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

