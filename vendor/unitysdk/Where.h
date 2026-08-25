#pragma once
#include "unitysdk.h"

#define WHERE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERE_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERE_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Where_TypeDefinitionIndex = 28945;

	class Where : public Il2CppObject
	{
	public:
		Il2CppObject* m_Observable; // 0x0
		Il2CppObject* m_Observer; // 0x0

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WHERE_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WHERE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WHERE_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + WHERE_ONERROR_OFFSET))(arg, nullptr);
		}

	};

