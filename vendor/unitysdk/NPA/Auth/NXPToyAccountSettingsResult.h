#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYACCOUNTSETTINGSRESULT_USERCANCELACTION_OFFSET UNITYSDK_OFFSET(0x9CDAF30)
#define NPA_AUTH_NXPTOYACCOUNTSETTINGSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDAFF0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAccountSettingsResult_TypeDefinitionIndex = 27510;

	class NXPToyAccountSettingsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Action* UserCancelAction(Il2CppObject* arg)
		{
			return (return (::System::Action*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYACCOUNTSETTINGSRESULT_USERCANCELACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYACCOUNTSETTINGSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

