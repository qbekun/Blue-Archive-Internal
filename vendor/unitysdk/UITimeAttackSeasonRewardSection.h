#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
class UISmallParcelCard;

#define UITIMEATTACKSEASONREWARDSECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0xB6A890)
#define UITIMEATTACKSEASONREWARDSECTION_SETPARCELS_OFFSET UNITYSDK_OFFSET(0xB6A9A0)
#define UITIMEATTACKSEASONREWARDSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6AE20)
#define UITIMEATTACKSEASONREWARDSECTION_GET_PARCELS_OFFSET UNITYSDK_OFFSET(0xB6AD70)
#define UITIMEATTACKSEASONREWARDSECTION_CREATEPARCELS_OFFSET UNITYSDK_OFFSET(0xB6AC00)

	inline static constexpr unsigned int UITimeAttackSeasonRewardSection_TypeDefinitionIndex = 8447;

	class UITimeAttackSeasonRewardSection : public ScanningFunction
	{
	public:
		UILabel* MinPointLabel; // 0x28
		UIGrid* RewardGrid; // 0x30
		UISmallParcelCard* ParcelPref; // 0x38
		Il2CppObject* _Parcels; // 0x40

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKSEASONREWARDSECTION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKSEASONREWARDSECTION_SETPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKSEASONREWARDSECTION_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Parcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKSEASONREWARDSECTION_GET_PARCELS_OFFSET))(nullptr);
		}

		::System::Void CreateParcels(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKSEASONREWARDSECTION_CREATEPARCELS_OFFSET))(arg, nullptr);
		}

	};

