#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidMemberDescription; }

#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E19E0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E1CA0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E1CE0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E1D40)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETTOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2080)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETTOTALGROGGY_OFFSET UNITYSDK_OFFSET(0x11E2440)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2800)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2890)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_ADDDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2970)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_ADDGROGGY_OFFSET UNITYSDK_OFFSET(0x11E2BD0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_SETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2E30)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E3080)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPSERT_OFFSET UNITYSDK_OFFSET(0x11E31B0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPSERTALL_OFFSET UNITYSDK_OFFSET(0x11E1D90)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETRANK_OFFSET UNITYSDK_OFFSET(0x11E3350)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_TAKEGREATESTDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E3530)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_TAKEGREATESTDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E3690)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x11E37D0)
#define MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GET_RAIDDAMAGES_OFFSET UNITYSDK_OFFSET(0x11E3890)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidMemberCollection_TypeDefinitionIndex = 13443;

	class RaidMemberCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZInputStream
	{
	public:
		::System::Int64 get_TotalDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GET_TOTALDAMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalDamage(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETTOTALDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalGroggy(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETTOTALGROGGY_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetDamage(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetDamage(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AddDamage(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_ADDDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean AddGroggy(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_ADDGROGGY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SetDamage(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_SETDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPDATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Upsert(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPSERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpsertAll(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_UPSERTALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRank(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TakeGreatestDamage(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_TAKEGREATESTDAMAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TakeGreatestDamage(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_TAKEGREATESTDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetKeyForItem(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidDamages()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERCOLLECTION_GET_RAIDDAMAGES_OFFSET))(nullptr);
		}

	};
}

