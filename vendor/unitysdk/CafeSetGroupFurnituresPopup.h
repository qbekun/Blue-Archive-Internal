#pragma once
#include "unitysdk.h"

class CafeSetGroupFurnituresList;
class UILabel;
class MXButton;

#define CAFESETGROUPFURNITURESPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x225FFA0)
#define CAFESETGROUPFURNITURESPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2260050)
#define CAFESETGROUPFURNITURESPOPUP__REFRESH_B__13_0_OFFSET UNITYSDK_OFFSET(0x2260080)
#define CAFESETGROUPFURNITURESPOPUP__AWAKE_B__11_0_OFFSET UNITYSDK_OFFSET(0x22600D0)
#define CAFESETGROUPFURNITURESPOPUP__REFRESH_B__13_2_OFFSET UNITYSDK_OFFSET(0x22601F0)
#define CAFESETGROUPFURNITURESPOPUP_GET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x2260240)
#define CAFESETGROUPFURNITURESPOPUP_REFRESH_OFFSET UNITYSDK_OFFSET(0x2260250)
#define CAFESETGROUPFURNITURESPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2260A70)
#define CAFESETGROUPFURNITURESPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2260A80)
#define CAFESETGROUPFURNITURESPOPUP_SET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x2260C20)
#define CAFESETGROUPFURNITURESPOPUP_GET_LIST_OFFSET UNITYSDK_OFFSET(0x22609E0)

	inline static constexpr unsigned int CafeSetGroupFurnituresPopup_TypeDefinitionIndex = 4574;

	class CafeSetGroupFurnituresPopup : public Il2CppObject
	{
	public:
		CafeSetGroupFurnituresList* list; // 0x18
		::System::Int64 _SetGroupId_k__BackingField; // 0x20
		Il2CppObject* closeButtons; // 0x28
		UILabel* setGroupName; // 0x30
		UILabel* setGroupCount; // 0x38
		UILabel* setGroupBonus; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Boolean _Refresh_b__13_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP__REFRESH_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__11_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP__AWAKE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Refresh_b__13_2(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP__REFRESH_B__13_2_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_GET_SETGROUPID_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_SetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_SET_SETGROUPID_OFFSET))(arg, nullptr);
		}

		CafeSetGroupFurnituresList* get_List()
		{
			return ((CafeSetGroupFurnituresList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESPOPUP_GET_LIST_OFFSET))(nullptr);
		}

	};

