#pragma once
#include "unitysdk.h"

#define VBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1D70)

	inline static constexpr unsigned int VBox_TypeDefinitionIndex = 33946;

	class VBox : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VBOX_.CTOR_OFFSET))(nullptr);
		}

	};

