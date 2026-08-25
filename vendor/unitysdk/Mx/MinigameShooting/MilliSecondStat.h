#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class MilliSecondStat; }

#define MX_MINIGAMESHOOTING_MILLISECONDSTAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x145A590)
#define MX_MINIGAMESHOOTING_MILLISECONDSTAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469B80)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MilliSecondStat_TypeDefinitionIndex = 15107;

	class MilliSecondStat : public Il2CppObject
	{
	public:
		::System::Single op_Implicit(::MX::MinigameShooting::MilliSecondStat* arg)
		{
			return ((::System::Single(*)(::MX::MinigameShooting::MilliSecondStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MILLISECONDSTAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MILLISECONDSTAT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

