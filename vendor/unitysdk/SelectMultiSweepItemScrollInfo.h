#pragma once
#include "unitysdk.h"

class SelectedMultiSweepItemInfo;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define SELECTMULTISWEEPITEMSCROLLINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x270BA30)
#define SELECTMULTISWEEPITEMSCROLLINFO_ADD_OFFSET UNITYSDK_OFFSET(0x270BC60)
#define SELECTMULTISWEEPITEMSCROLLINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x270BBA0)
#define SELECTMULTISWEEPITEMSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x270BDC0)

	inline static constexpr unsigned int SelectMultiSweepItemScrollInfo_TypeDefinitionIndex = 7118;

	class SelectMultiSweepItemScrollInfo : public Il2CppObject
	{
	public:
		Il2CppObject* items; // 0x10

		SelectedMultiSweepItemInfo* get_Item(::System::Int32 arg)
		{
			return ((SelectedMultiSweepItemInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMSCROLLINFO_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::Parcel::ParcelInfo* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMSCROLLINFO_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMSCROLLINFO_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMSCROLLINFO_.CTOR_OFFSET))(nullptr);
		}

	};

