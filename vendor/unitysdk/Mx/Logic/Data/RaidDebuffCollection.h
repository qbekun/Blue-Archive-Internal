#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DebuffDescription; }

#define MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E14B0)
#define MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E14F0)
#define MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_TRYADD_OFFSET UNITYSDK_OFFSET(0x11E1860)
#define MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x11E19D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidDebuffCollection_TypeDefinitionIndex = 13440;

	class RaidDebuffCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Net::IPAddress
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAdd(::MX::Logic::Data::DebuffDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_TRYADD_OFFSET))(arg, nullptr);
		}

		::System::String* GetKeyForItem(::MX::Logic::Data::DebuffDescription* arg)
		{
			return ((::System::String*(*)(::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDEBUFFCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

