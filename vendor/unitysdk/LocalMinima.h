#pragma once
#include "unitysdk.h"

#define LOCALMINIMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DB80)

	inline static constexpr unsigned int LocalMinima_TypeDefinitionIndex = 34388;

	class LocalMinima : public Il2CppObject
	{
	public:
		::System::Int64 Y; // 0x10
		TEdge* LeftBound; // 0x18
		TEdge* RightBound; // 0x20
		LocalMinima* Next; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALMINIMA_.CTOR_OFFSET))(nullptr);
		}

	};

