#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define MX_LOGIC_DATA_HANDSLOTCOUNT_GETHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x11DC1E0)
#define MX_LOGIC_DATA_HANDSLOTCOUNT_GETHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x11DC1F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HandSlotCount_TypeDefinitionIndex = 13432;

	class HandSlotCount : public Il2CppObject
	{
	public:
		::System::Int32 GetHandSlotCount(::FlatData::EchelonExtensionType* arg)
		{
			return ((::System::Int32(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HANDSLOTCOUNT_GETHANDSLOTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHandSlotCount(::System::Boolean arg)
		{
			return ((::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HANDSLOTCOUNT_GETHANDSLOTCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

