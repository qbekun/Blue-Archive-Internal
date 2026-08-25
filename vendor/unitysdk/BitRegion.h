#pragma once
#include "unitysdk.h"

#define BITREGION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9E83810)
#define BITREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E83820)
#define BITREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E83830)
#define BITREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0x9E83840)

	inline static constexpr unsigned int BitRegion_TypeDefinitionIndex = 28928;

	class BitRegion : public Il2CppObject
	{
	public:
		::System::UInt32 bitOffset; // 0x10
		::System::UInt32 sizeInBits; // 0x14

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BITREGION_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BITREGION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BITREGION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		BitRegion* Overlap(BitRegion* arg)
		{
			return (return (BitRegion*(*)(BitRegion*, ::PVOID))((::PBYTE)hIl2Cpp + BITREGION_OVERLAP_OFFSET))(arg, nullptr);
		}

	};

