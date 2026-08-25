#pragma once
#include "../unitysdk.h"

#define NPA_NXPPURCHASEDLCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6760)

namespace NPA
{
	inline static constexpr unsigned int NXPPurchaseDLCResult_TypeDefinitionIndex = 25767;

	class NXPPurchaseDLCResult : public Il2CppObject
	{
	public:
		::System::Boolean IsSuccessPurchaseDLC; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPURCHASEDLCRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

