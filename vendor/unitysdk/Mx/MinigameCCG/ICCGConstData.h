#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_MAXCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_STRIKERSWAPFRONTCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_TURNDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_STRIKERMAXEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_STARTDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_MAXHANDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_STARTCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCONSTDATA_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGConstData_TypeDefinitionIndex = 20470;

	class ICCGConstData : public Il2CppObject
	{
	public:
		::System::Int32 get_MaxCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_MAXCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerSwapFrontCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_STRIKERSWAPFRONTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnDrawCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_TURNDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerMaxEquipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_STRIKERMAXEQUIPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartDrawCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_STARTDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHandCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_MAXHANDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_STARTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONSTDATA_GET_TURNCOST_OFFSET))(nullptr);
		}

	};
}

