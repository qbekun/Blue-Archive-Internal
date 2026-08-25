#pragma once
#include "unitysdk.h"

#define WORKMEMORY_RESIZE_OFFSET UNITYSDK_OFFSET(0xA05CEC0)
#define WORKMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05D000)

	inline static constexpr unsigned int WorkMemory_TypeDefinitionIndex = 32654;

	class WorkMemory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lightMappings; // 0x10
		::Il2CppArray<::System::Object*>* uvRects; // 0x18

		::System::Void Resize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORKMEMORY_RESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKMEMORY_.CTOR_OFFSET))(nullptr);
		}

	};

