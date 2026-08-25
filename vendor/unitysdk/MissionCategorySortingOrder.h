#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }

#define MISSIONCATEGORYSORTINGORDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D90)
#define MISSIONCATEGORYSORTINGORDER_GETORDER_OFFSET UNITYSDK_OFFSET(0x1EB5E20)
#define MISSIONCATEGORYSORTINGORDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB5F90)

	inline static constexpr unsigned int MissionCategorySortingOrder_TypeDefinitionIndex = 1723;

	class MissionCategorySortingOrder : public Il2CppObject
	{
	public:
		Il2CppObject* sortingOrder; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCATEGORYSORTINGORDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetOrder(::FlatData::MissionCategory* arg)
		{
			return ((::System::Int32(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCATEGORYSORTINGORDER_GETORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCATEGORYSORTINGORDER_INITIALIZE_OFFSET))(nullptr);
		}

	};

