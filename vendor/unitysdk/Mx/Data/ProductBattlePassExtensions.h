#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ProductBattlePassExcel; }

#define MX_DATA_PRODUCTBATTLEPASSEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C030)

namespace MX::Data
{
	inline static constexpr unsigned int ProductBattlePassExtensions_TypeDefinitionIndex = 16506;

	class ProductBattlePassExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetParcels(::MX::Data::Excel::ProductBattlePassExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductBattlePassExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

	};
}

