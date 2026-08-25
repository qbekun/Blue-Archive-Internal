#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class ChangeSkillCardToCopiedCardEffect; }
class CostChangeInfo;

#define COSTCHANGEINFO_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1381980)
#define COSTCHANGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1384670)
#define COSTCHANGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1382900)

	inline static constexpr unsigned int CostChangeInfo_TypeDefinitionIndex = 14392;

	class CostChangeInfo : public Il2CppObject
	{
	public:
		::System::Int64 CostChange; // 0x10
		::System::Int64 CostChangeCoefficient; // 0x18
		::System::Int64 ExtraCostChange; // 0x20
		::System::Int64 ExtraCostChangeCoefficient; // 0x28
		::Il2CppArray<::System::Object*>* OverrideCost; // 0x30
		::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect* ChangeSkillCardToCopiedCardEffect; // 0x38

		CostChangeInfo* get_Default()
		{
			return ((CostChangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTCHANGEINFO_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTCHANGEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTCHANGEINFO_CLEAR_OFFSET))(nullptr);
		}

	};

