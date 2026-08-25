#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
class UIFilterUnit;

#define UICHARACTERFILTERBULLETTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEF910)
#define UICHARACTERFILTERBULLETTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEFA80)
#define UICHARACTERFILTERBULLETTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEFA90)
#define UICHARACTERFILTERBULLETTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEFB60)
#define UICHARACTERFILTERBULLETTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEFE30)
#define UICHARACTERFILTERBULLETTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEFE40)
#define UICHARACTERFILTERBULLETTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEFF50)

	inline static constexpr unsigned int UICharacterFilterBulletTabController_TypeDefinitionIndex = 8120;

	class UICharacterFilterBulletTabController : public ::MX::Logic::Actions::NewSkillAction
	{
	public:
		::Il2CppArray<::System::Object*>* bulletIconProperties; // 0x60

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::BulletType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::BulletType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::BulletType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERBULLETTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

