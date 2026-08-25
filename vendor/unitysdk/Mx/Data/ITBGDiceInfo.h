#pragma once
#include "../../unitysdk.h"

#define MX_DATA_ITBGDICEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGDICEINFO_GET_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGDICEINFO_GET_PROBMODIFIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGDICEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGDICEINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGDICEINFO_GET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGDiceInfo_TypeDefinitionIndex = 16231;

	class ITBGDiceInfo : public Il2CppObject
	{
	public:
		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_DICEGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProbModifies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_PROBMODIFIES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGDICEINFO_GET_DICERESULT_OFFSET))(nullptr);
		}

	};
}

