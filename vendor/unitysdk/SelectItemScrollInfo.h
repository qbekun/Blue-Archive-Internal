#pragma once
#include "unitysdk.h"

class SelectedItemInfo;
namespace MX::Data { class RecipeResultInfo; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel; }

#define SELECTITEMSCROLLINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x272E1E0)
#define SELECTITEMSCROLLINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x272E240)
#define SELECTITEMSCROLLINFO_ADD_OFFSET UNITYSDK_OFFSET(0x272E280)
#define SELECTITEMSCROLLINFO_ADD_OFFSET UNITYSDK_OFFSET(0x272E490)
#define SELECTITEMSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x272E600)

	inline static constexpr unsigned int SelectItemScrollInfo_TypeDefinitionIndex = 7186;

	class SelectItemScrollInfo : public Il2CppObject
	{
	public:
		Il2CppObject* items; // 0x10

		SelectedItemInfo* get_Item(::System::Int32 arg)
		{
			return ((SelectedItemInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLINFO_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLINFO_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(::MX::Data::RecipeResultInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::RecipeResultInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLINFO_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Data::Excel::ProductSelectionGroupExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductSelectionGroupExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLINFO_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLINFO_.CTOR_OFFSET))(nullptr);
		}

	};

