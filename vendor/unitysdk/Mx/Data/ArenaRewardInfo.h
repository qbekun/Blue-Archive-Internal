#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ArenaRewardExcel; }
namespace MX::Data::Excel { class ArenaSeasonCloseRewardExcel; }

#define MX_DATA_ARENAREWARDINFO_GET_TOPRANK_OFFSET UNITYSDK_OFFSET(0x180FB50)
#define MX_DATA_ARENAREWARDINFO_SET_TOPRANK_OFFSET UNITYSDK_OFFSET(0x180FB60)
#define MX_DATA_ARENAREWARDINFO_GET_BOTTOMRANK_OFFSET UNITYSDK_OFFSET(0x180FB70)
#define MX_DATA_ARENAREWARDINFO_SET_BOTTOMRANK_OFFSET UNITYSDK_OFFSET(0x180FB80)
#define MX_DATA_ARENAREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180FB90)
#define MX_DATA_ARENAREWARDINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180FBA0)
#define MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180FBB0)
#define MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180FC30)
#define MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180FDD0)

namespace MX::Data
{
	inline static constexpr unsigned int ArenaRewardInfo_TypeDefinitionIndex = 15712;

	class ArenaRewardInfo : public Il2CppObject
	{
	public:
		::System::Int32 _TopRank_k__BackingField; // 0x10
		::System::Int32 _BottomRank_k__BackingField; // 0x14
		Il2CppObject* _Rewards_k__BackingField; // 0x18

		::System::Int32 get_TopRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_GET_TOPRANK_OFFSET))(nullptr);
		}

		::System::Void set_TopRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_SET_TOPRANK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BottomRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_GET_BOTTOMRANK_OFFSET))(nullptr);
		}

		::System::Void set_BottomRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_SET_BOTTOMRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ArenaRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ArenaRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ArenaSeasonCloseRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ArenaSeasonCloseRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENAREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

