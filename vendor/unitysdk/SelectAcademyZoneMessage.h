#pragma once
#include "unitysdk.h"

#define SELECTACADEMYZONEMESSAGE_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E49B0)
#define SELECTACADEMYZONEMESSAGE_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x21E49C0)
#define SELECTACADEMYZONEMESSAGE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x21E49D0)
#define SELECTACADEMYZONEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E49E0)
#define SELECTACADEMYZONEMESSAGE_SET_SHOWLISTANI_OFFSET UNITYSDK_OFFSET(0x21E4A20)
#define SELECTACADEMYZONEMESSAGE_GET_SHOWLISTANI_OFFSET UNITYSDK_OFFSET(0x21E4A30)
#define SELECTACADEMYZONEMESSAGE_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E4A40)

	inline static constexpr unsigned int SelectAcademyZoneMessage_TypeDefinitionIndex = 4233;

	class SelectAcademyZoneMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ZoneId_k__BackingField; // 0x18
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::System::Boolean _ShowListAni_k__BackingField; // 0x28

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_ShowListAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_SET_SHOWLISTANI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowListAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_GET_SHOWLISTANI_OFFSET))(nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYZONEMESSAGE_GET_ZONEID_OFFSET))(nullptr);
		}

	};

