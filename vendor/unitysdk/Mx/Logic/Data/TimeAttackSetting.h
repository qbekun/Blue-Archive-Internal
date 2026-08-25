#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_TIMEATTACKSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E7220)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_GEASID_OFFSET UNITYSDK_OFFSET(0x11E7230)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x11E7240)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_TIMEATTACKSERVERID_OFFSET UNITYSDK_OFFSET(0x11E7250)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x11E7260)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_TIMEATTACKSEASONID_OFFSET UNITYSDK_OFFSET(0x11E7270)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x11E7280)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x11E7290)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_TIMEATTACKSERVERID_OFFSET UNITYSDK_OFFSET(0x11E72A0)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_GET_TIMEATTACKSEASONID_OFFSET UNITYSDK_OFFSET(0x11E72B0)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x11E72C0)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_GEASID_OFFSET UNITYSDK_OFFSET(0x11E72D0)
#define MX_LOGIC_DATA_TIMEATTACKSETTING_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x11E72E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TimeAttackSetting_TypeDefinitionIndex = 13455;

	class TimeAttackSetting : public Il2CppObject
	{
	public:
		::System::Boolean _IsPractice_k__BackingField; // 0x10
		::System::Int64 _TimeAttackServerId_k__BackingField; // 0x18
		::System::Int64 _TimeAttackSeasonId_k__BackingField; // 0x20
		::System::String* _SecretCode_k__BackingField; // 0x28
		::System::Int64 _GeasId_k__BackingField; // 0x30
		::System::Int64 _DungeonId_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_GEASID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeAttackServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_TIMEATTACKSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Void set_TimeAttackSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_TIMEATTACKSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SecretCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_SECRETCODE_OFFSET))(str, nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_SECRETCODE_OFFSET))(nullptr);
		}

		::System::Void set_TimeAttackServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_TIMEATTACKSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TimeAttackSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_GET_TIMEATTACKSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_GeasId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_GEASID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMEATTACKSETTING_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

	};
}

