#pragma once
#include "unitysdk.h"

#define HBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1D20)

	inline static constexpr unsigned int HBox_TypeDefinitionIndex = 33945;

	class HBox : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOX_.CTOR_OFFSET))(nullptr);
		}

	};

