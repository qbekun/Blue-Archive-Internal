#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_OPERATORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x975F1F0)

namespace System::Data
{
	inline static constexpr unsigned int OperatorInfo_TypeDefinitionIndex = 32257;

	class OperatorInfo : public Il2CppObject
	{
	public:
		::System::Data::Nodes* _type; // 0x10
		::System::Int32 _op; // 0x14
		::System::Int32 _priority; // 0x18

		::System::Void .ctor(::System::Data::Nodes* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Data::Nodes*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

