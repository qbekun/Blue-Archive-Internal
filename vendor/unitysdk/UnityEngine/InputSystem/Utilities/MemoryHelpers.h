#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET UNITYSDK_OFFSET(0x9E82A90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET UNITYSDK_OFFSET(0x9E82AD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET UNITYSDK_OFFSET(0x9E82B30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x9E82CC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x9E82E70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x9E82E90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET UNITYSDK_OFFSET(0x9E82EA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET UNITYSDK_OFFSET(0x9E82F00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET UNITYSDK_OFFSET(0x9E82B50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET UNITYSDK_OFFSET(0x9E83070)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x9E830E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x9E83150)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET UNITYSDK_OFFSET(0x9E83180)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET UNITYSDK_OFFSET(0x9E83240)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET UNITYSDK_OFFSET(0x9E83520)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x9E836F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x9E83720)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET UNITYSDK_OFFSET(0x9E83730)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int MemoryHelpers_TypeDefinitionIndex = 28929;

	class MemoryHelpers : public Il2CppObject
	{
	public:
		::System::Void WriteSingleBit(::System::Object** arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Compare(::System::Object** arg, ::System::Object** arg, BitRegion* arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, BitRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReadSingleBit(::System::Object** arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteUIntAsMultipleBits(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 ComputeFollowingByteOffset(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteIntAsTwosComplementMultipleBits(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single ReadMultipleBitsAsNormalizedUInt(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 ReadMultipleBitsAsUInt(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MemCmpBitRegion(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 AlignNatural(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteNormalizedUIntAsMultipleBits(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadExcessKMultipleBitsAsInt(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MemCpyMasked(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetBitsInBuffer(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MemSet(::System::Object** arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteIntAsExcessKMultipleBits(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadTwosComplementMultipleBitsAsInt(::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Swap(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemCpyBitRegion(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

