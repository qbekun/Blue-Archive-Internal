#pragma once
#include "unitysdk.h"

#define ENTITYCOMPOSITIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7C40)

	inline static constexpr unsigned int EntityCompositionData_TypeDefinitionIndex = 9880;

	class EntityCompositionData : public Il2CppObject
	{
	public:
		::System::Int32 UniqueId; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYCOMPOSITIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};

