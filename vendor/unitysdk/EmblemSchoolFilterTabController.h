#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }
class UIFilterUnit;

#define EMBLEMSCHOOLFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xB0B8A0)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0B8B0)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xB0B980)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB0BAF0)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xB0BDC0)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0BF20)
#define EMBLEMSCHOOLFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xB0BF60)

	inline static constexpr unsigned int EmblemSchoolFilterTabController_TypeDefinitionIndex = 8199;

	class EmblemSchoolFilterTabController : public ::MX::Logic::BattleEntities::AccumulateEffectProcessor
	{
	public:
		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::School* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::School* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::School*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMSCHOOLFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

