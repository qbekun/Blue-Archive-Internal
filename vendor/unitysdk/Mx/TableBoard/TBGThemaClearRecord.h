#pragma once
#include "../../unitysdk.h"

#define MX_TABLEBOARD_TBGTHEMACLEARRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFC930)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGThemaClearRecord_TypeDefinitionIndex = 11178;

	class TBGThemaClearRecord : public Il2CppObject
	{
	public:
		::System::Int32 ThemaIndex; // 0x10
		Il2CppObject* SweepCosts; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTHEMACLEARRECORD_.CTOR_OFFSET))(nullptr);
		}

	};
}

