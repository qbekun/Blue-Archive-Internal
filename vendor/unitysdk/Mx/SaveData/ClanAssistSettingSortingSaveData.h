#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CLANASSISTSETTINGSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9DD0)
#define MX_SAVEDATA_CLANASSISTSETTINGSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9E40)

namespace MX::SaveData
{
	inline static constexpr unsigned int ClanAssistSettingSortingSaveData_TypeDefinitionIndex = 19927;

	class ClanAssistSettingSortingSaveData : public Il2CppObject
	{
	public:
		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLANASSISTSETTINGSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLANASSISTSETTINGSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

