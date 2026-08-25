#pragma once
#include "../../unitysdk.h"

class UIScrollView;
class UIGrid;
namespace MXField::UI { class UIFieldDateResultQuestElement; }

#define MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_SETDATA_OFFSET UNITYSDK_OFFSET(0xE86520)
#define MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0xE87730)
#define MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xE87830)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldDateResultQuestView_TypeDefinitionIndex = 10653;

	class UIFieldDateResultQuestView : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIGrid* grid; // 0x20
		::MXField::UI::UIFieldDateResultQuestElement* elementPrefab; // 0x28
		Il2CppObject* elements; // 0x30

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CreateElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_CREATEELEMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULTQUESTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

