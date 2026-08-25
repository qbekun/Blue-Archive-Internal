#pragma once
#include "unitysdk.h"

#define TAKE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TAKE_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TAKE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TAKE_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Take_TypeDefinitionIndex = 28943;

	class Take : public Il2CppObject
	{
	public:
		Il2CppObject* m_Observer; // 0x0
		::System::Int32 m_Remaining; // 0x0

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAKE_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + TAKE_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TAKE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TAKE_ONNEXT_OFFSET))(arg, nullptr);
		}

	};

