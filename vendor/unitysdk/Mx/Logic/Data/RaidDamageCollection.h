#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidDamage; }

#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x11DE7B0)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_MAXINDEX_OFFSET UNITYSDK_OFFSET(0x11DE800)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DEB00)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_CURRENTDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DEDB0)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_TOTALGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11DEEF0)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_CURRENTGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11DF1C0)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DF240)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DF280)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_TRYGET_OFFSET UNITYSDK_OFFSET(0x11DEE30)
#define MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_UPSERT_OFFSET UNITYSDK_OFFSET(0x11DF620)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidDamageCollection_TypeDefinitionIndex = 13437;

	class RaidDamageCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream
	{
	public:
		::System::Int32 GetKeyForItem(::MX::Logic::Data::RaidDamage* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_MAXINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_TOTALDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_CURRENTDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_TOTALGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_GET_CURRENTGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(::System::Int32 arg, ::MX::Logic::Data::RaidDamage&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MX::Logic::Data::RaidDamage&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_TRYGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Upsert(::MX::Logic::Data::RaidDamage* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGECOLLECTION_UPSERT_OFFSET))(arg, nullptr);
		}

	};
}

