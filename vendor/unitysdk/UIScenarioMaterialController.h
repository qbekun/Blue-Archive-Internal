#pragma once
#include "unitysdk.h"

class UIScenarioBgControl;
class UIScenarioCharacters;
namespace UnityEngine { class Material; }
class UIColorSpineScenarioFilterPreset;

#define UISCENARIOMATERIALCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x27DECA0)
#define UISCENARIOMATERIALCONTROLLER_RELEASEMANUALMATERIAL_OFFSET UNITYSDK_OFFSET(0x27DED10)
#define UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTER_OFFSET UNITYSDK_OFFSET(0x27D2E40)
#define UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x27DF920)
#define UISCENARIOMATERIALCONTROLLER_RESETFILTER_OFFSET UNITYSDK_OFFSET(0x27D0110)
#define UISCENARIOMATERIALCONTROLLER_COLLECTMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x27DEED0)
#define UISCENARIOMATERIALCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27E0030)
#define UISCENARIOMATERIALCONTROLLER__CHANGECOLORFILTER_G__INCLUDECHARACTER|13_1_OFFSET UNITYSDK_OFFSET(0x27DF8D0)
#define UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTERBG_OFFSET UNITYSDK_OFFSET(0x27DF590)
#define UISCENARIOMATERIALCONTROLLER_RESETCOLORFILTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x27DFE30)
#define UISCENARIOMATERIALCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E0040)
#define UISCENARIOMATERIALCONTROLLER__CHANGECOLORFILTER_G__GETFILTER|13_0_OFFSET UNITYSDK_OFFSET(0x27DF240)
#define UISCENARIOMATERIALCONTROLLER_RESETCOLORFILTERBG_OFFSET UNITYSDK_OFFSET(0x27DFC30)
#define UISCENARIOMATERIALCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x27E0120)

	inline static constexpr unsigned int UIScenarioMaterialController_TypeDefinitionIndex = 7659;

	class UIScenarioMaterialController : public Il2CppObject
	{
	public:
		UIScenarioBgControl* bgControl; // 0x18
		UIScenarioCharacters* charControl; // 0x20
		::UnityEngine::Material* bgMaterial; // 0x28
		Il2CppObject* bgMaterialList; // 0x30
		Il2CppObject* charMaterialList; // 0x38
		::System::Boolean changeActive; // 0x40

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_INIT_OFFSET))(nullptr);
		}

		::System::Void ReleaseManualMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_RELEASEMANUALMATERIAL_OFFSET))(nullptr);
		}

		::System::Void ChangeColorFilter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTER_OFFSET))(str, nullptr);
		}

		::System::Void ChangeColorFilterCharacter(UIColorSpineScenarioFilterPreset* arg)
		{
			((::System::Void(*)(UIColorSpineScenarioFilterPreset*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTERCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_RESETFILTER_OFFSET))(nullptr);
		}

		::System::Void CollectMaterialList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_COLLECTMATERIALLIST_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean _ChangeColorFilter_g__IncludeCharacter|13_1(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER__CHANGECOLORFILTER_G__INCLUDECHARACTER|13_1_OFFSET))(str, nullptr);
		}

		::System::Void ChangeColorFilterBG(UIColorSpineScenarioFilterPreset* arg)
		{
			((::System::Void(*)(UIColorSpineScenarioFilterPreset*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_CHANGECOLORFILTERBG_OFFSET))(arg, nullptr);
		}

		::System::Void ResetColorFilterCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_RESETCOLORFILTERCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		UIColorSpineScenarioFilterPreset* _ChangeColorFilter_g__GetFilter|13_0(::System::String* str)
		{
			return ((UIColorSpineScenarioFilterPreset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER__CHANGECOLORFILTER_G__GETFILTER|13_0_OFFSET))(str, nullptr);
		}

		::System::Void ResetColorFilterBG()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_RESETCOLORFILTERBG_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMATERIALCONTROLLER_ONVALIDATE_OFFSET))(nullptr);
		}

	};

