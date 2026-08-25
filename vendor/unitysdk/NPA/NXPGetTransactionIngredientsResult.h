#pragma once
#include "../unitysdk.h"

namespace NPA::Ex::Model { class TransactionDataObject; }

#define NPA_NXPGETTRANSACTIONINGREDIENTSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6740)

namespace NPA
{
	inline static constexpr unsigned int NXPGetTransactionIngredientsResult_TypeDefinitionIndex = 25765;

	class NXPGetTransactionIngredientsResult : public Il2CppObject
	{
	public:
		::NPA::Ex::Model::TransactionDataObject* TransactionData; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETTRANSACTIONINGREDIENTSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

