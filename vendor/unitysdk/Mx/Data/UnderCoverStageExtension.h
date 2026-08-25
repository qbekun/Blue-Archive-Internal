#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class UCStageTableInfo; }
namespace MX::Data::Excel { class UnderCoverStageExcel; }

#define MX_DATA_UNDERCOVERSTAGEEXTENSION_GETUCSTAGETABLEINFO_OFFSET UNITYSDK_OFFSET(0x1964960)

namespace MX::Data
{
	inline static constexpr unsigned int UnderCoverStageExtension_TypeDefinitionIndex = 16437;

	class UnderCoverStageExtension : public Il2CppObject
	{
	public:
		::MX::Data::UCStageTableInfo* GetUCStageTableInfo(::MX::Data::Excel::UnderCoverStageExcel* arg)
		{
			return (return (::MX::Data::UCStageTableInfo*(*)(::MX::Data::Excel::UnderCoverStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEEXTENSION_GETUCSTAGETABLEINFO_OFFSET))(arg, nullptr);
		}

	};
}

