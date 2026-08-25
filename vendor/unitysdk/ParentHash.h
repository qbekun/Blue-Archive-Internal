#pragma once
#include "unitysdk.h"

#define PARENTHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2839020)

	inline static constexpr unsigned int ParentHash_TypeDefinitionIndex = 34230;

	class ParentHash : public Il2CppObject
	{
	public:
		::System::Int32 m_Hash; // 0x10
		::System::Int32 m_ParentHash; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARENTHASH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

