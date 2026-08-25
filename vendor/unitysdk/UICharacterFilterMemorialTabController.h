#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
class CharacterMemorialFilterType;
class UIFilterUnit;

#define UICHARACTERFILTERMEMORIALTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF18E0)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF18F0)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF1930)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF1A00)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF1A10)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF1B70)
#define UICHARACTERFILTERMEMORIALTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF1E40)

	inline static constexpr unsigned int UICharacterFilterMemorialTabController_TypeDefinitionIndex = 8130;

	class UICharacterFilterMemorialTabController : public ::MX::Logic::BattleEntities::BattleEntity
	{
	public:
		::Il2CppArray<::System::Object*>* memorialIconProperties; // 0x60
		::UnityEngine::Material* grayScaleMaterial; // 0x68

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(CharacterMemorialFilterType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(CharacterMemorialFilterType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, CharacterMemorialFilterType* arg2)
		{
			((::System::Void(*)(::System::Boolean, CharacterMemorialFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERMEMORIALTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

	};

