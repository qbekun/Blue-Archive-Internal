#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGHexaObjectDB; }

#define MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GET_ACTIVEOBJECTDB_OFFSET UNITYSDK_OFFSET(0xF03A20)
#define MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xF03A30)
#define MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF03A50)
#define MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF03A60)
#define MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF03B90)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaMapReachablity_TypeDefinitionIndex = 11194;

	class TBGHexaMapReachablity : public Il2CppObject
	{
	public:
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x10
		::MX::TableBoard::TBGHexaObjectDB* _ActiveObjectDB_k__BackingField; // 0x20

		::MX::TableBoard::TBGHexaObjectDB* get_ActiveObjectDB()
		{
			return ((::MX::TableBoard::TBGHexaObjectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GET_ACTIVEOBJECTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexLocation* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::MX::TableBoard::TBGHexaObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPREACHABLITY_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

