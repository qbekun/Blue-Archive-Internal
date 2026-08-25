#pragma once
#include "unitysdk.h"

#define EDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Edge_TypeDefinitionIndex = 37994;

	class Edge : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x0
		::System::Int32 vertexFromId; // 0x0
		::System::Int32 vertexToId; // 0x0
		::System::Boolean isReversed; // 0x0
		Il2CppObject* userData; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGE_.CTOR_OFFSET))(nullptr);
		}

	};

