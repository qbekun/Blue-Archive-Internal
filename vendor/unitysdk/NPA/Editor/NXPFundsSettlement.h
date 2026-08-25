#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPPolicy; }

#define NPA_EDITOR_NXPFUNDSSETTLEMENT_RESOLVESETTLEMENTFUND_OFFSET UNITYSDK_OFFSET(0x9D7DDE0)
#define NPA_EDITOR_NXPFUNDSSETTLEMENT_FINDSETTLEMENTFUNDPOLICY_OFFSET UNITYSDK_OFFSET(0x9D7E150)
#define NPA_EDITOR_NXPFUNDSSETTLEMENT_AGREESETTLEMENTFUNDPOLICY_OFFSET UNITYSDK_OFFSET(0x9D7E280)
#define NPA_EDITOR_NXPFUNDSSETTLEMENT_UPDATESETTLEMENTFUNDPOLICY_OFFSET UNITYSDK_OFFSET(0x9D7E4E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPFundsSettlement_TypeDefinitionIndex = 26256;

	class NXPFundsSettlement : public Il2CppObject
	{
	public:
		::System::Void ResolveSettlementFund(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFUNDSSETTLEMENT_RESOLVESETTLEMENTFUND_OFFSET))(str, str, arg, arg, nullptr);
		}

		::NPA::NXPPolicy* FindSettlementFundPolicy(Il2CppObject* arg)
		{
			return (return (::NPA::NXPPolicy*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFUNDSSETTLEMENT_FINDSETTLEMENTFUNDPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void AgreeSettlementFundPolicy(::System::String* str, ::System::String* str, LOCALE* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, LOCALE*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFUNDSSETTLEMENT_AGREESETTLEMENTFUNDPOLICY_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void UpdateSettlementFundPolicy(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFUNDSSETTLEMENT_UPDATESETTLEMENTFUNDPOLICY_OFFSET))(str, arg, nullptr);
		}

	};
}

