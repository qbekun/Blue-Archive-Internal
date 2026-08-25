#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTINFODB_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xFFF5B0)
#define MX_GAMELOGIC_DBMODEL_EVENTINFODB_SET_IMAGENAMEHASH_OFFSET UNITYSDK_OFFSET(0xFFF5C0)
#define MX_GAMELOGIC_DBMODEL_EVENTINFODB_GET_IMAGENAMEHASH_OFFSET UNITYSDK_OFFSET(0xFFF5D0)
#define MX_GAMELOGIC_DBMODEL_EVENTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFF5E0)
#define MX_GAMELOGIC_DBMODEL_EVENTINFODB_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xFFF5F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventInfoDB_TypeDefinitionIndex = 12626;

	class EventInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventId_k__BackingField; // 0x10
		::System::UInt32 _ImageNameHash_k__BackingField; // 0x18

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTINFODB_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Void set_ImageNameHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTINFODB_SET_IMAGENAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ImageNameHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTINFODB_GET_IMAGENAMEHASH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTINFODB_SET_EVENTID_OFFSET))(arg, nullptr);
		}

	};
}

