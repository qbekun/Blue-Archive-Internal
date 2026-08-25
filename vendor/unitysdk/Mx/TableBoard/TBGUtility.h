#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGDiceRollResult; }
namespace MX::Data { class ITBGEncounterOptionInfo; }
namespace MX::Data { class ITBGObjectInfo; }

#define MX_TABLEBOARD_TBGUTILITY_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xF0E3C0)
#define MX_TABLEBOARD_TBGUTILITY_GETDICEROLLRESULT_OFFSET UNITYSDK_OFFSET(0xF0E230)
#define MX_TABLEBOARD_TBGUTILITY_HASENCOUNTER_OFFSET UNITYSDK_OFFSET(0xF058F0)
#define MX_TABLEBOARD_TBGUTILITY_CALCDICERUNAWAYRESULT_OFFSET UNITYSDK_OFFSET(0xF0E9C0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGUtility_TypeDefinitionIndex = 11222;

	class TBGUtility : public Il2CppObject
	{
	public:
		::System::Boolean IsSuccess(::MX::TableBoard::TBGDiceRollResult* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGDiceRollResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGUTILITY_ISSUCCESS_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGDiceRollResult* GetDiceRollResult(::MX::Data::ITBGEncounterOptionInfo* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Int32 arg3)
		{
			return ((::MX::TableBoard::TBGDiceRollResult*(*)(::MX::Data::ITBGEncounterOptionInfo*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGUTILITY_GETDICEROLLRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasEncounter(::MX::Data::ITBGObjectInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGUTILITY_HASENCOUNTER_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGDiceRollResult* CalcDiceRunAwayResult(::MX::Data::ITBGEncounterOptionInfo* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Int32 arg3)
		{
			return ((::MX::TableBoard::TBGDiceRollResult*(*)(::MX::Data::ITBGEncounterOptionInfo*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGUTILITY_CALCDICERUNAWAYRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

