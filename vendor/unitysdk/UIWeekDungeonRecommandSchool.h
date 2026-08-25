#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIWEEKDUNGEONRECOMMANDSCHOOL_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xBCA730)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBCA850)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_ONSELECTBUFF_OFFSET UNITYSDK_OFFSET(0xBC8410)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_GET_BUTTONS_OFFSET UNITYSDK_OFFSET(0xBCA870)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_SETDATA_OFFSET UNITYSDK_OFFSET(0xBCA920)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0xBCAA40)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBCAC80)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCAC90)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_AWAKE_OFFSET UNITYSDK_OFFSET(0xBCAD10)
#define UIWEEKDUNGEONRECOMMANDSCHOOL__AWAKE_B__12_0_OFFSET UNITYSDK_OFFSET(0xBCADB0)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBCAED0)
#define UIWEEKDUNGEONRECOMMANDSCHOOL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBCAF60)

	inline static constexpr unsigned int UIWeekDungeonRecommandSchool_TypeDefinitionIndex = 8643;

	class UIWeekDungeonRecommandSchool : public Il2CppObject
	{
	public:
		UILabel* desriptionLabel; // 0xD8
		Il2CppObject* closeButtons; // 0xE0
		Il2CppObject* buttons; // 0xE8
		::System::Int64 _StageId_k__BackingField; // 0xF0
		Il2CppObject* Buffs; // 0xF8

		::System::Void SetDescription(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_SETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnSelectBuff(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_ONSELECTBUFF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Buttons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_GET_BUTTONS_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_SETBUTTONS_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__12_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL__AWAKE_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONRECOMMANDSCHOOL_GET_STAGEID_OFFSET))(nullptr);
		}

	};

