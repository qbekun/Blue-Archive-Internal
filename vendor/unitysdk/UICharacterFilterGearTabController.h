#pragma once
#include "unitysdk.h"

class CharacterGearFilterType;
class UIFilterUnit;

#define UICHARACTERFILTERGEARTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF12A0)
#define UICHARACTERFILTERGEARTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF12B0)
#define UICHARACTERFILTERGEARTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF12C0)
#define UICHARACTERFILTERGEARTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF1590)
#define UICHARACTERFILTERGEARTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF1660)
#define UICHARACTERFILTERGEARTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF16A0)
#define UICHARACTERFILTERGEARTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF1770)

	inline static constexpr unsigned int UICharacterFilterGearTabController_TypeDefinitionIndex = 8128;

	class UICharacterFilterGearTabController : public <>c__DisplayClass146_0
	{
	public:
		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, CharacterGearFilterType* arg2)
		{
			((::System::Void(*)(::System::Boolean, CharacterGearFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(CharacterGearFilterType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(CharacterGearFilterType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERGEARTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

	};

