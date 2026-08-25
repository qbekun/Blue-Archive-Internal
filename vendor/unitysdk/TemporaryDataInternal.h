#pragma once
#include "unitysdk.h"

#define TEMPORARYDATAINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAC730)

	inline static constexpr unsigned int TemporaryDataInternal_TypeDefinitionIndex = 9900;

	class TemporaryDataInternal : public Il2CppObject
	{
	public:
		::System::Int32 LastPlayerUniqueId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPORARYDATAINTERNAL_.CTOR_OFFSET))(nullptr);
		}

	};

