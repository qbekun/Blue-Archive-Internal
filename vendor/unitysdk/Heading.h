#pragma once
#include "unitysdk.h"

#define HEADING_.CTOR_OFFSET UNITYSDK_OFFSET(0x284D0D0)

	inline static constexpr unsigned int Heading_TypeDefinitionIndex = 34260;

	class Heading : public Il2CppObject
	{
	public:
		HeadingDefinition* m_Definition; // 0x10
		::System::Int32 m_VelocityFilterStrength; // 0x14
		::System::Single m_Bias; // 0x18

		::System::Void .ctor(HeadingDefinition* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(HeadingDefinition*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + HEADING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

