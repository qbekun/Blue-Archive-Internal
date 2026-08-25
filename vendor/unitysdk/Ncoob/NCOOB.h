#pragma once
#include "../unitysdk.h"

#define NCOOB_NCOOB_NGSMPERFORMHIGH_OFFSET UNITYSDK_OFFSET(0x944A1F0)
#define NCOOB_NCOOB_NGSMPERFORMLOW_OFFSET UNITYSDK_OFFSET(0x944A200)

namespace Ncoob
{
	inline static constexpr unsigned int NCOOB_TypeDefinitionIndex = 38103;

	class NCOOB : public Il2CppObject
	{
	public:
		::System::Void NgsmPerformHigh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOOB_NCOOB_NGSMPERFORMHIGH_OFFSET))(nullptr);
		}

		::System::Void NgsmPerformLow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOOB_NCOOB_NGSMPERFORMLOW_OFFSET))(nullptr);
		}

	};
}

