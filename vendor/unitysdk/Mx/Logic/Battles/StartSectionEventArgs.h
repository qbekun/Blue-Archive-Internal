#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_STARTSECTIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A02D0)
#define MX_LOGIC_BATTLES_STARTSECTIONEVENTARGS_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x12A0320)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int StartSectionEventArgs_TypeDefinitionIndex = 14097;

	class StartSectionEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _SectionId_k__BackingField; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STARTSECTIONEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SectionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STARTSECTIONEVENTARGS_GET_SECTIONID_OFFSET))(nullptr);
		}

	};
}

