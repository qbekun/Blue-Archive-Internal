#pragma once
#include "../unitysdk.h"

#define NPA_NXPGETAUTHTOKENRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5F00)
#define NPA_NXPGETAUTHTOKENRESULT_ISVALID_OFFSET UNITYSDK_OFFSET(0x9BE5F60)

namespace NPA
{
	inline static constexpr unsigned int NXPGetAuthTokenResult_TypeDefinitionIndex = 25759;

	class NXPGetAuthTokenResult : public Il2CppObject
	{
	public:
		::System::String* AuthToken; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETAUTHTOKENRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETAUTHTOKENRESULT_ISVALID_OFFSET))(nullptr);
		}

	};
}

