#pragma once
#include "../unitysdk.h"

#define NPA_NXPRESTOREPRODUCTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6840)

namespace NPA
{
	inline static constexpr unsigned int NXPRestoreProductResult_TypeDefinitionIndex = 25775;

	class NXPRestoreProductResult : public Il2CppObject
	{
	public:
		Il2CppObject* Transactions; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREPRODUCTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

