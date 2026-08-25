#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DA9A0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x93DA9D0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DAA40)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x93DAC40)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x93DACF0)
#define SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93DAD50)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenRegistration_TypeDefinitionIndex = 24058;

	class CancellationTokenRegistration : public Il2CppObject
	{
	public:
		::System::Threading::CancellationCallbackInfo* m_callbackInfo; // 0x10
		Il2CppObject* m_registrationInfo; // 0x18

		::System::Void .ctor(::System::Threading::CancellationCallbackInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationCallbackInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Unregister()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_UNREGISTER_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Threading::CancellationTokenRegistration* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationTokenRegistration*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

