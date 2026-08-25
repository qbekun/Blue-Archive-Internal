#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9F11080)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETBIT_OFFSET UNITYSDK_OFFSET(0x9F22300)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_BITCOUNTTOULONGCOUNT_OFFSET UNITYSDK_OFFSET(0x9F222F0)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_TESTBIT_OFFSET UNITYSDK_OFFSET(0x9F22370)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_CLEARBIT_OFFSET UNITYSDK_OFFSET(0x9F10D90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DynamicBitfield_TypeDefinitionIndex = 28569;

	class DynamicBitfield : public Il2CppObject
	{
	public:
		Il2CppObject* array; // 0x10
		::System::Int32 length; // 0x28

		::System::Void SetLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetBit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETBIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 BitCountToULongCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_BITCOUNTTOULONGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TestBit(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_TESTBIT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearBit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_CLEARBIT_OFFSET))(arg, nullptr);
		}

	};
}

