#pragma once
#include "unitysdk.h"

namespace MX::Data { class RecipeResultInfo; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel; }
class SelectedItemInfo;

#define SELECTEDITEMINFO_GET_ISPICKED_OFFSET UNITYSDK_OFFSET(0x272E680)
#define SELECTEDITEMINFO_SET_ISPICKED_OFFSET UNITYSDK_OFFSET(0x272E690)
#define SELECTEDITEMINFO_GET_ONPICKED_OFFSET UNITYSDK_OFFSET(0x272E6A0)
#define SELECTEDITEMINFO_SET_ONPICKED_OFFSET UNITYSDK_OFFSET(0x272E6B0)
#define SELECTEDITEMINFO_GET_HANDLEUIACTION_OFFSET UNITYSDK_OFFSET(0x272E6C0)
#define SELECTEDITEMINFO_SET_HANDLEUIACTION_OFFSET UNITYSDK_OFFSET(0x272E6D0)
#define SELECTEDITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x272E360)
#define SELECTEDITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x272E6E0)
#define SELECTEDITEMINFO_ONPICKED_OFFSET UNITYSDK_OFFSET(0x272E810)
#define SELECTEDITEMINFO__.CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x272E840)
#define SELECTEDITEMINFO__.CTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x272E870)

	inline static constexpr unsigned int SelectedItemInfo_TypeDefinitionIndex = 7187;

	class SelectedItemInfo : public Il2CppObject
	{
	public:
		::System::Boolean _IsPicked_k__BackingField; // 0x30
		Il2CppObject* _onPicked_k__BackingField; // 0x38
		Il2CppObject* _HandleUIAction_k__BackingField; // 0x40

		::System::Boolean get_IsPicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_GET_ISPICKED_OFFSET))(nullptr);
		}

		::System::Void set_IsPicked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_SET_ISPICKED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_onPicked()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_GET_ONPICKED_OFFSET))(nullptr);
		}

		::System::Void set_onPicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_SET_ONPICKED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HandleUIAction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_GET_HANDLEUIACTION_OFFSET))(nullptr);
		}

		::System::Void set_HandleUIAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_SET_HANDLEUIACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::RecipeResultInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::RecipeResultInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ProductSelectionGroupExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductSelectionGroupExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnPicked(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO_ONPICKED_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__12_0(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO__.CTOR_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__13_0(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDITEMINFO__.CTOR_B__13_0_OFFSET))(arg, nullptr);
		}

	};

