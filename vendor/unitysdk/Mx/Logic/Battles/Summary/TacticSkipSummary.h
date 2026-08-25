#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13B1930)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_GROUP02HEXAUNITID_OFFSET UNITYSDK_OFFSET(0x13B1940)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_GROUP01HEXAUNITID_OFFSET UNITYSDK_OFFSET(0x13B1950)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_GROUP02HEXAUNITID_OFFSET UNITYSDK_OFFSET(0x13B1960)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_GROUP01HEXAUNITID_OFFSET UNITYSDK_OFFSET(0x13B1970)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B1980)
#define MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13B1990)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int TacticSkipSummary_TypeDefinitionIndex = 14486;

	class TacticSkipSummary : public Il2CppObject
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x10
		::System::Int64 _Group01HexaUnitId_k__BackingField; // 0x18
		::System::Int64 _Group02HexaUnitId_k__BackingField; // 0x20

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Group02HexaUnitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_GROUP02HEXAUNITID_OFFSET))(nullptr);
		}

		::System::Int64 get_Group01HexaUnitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_GET_GROUP01HEXAUNITID_OFFSET))(nullptr);
		}

		::System::Void set_Group02HexaUnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_GROUP02HEXAUNITID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Group01HexaUnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_GROUP01HEXAUNITID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_TACTICSKIPSUMMARY_SET_STAGEID_OFFSET))(arg, nullptr);
		}

	};
}

