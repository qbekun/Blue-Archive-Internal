#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET UNITYSDK_OFFSET(0x9E85DD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET UNITYSDK_OFFSET(0x9E85DF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET UNITYSDK_OFFSET(0x9E85E20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x9E85E40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_INTTONORMALIZEDFLOAT_OFFSET UNITYSDK_OFFSET(0x9E85F00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOINT_OFFSET UNITYSDK_OFFSET(0x9E85F40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_UINTTONORMALIZEDFLOAT_OFFSET UNITYSDK_OFFSET(0x9E85F80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOUINT_OFFSET UNITYSDK_OFFSET(0x9E85FD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_REMAPUINTBITSTONORMALIZEFLOATTOUINTBITS_OFFSET UNITYSDK_OFFSET(0x9E86020)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NumberHelpers_TypeDefinitionIndex = 28935;

	class NumberHelpers : public Il2CppObject
	{
	public:
		::System::Int32 AlignToMultipleOf(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 AlignToMultipleOf(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 AlignToMultipleOf(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Approximately(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_APPROXIMATELY_OFFSET))(arg, arg, nullptr);
		}

		::System::Single IntToNormalizedFloat(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_INTTONORMALIZEDFLOAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 NormalizedFloatToInt(::System::Single arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single UIntToNormalizedFloat(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Single(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_UINTTONORMALIZEDFLOAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 NormalizedFloatToUInt(::System::Single arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::Single, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 RemapUIntBitsToNormalizeFloatToUIntBits(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_REMAPUINTBITSTONORMALIZEFLOATTOUINTBITS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

