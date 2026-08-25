#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillLogType; }
namespace MX::MinigameCCG { class CCGSkillInvokerType; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }

#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1DCBCA0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_INVOKERTYPE_OFFSET UNITYSDK_OFFSET(0x1DCBCB0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1DCBCC0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x1DCBCD0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBCE0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_ISPASSIVE_OFFSET UNITYSDK_OFFSET(0x1DCBFC0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_TARGETIDS_OFFSET UNITYSDK_OFFSET(0x1DCBFD0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SkillActionLog_TypeDefinitionIndex = 20527;

	class CCGEvent_SkillActionLog : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillLogType* _LogType_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGSkillInvokerType* _InvokerType_k__BackingField; // 0x14
		::System::Int32 _SourceId_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _TargetIds_k__BackingField; // 0x20
		::System::Int32 _Amount_k__BackingField; // 0x28
		::System::Boolean _IsPassive_k__BackingField; // 0x2C

		::System::Int32 get_Amount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillInvokerType* get_InvokerType()
		{
			return (return (::MX::MinigameCCG::CCGSkillInvokerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_INVOKERTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_SOURCEID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillLogType* get_LogType()
		{
			return (return (::MX::MinigameCCG::CCGSkillLogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_LOGTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillLogType* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillLogType*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsPassive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_ISPASSIVE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TargetIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLACTIONLOG_GET_TARGETIDS_OFFSET))(nullptr);
		}

	};
}

