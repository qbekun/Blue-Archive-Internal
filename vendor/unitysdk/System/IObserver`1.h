#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOBSERVER`1_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IOBSERVER`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IOBSERVER`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IObserver`1_TypeDefinitionIndex = 23777;

	class IObserver`1 : public Il2CppObject
	{
	public:
		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOBSERVER`1_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOBSERVER`1_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOBSERVER`1_ONCOMPLETED_OFFSET))(nullptr);
		}

	};
}

