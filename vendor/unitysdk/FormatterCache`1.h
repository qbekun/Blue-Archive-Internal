#pragma once
#include "unitysdk.h"

#define FORMATTERCACHE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FORMATTERCACHE`1_TRYFORMATDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FormatterCache`1_TypeDefinitionIndex = 34724;

	class FormatterCache`1 : public Il2CppObject
	{
	public:
		Il2CppObject* TryFormatDelegate; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATTERCACHE`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryFormatDefault(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATTERCACHE`1_TRYFORMATDEFAULT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

