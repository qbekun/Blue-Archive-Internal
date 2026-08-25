#pragma once
#include "../../unitysdk.h"

class MXButton;
class UILabel;
namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_UI_UIFIELDSCENESELECTELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE90270)
#define MXFIELD_UI_UIFIELDSCENESELECTELEMENT_START_OFFSET UNITYSDK_OFFSET(0xE90710)
#define MXFIELD_UI_UIFIELDSCENESELECTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE90830)
#define MXFIELD_UI_UIFIELDSCENESELECTELEMENT_GET_SCENEID_OFFSET UNITYSDK_OFFSET(0xE8F520)
#define MXFIELD_UI_UIFIELDSCENESELECTELEMENT_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xE90840)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldSceneSelectElement_TypeDefinitionIndex = 10681;

	class UIFieldSceneSelectElement : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UILabel* idLabel; // 0x20
		UILabel* artLevelLabel; // 0x28
		UILabel* designLevelLabel; // 0x30
		::MXField::Shared::Data::FieldSceneInfo* fieldSceneInfo; // 0x38
		Il2CppObject* SeasonId; // 0x40

		::System::Void Initialize(::MXField::Shared::Data::FieldSceneInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECTELEMENT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECTELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECTELEMENT_GET_SCENEID_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSCENESELECTELEMENT_ONCLICKTHIS_OFFSET))(nullptr);
		}

	};
}

