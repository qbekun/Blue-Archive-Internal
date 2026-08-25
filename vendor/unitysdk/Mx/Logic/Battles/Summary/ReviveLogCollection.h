#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_REVIVELOGCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B1300)
#define MX_LOGIC_BATTLES_SUMMARY_REVIVELOGCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x13B1340)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int ReviveLogCollection_TypeDefinitionIndex = 14477;

	class ReviveLogCollection : public ::MXUnderCover::Animation::UCPlayerAniController
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_REVIVELOGCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_REVIVELOGCOLLECTION_ADD_OFFSET))(arg, str, nullptr);
		}

	};
}

