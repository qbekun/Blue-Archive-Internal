#pragma once
#include "unitysdk.h"

class GuideMissionArchiveItem;

#define GUIDEMISSIONARCHIVEITEMGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x246CA50)
#define GUIDEMISSIONARCHIVEITEMGROUP_GETITEM_OFFSET UNITYSDK_OFFSET(0x246CAE0)
#define GUIDEMISSIONARCHIVEITEMGROUP_ADDITEM_OFFSET UNITYSDK_OFFSET(0x246CBA0)
#define GUIDEMISSIONARCHIVEITEMGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x246CC40)
#define GUIDEMISSIONARCHIVEITEMGROUP_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x246CAD0)

	inline static constexpr unsigned int GuideMissionArchiveItemGroup_TypeDefinitionIndex = 5633;

	class GuideMissionArchiveItemGroup : public Il2CppObject
	{
	public:
		Il2CppObject* items; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEMGROUP_.CTOR_OFFSET))(nullptr);
		}

		GuideMissionArchiveItem* GetItem(::System::Int32 arg)
		{
			return ((GuideMissionArchiveItem*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEMGROUP_GETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void AddItem(GuideMissionArchiveItem* arg)
		{
			((::System::Void(*)(GuideMissionArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEMGROUP_ADDITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEMGROUP_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEMGROUP_GET_CAPACITY_OFFSET))(nullptr);
		}

	};

