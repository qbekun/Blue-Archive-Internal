#pragma once
#include "unitysdk.h"

#define SELECT_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SELECT_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SELECT_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Select_TypeDefinitionIndex = 28941;

	class Select : public Il2CppObject
	{
	public:
		Il2CppObject* m_Observable; // 0x0
		Il2CppObject* m_Observer; // 0x0

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECT_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECT_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SELECT_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

