#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class TableLoader; }

#define NESTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x144ADC0)
#define NESTED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x144ADD0)

	inline static constexpr unsigned int Nested_TypeDefinitionIndex = 14976;

	class Nested : public Il2CppObject
	{
	public:
		::MX::AssetBundles::TableLoader* instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NESTED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NESTED_.CCTOR_OFFSET))(nullptr);
		}

	};

