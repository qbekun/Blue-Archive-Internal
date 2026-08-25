#pragma once
#include "unitysdk.h"

#define TYPENASSEMBLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9217190)

	inline static constexpr unsigned int TypeNAssembly_TypeDefinitionIndex = 24662;

	class TypeNAssembly : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::System::String* assemblyName; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPENASSEMBLY_.CTOR_OFFSET))(nullptr);
		}

	};

