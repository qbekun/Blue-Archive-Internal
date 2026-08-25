#pragma once
#include "unitysdk.h"

#define INTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DAD0)
#define INTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DAF0)

	inline static constexpr unsigned int IntRect_TypeDefinitionIndex = 34377;

	class IntRect : public Il2CppObject
	{
	public:
		::System::Int64 left; // 0x10
		::System::Int64 top; // 0x18
		::System::Int64 right; // 0x20
		::System::Int64 bottom; // 0x28

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTRECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(IntRect* arg)
		{
			((::System::Void(*)(IntRect*, ::PVOID))((::PBYTE)hIl2Cpp + INTRECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

