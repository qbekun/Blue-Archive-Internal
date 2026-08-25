#pragma once
#include "../../unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
namespace MXField::UI { class UIFieldDateResultQuestView; }
class UIWidget;
class PortraitSpineCharacter;
namespace MXField::Shared::Data { class FieldDateInfo; }

#define MXFIELD_UI_UIFIELDDATERESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE86460)
#define MXFIELD_UI_UIFIELDDATERESULT___N__0_OFFSET UNITYSDK_OFFSET(0xE86960)
#define MXFIELD_UI_UIFIELDDATERESULT_SET_DATEINFO_OFFSET UNITYSDK_OFFSET(0xE869D0)
#define MXFIELD_UI_UIFIELDDATERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE869F0)
#define MXFIELD_UI_UIFIELDDATERESULT_GET_DATEINFO_OFFSET UNITYSDK_OFFSET(0xE86A60)
#define MXFIELD_UI_UIFIELDDATERESULT_SETMASTERY_OFFSET UNITYSDK_OFFSET(0xE86A70)
#define MXFIELD_UI_UIFIELDDATERESULT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xE86C60)
#define MXFIELD_UI_UIFIELDDATERESULT_GET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0xE86CF0)
#define MXFIELD_UI_UIFIELDDATERESULT_COLOADSPINE_OFFSET UNITYSDK_OFFSET(0xE86D00)
#define MXFIELD_UI_UIFIELDDATERESULT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xE86D90)
#define MXFIELD_UI_UIFIELDDATERESULT_START_OFFSET UNITYSDK_OFFSET(0xE86E20)
#define MXFIELD_UI_UIFIELDDATERESULT_SET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0xE86F50)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldDateResult_TypeDefinitionIndex = 10651;

	class UIFieldDateResult : public Il2CppObject
	{
	public:
		UITexture* masteryImage; // 0xE8
		UILabel* masteryLevelLabel; // 0xF0
		MXButton* confirmButton; // 0xF8
		::MXField::UI::UIFieldDateResultQuestView* questView; // 0x100
		UITexture* bgImage; // 0x108
		UIWidget* spineParentWidget; // 0x110
		UIWidget* spineTargetRenderQueueWidget; // 0x118
		PortraitSpineCharacter* _SpineCharacter_k__BackingField; // 0x120
		::MXField::Shared::Data::FieldDateInfo* _DateInfo_k__BackingField; // 0x128

		::System::Void Initialize(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT___N__0_OFFSET))(nullptr);
		}

		::System::Void set_DateInfo(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_SET_DATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldDateInfo* get_DateInfo()
		{
			return ((::MXField::Shared::Data::FieldDateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_GET_DATEINFO_OFFSET))(nullptr);
		}

		::System::Void SetMastery()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_SETMASTERY_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		PortraitSpineCharacter* get_SpineCharacter()
		{
			return ((PortraitSpineCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_GET_SPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_COLOADSPINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_START_OFFSET))(nullptr);
		}

		::System::Void set_SpineCharacter(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATERESULT_SET_SPINECHARACTER_OFFSET))(arg, nullptr);
		}

	};
}

