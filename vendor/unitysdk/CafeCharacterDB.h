#pragma once
#include "unitysdk.h"

class CafeCharacterDB;

#define CAFECHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE5700)
#define CAFECHARACTERDB_SET_ISSUMMON_OFFSET UNITYSDK_OFFSET(0xFE5710)
#define CAFECHARACTERDB_SET_LASTINTERACTTIME_OFFSET UNITYSDK_OFFSET(0xFE5720)
#define CAFECHARACTERDB_GET_LASTINTERACTTIME_OFFSET UNITYSDK_OFFSET(0xFE5730)
#define CAFECHARACTERDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE5480)
#define CAFECHARACTERDB_GET_ISSUMMON_OFFSET UNITYSDK_OFFSET(0xFE5740)

	inline static constexpr unsigned int CafeCharacterDB_TypeDefinitionIndex = 12496;

	class CafeCharacterDB : public Il2CppObject
	{
	public:
		::System::Boolean _IsSummon_k__BackingField; // 0x20
		::System::DateTime* _LastInteractTime_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsSummon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_SET_ISSUMMON_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastInteractTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_SET_LASTINTERACTTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastInteractTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_GET_LASTINTERACTTIME_OFFSET))(nullptr);
		}

		CafeCharacterDB* Clone()
		{
			return ((CafeCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSummon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERDB_GET_ISSUMMON_OFFSET))(nullptr);
		}

	};

