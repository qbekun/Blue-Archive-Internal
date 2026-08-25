#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillTrigger; }

#define MX_MINIGAMECCG_CCGSKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DC60F0)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DC6100)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_BASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DC6110)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_PARAMETERDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1DC6120)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1DC6130)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_PROCEDURES_OFFSET UNITYSDK_OFFSET(0x1DC6140)
#define MX_MINIGAMECCG_CCGSKILLDATA_GET_ISPASSIVE_OFFSET UNITYSDK_OFFSET(0x1DBBD60)
#define MX_MINIGAMECCG_CCGSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6150)
#define MX_MINIGAMECCG_CCGSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6160)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSkillData_TypeDefinitionIndex = 20498;

	class CCGSkillData : public Il2CppObject
	{
	public:
		::System::Int64 skillId; // 0x18
		::System::Int32 basePower; // 0x20
		Il2CppObject* parameterDeclarations; // 0x28
		::MX::MinigameCCG::CCGSkillTrigger* trigger; // 0x30
		Il2CppObject* procedures; // 0x38

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_SKILLID_OFFSET))(nullptr);
		}

		::System::Int32 get_BasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_BASEPOWER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterDeclarations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_PARAMETERDECLARATIONS_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillTrigger* get_Trigger()
		{
			return (return (::MX::MinigameCCG::CCGSkillTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_TRIGGER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Procedures()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_PROCEDURES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPassive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_GET_ISPASSIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg, Il2CppObject* arg, ::MX::MinigameCCG::CCGSkillTrigger* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, Il2CppObject*, ::MX::MinigameCCG::CCGSkillTrigger*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLDATA_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

