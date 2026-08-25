#pragma once
#include "../../../unitysdk.h"

class UITexture;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MXField::Shared::Data { class FieldEvidenceInfo; }

#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xEAAB80)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETENABLE_OFFSET UNITYSDK_OFFSET(0xEAAB90)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xEAAC40)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xEAAC50)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_GET_EVIDENCEINFO_OFFSET UNITYSDK_OFFSET(0xEAAD30)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xEAAD40)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SET_EVIDENCEINFO_OFFSET UNITYSDK_OFFSET(0xEAADC0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_START_OFFSET UNITYSDK_OFFSET(0xEAADD0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAAEF0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xEAAF00)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEAAF80)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEAAFC0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0xEAACC0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIEvidenceElement_TypeDefinitionIndex = 10776;

	class UIEvidenceElement : public Il2CppObject
	{
	public:
		::System::Single disableAlpha; // 0x0
		UITexture* icon; // 0x18
		MXButton* button; // 0x20
		::UnityEngine::GameObject* selectedObject; // 0x28
		::UnityEngine::GameObject* disableObject; // 0x30
		::MXField::Shared::Data::FieldEvidenceInfo* _EvidenceInfo_k__BackingField; // 0x38
		::System::Boolean _Enabled_k__BackingField; // 0x40

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldEvidenceInfo* get_EvidenceInfo()
		{
			return ((::MXField::Shared::Data::FieldEvidenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_GET_EVIDENCEINFO_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_EvidenceInfo(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SET_EVIDENCEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void HandleSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENT_HANDLESELECT_OFFSET))(nullptr);
		}

	};
}

