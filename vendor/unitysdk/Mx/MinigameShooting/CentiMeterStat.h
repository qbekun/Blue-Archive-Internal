#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CentiMeterStat; }

#define MX_MINIGAMESHOOTING_CENTIMETERSTAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1461120)
#define MX_MINIGAMESHOOTING_CENTIMETERSTAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469A90)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CentiMeterStat_TypeDefinitionIndex = 15106;

	class CentiMeterStat : public Il2CppObject
	{
	public:
		::System::Single op_Implicit(::MX::MinigameShooting::CentiMeterStat* arg)
		{
			return ((::System::Single(*)(::MX::MinigameShooting::CentiMeterStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CENTIMETERSTAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CENTIMETERSTAT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

