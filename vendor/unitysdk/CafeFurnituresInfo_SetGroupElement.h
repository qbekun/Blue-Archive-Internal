#pragma once
#include "unitysdk.h"

class UILabel;

#define CAFEFURNITURESINFO_SETGROUPELEMENT_GET_NAMELABEL_OFFSET UNITYSDK_OFFSET(0x225F530)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_SET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225F5E0)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_GET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225F5F0)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x225F600)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x225F6D0)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_GET_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x225F6E0)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x225F790)
#define CAFEFURNITURESINFO_SETGROUPELEMENT_GET_COMFORTLABEL_OFFSET UNITYSDK_OFFSET(0x225F980)

	inline static constexpr unsigned int CafeFurnituresInfo_SetGroupElement_TypeDefinitionIndex = 4567;

	class CafeFurnituresInfo_SetGroupElement : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		UILabel* setCountLabel; // 0x20
		UILabel* comfortLabel; // 0x28
		::System::Int64 _SetGroupId_k__BackingField; // 0x30

		UILabel* get_NameLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_GET_NAMELABEL_OFFSET))(nullptr);
		}

		::System::Void set_SetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_SET_SETGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_GET_SETGROUPID_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UILabel* get_SetCountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_GET_SETCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		UILabel* get_ComfortLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPELEMENT_GET_COMFORTLABEL_OFFSET))(nullptr);
		}

	};

