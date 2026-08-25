#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETSUPPORTSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x11DB9B0)
#define MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETMAINSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x11DB9C0)
#define MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETTOTALSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x11DB9D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonSlotCount_TypeDefinitionIndex = 13427;

	class EchelonSlotCount : public Il2CppObject
	{
	public:
		::System::Int32 GetSupportSlotCount(::FlatData::EchelonExtensionType* arg)
		{
			return ((::System::Int32(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETSUPPORTSLOTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMainSlotCount(::FlatData::EchelonExtensionType* arg)
		{
			return ((::System::Int32(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETMAINSLOTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTotalSlotCount(::FlatData::EchelonExtensionType* arg)
		{
			return ((::System::Int32(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCOUNT_GETTOTALSLOTCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

