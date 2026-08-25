#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidBossResult; }

#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x11DF7A0)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_LASTINDEX_OFFSET UNITYSDK_OFFSET(0x11DF880)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DFC70)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_CURRENTDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DFFF0)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E0200)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_CURRENTGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E0580)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALGROGGYCOUNT_OFFSET UNITYSDK_OFFSET(0x11E0690)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E09A0)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E09E0)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_TRYGET_OFFSET UNITYSDK_OFFSET(0x11E0100)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_UPSERT_OFFSET UNITYSDK_OFFSET(0x11E0E40)
#define MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_TORAIDDAMAGEENUMERABLE_OFFSET UNITYSDK_OFFSET(0x11E1290)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidBossResultCollection_TypeDefinitionIndex = 13439;

	class RaidBossResultCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream
	{
	public:
		::System::Int32 GetKeyForItem(::MX::Logic::Data::RaidBossResult* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Data::RaidBossResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_LASTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_CURRENTDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_CURRENTGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalGroggyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_GET_TOTALGROGGYCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(::System::Int32 arg, ::MX::Logic::Data::RaidBossResult&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MX::Logic::Data::RaidBossResult&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_TRYGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Upsert(::MX::Logic::Data::RaidBossResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidBossResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_UPSERT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToRaidDamageEnumerable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULTCOLLECTION_TORAIDDAMAGEENUMERABLE_OFFSET))(nullptr);
		}

	};
}

