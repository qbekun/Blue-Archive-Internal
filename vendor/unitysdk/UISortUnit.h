#pragma once
#include "unitysdk.h"

class MXToggle;
class OptionIconAndLabel;
class SortUIType;
class SortingRule;
class SortingRuleWrapper;

#define UISORTUNIT__SETSORTUNIT_G__GETLABELNAME|8_0_OFFSET UNITYSDK_OFFSET(0xB09F60)
#define UISORTUNIT_GETSORTUITYPE_OFFSET UNITYSDK_OFFSET(0xB0A330)
#define UISORTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0A380)
#define UISORTUNIT__SETSORTUNIT_G__ISEVENTCONTENTITEM|8_4_OFFSET UNITYSDK_OFFSET(0xB0A160)
#define UISORTUNIT__SETSORTUNIT_G__GETICONNAME|8_1_OFFSET UNITYSDK_OFFSET(0xB0A490)
#define UISORTUNIT__SETSORTUNIT_G__GETEVENTICONNAME|8_2_OFFSET UNITYSDK_OFFSET(0xB0A550)
#define UISORTUNIT_SETSUBSORTUNIT_OFFSET UNITYSDK_OFFSET(0xB06460)
#define UISORTUNIT_SETSORTUNIT_OFFSET UNITYSDK_OFFSET(0xB065F0)
#define UISORTUNIT__SETSORTUNIT_G__ISMAINSTORYCONQUEST|8_3_OFFSET UNITYSDK_OFFSET(0xB0A260)
#define UISORTUNIT_GETMXTOGGLE_OFFSET UNITYSDK_OFFSET(0xB06350)
#define UISORTUNIT__SETSORTUNIT_G__GETEVENTCONTENTITEMTYPE|8_5_OFFSET UNITYSDK_OFFSET(0xB0A390)

	inline static constexpr unsigned int UISortUnit_TypeDefinitionIndex = 8195;

	class UISortUnit : public Il2CppObject
	{
	public:
		MXToggle* toggle_IconCharStar; // 0x18
		OptionIconAndLabel* icon_CharStar; // 0x20
		MXToggle* toggle_LabelText; // 0x28
		OptionIconAndLabel* label_Text; // 0x30
		MXToggle* toggle_IconEvent; // 0x38
		OptionIconAndLabel* icon_Event; // 0x40
		MXToggle* toggle_IconSchool; // 0x48
		OptionIconAndLabel* icon_School; // 0x50

		::System::String* _SetSortUnit_g__GetLabelName|8_0(<>c__DisplayClass8_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__GETLABELNAME|8_0_OFFSET))(arg, nullptr);
		}

		SortUIType* GetSortUIType(SortingRule* arg)
		{
			return ((SortUIType*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT_GETSORTUITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetSortUnit_g__IsEventContentItem|8_4(::MX::Data::Excel::ItemExcel&* arg, <>c__DisplayClass8_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ItemExcel&*, <>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__ISEVENTCONTENTITEM|8_4_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* _SetSortUnit_g__GetIconName|8_1(<>c__DisplayClass8_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__GETICONNAME|8_1_OFFSET))(arg, nullptr);
		}

		::System::String* _SetSortUnit_g__GetEventIconName|8_2(<>c__DisplayClass8_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__GETEVENTICONNAME|8_2_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubSortUnit(SortingRuleWrapper* arg)
		{
			((::System::Void(*)(SortingRuleWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT_SETSUBSORTUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSortUnit(SortingRule* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(SortingRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT_SETSORTUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _SetSortUnit_g__IsMainStoryConquest|8_3(::MX::Data::Excel::ConquestEventExcel&* arg, <>c__DisplayClass8_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ConquestEventExcel&*, <>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__ISMAINSTORYCONQUEST|8_3_OFFSET))(arg, arg2, nullptr);
		}

		MXToggle* GetMXToggle(SortingRule* arg)
		{
			return ((MXToggle*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT_GETMXTOGGLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _SetSortUnit_g__GetEventContentItemType|8_5(<>c__DisplayClass8_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISORTUNIT__SETSORTUNIT_G__GETEVENTCONTENTITEMTYPE|8_5_OFFSET))(arg, nullptr);
		}

	};

